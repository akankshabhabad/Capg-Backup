#include <stdio.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
 
#define BUFFER_SIZE 1024

int main()
{
    struct sockaddr_in serveraddr, clientaddr;
    socklen_t struct_size = sizeof(struct sockaddr_in);
    int fd_newsocket;
    int fd_server;
    unsigned short PORT = 8080;
    char message[BUFFER_SIZE];
	char buffer[BUFFER_SIZE];

    fd_server = socket(AF_INET, SOCK_STREAM, 0);
    if (fd_server == -1)
    {
        perror("Error creating socket\n");
        exit(EXIT_FAILURE);
    }
 
    memset(&serveraddr, 0, sizeof(serveraddr));
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_addr.s_addr = INADDR_ANY;
    serveraddr.sin_port = htons(PORT);
 
    if (bind(fd_server, (struct sockaddr *)&serveraddr, sizeof(serveraddr)) == -1)
    {
    perror("Error in binding");
    exit(EXIT_FAILURE);
}
 
    if (listen(fd_server, 5) == -1)
    {
        perror("Error in listening\n");
        exit(EXIT_FAILURE);
    }
    printf("Server is listening.....\n");
 
 
    fd_newsocket = accept(fd_server , (struct sockaddr *)&clientaddr, &struct_size);
    if (fd_newsocket == -1)
    {
        perror("Error accepting connection...\n");
        exit(EXIT_FAILURE);
    }
    printf("Connection Established\n");
    
	//Read data from the client

	read(fd_newsocket, buffer, BUFFER_SIZE);
	printf("Data received from client: %s\n", buffer);
    

	//Send a message to the client

	// Take user input for the message
    printf("Enter message to send to server: ");
    fgets(message, BUFFER_SIZE, stdin);

    // Remove trailing newline character
    message[strcspn(message, "\n")] = '\0';

	send(fd_newsocket, message, strlen(message), 0);
	printf("Message send to client\n");

	//Close the socket
    close(fd_server);
    close(fd_newsocket);
    return 0;
}
