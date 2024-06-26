#include <stdio.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main()
{
        struct sockaddr_in server_addr;
        int client_sockfd;
        unsigned short PORT = 8080;
	    char message[BUFFER_SIZE];
		char buffer[BUFFER_SIZE];
 
        client_sockfd = socket(AF_INET, SOCK_STREAM, 0);
 
        if(client_sockfd == -1){
                perror("Error creating socket");
                exit(EXIT_FAILURE);
        }
 
        memset(&server_addr, 0, sizeof(server_addr));
 
        server_addr.sin_family = AF_INET;
        server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
        server_addr.sin_port = htons(PORT);
 
        if(connect(client_sockfd,(struct sockaddr *)&server_addr, sizeof(server_addr)) == -1){
                perror("Error connecting to server");
                exit(EXIT_FAILURE);
        }

        printf("Connected to server!\n");
       
	    //Send a message to server
		// Take user input for the message
        printf("Enter message to send to server: ");
        fgets(message, BUFFER_SIZE, stdin);

        // Remove trailing newline character
        message[strcspn(message, "\n")] = '\0';
        
		send(client_sockfd, message, strlen(message), 0);
		printf("Message sent to server...\n"); 

        //Read form the server

		read(client_sockfd, buffer, BUFFER_SIZE);
		printf("Data received form server: %s\n", buffer);


        close(client_sockfd);

        return 0;

}
