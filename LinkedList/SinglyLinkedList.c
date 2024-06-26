#include<stdio.h>
#include<stdlib.h>
struct node* createnode();
void createLinkedList(struct node**);
void displayLinkedList(struct node*);

struct node
{
	int data;
	struct node *next;
};

struct node* createnode()
{
	struct node *newnode;
	int data;
	newnode = (struct node*) malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("Memory not allocated");
		exit(1);
	}
	else
	{
		printf("\nEnter the data: ");
		scanf("%d", &newnode->data);
		newnode->next = NULL;
		return newnode;
	}
}


void createLinkedList(struct node** head)
{
	struct node* newnode= NULL;
	struct node* travnode = *head;
	newnode = createnode();
	if(*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while(travnode->next != NULL)
		{
			travnode= travnode->next;

		}
		travnode->next = newnode;
	}

}

void displayLinkedList(struct node* head)
{
	while(head != NULL)
	{
		printf("%d ->", head->data);
		head = head->next;
	}

}

void find_length(struct node* head)
{
	struct node* temp = head;
	int count = 0;
	while(temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	printf("\nLength of linked list: %d", count);

}

int countnode(struct node* head)
{
	int count = 0;
	while(head->next != NULL)
	{
		count++;
		head = head->next;
	}
	return count;
	
}

void insertAtFirst(struct node** head)
{
	struct node* newnode = NULL;
	newnode = createnode();
	newnode->next = *head;
	*head = newnode;
}

void insertAtPos(struct node** head)
{
	struct node* newnode = NULL;
	struct node* travnode = *head;
	int pos, n;
	printf("Enter the position: ");
	scanf("%d",&pos);
	n = countnode(*head);
	if(pos == 1)
	{
		insertAtFirst(head);
	}

	else if(pos == n + 1)
	{
		createLinkedList(head);
	}

	else if(pos < 1 || pos > n + 1)
	{
		printf("Invalid Position...");
		return;
	}
	else
	{
		newnode = createnode();
		for(int i = 1; i < pos - 1; i++)
		{
			travnode = travnode->next;
		}
		newnode->next = travnode->next;
		travnode->next = newnode;
	}
}


void deleteAtLast(struct node** head)
{
	struct node* travnode = *head;
	if(*head == NULL)
	{
		printf("Linked list not available");
		return;
	}

	else if((*head)->next == NULL)  // if we have only one node
	{
		free(*head);
		*head = NULL;
	}

	else
	{
		while(travnode->next->next != NULL)  //more than two nodes
		{
			travnode = travnode->next;
		}
		free(travnode->next);
		travnode->next=NULL;
	}
}


void deleteAtFirst(struct node** head)
{
	if(*head == NULL)
	{
		printf("Linked list not available");
		return;
	}
	else
	{
		struct node* tempnode = *head;
		*head = (*head)->next;
		free(tempnode);
	}
}

void deleteAtPos(struct node** head)
{
	int pos, n;
	struct node* travnode1= *head;
	struct node* travnode2 = NULL;
	printf("Enter the position: ");
	scanf("%d", &pos);
	n= countnode(*head);
	if(pos == 1)
	{
		deleteAtFirst(head);
	}
	else if(pos == n)
	{
		deleteAtLast(head);
	}
	else if(pos<1 || pos>n)
	{
		printf("Invalid Position...");
		return;
	}
	else
	{
		for(int i = 1; i < pos-1; i++)
		{
			travnode1=travnode1->next;
		}
		travnode2 = travnode1->next;
		travnode1->next= travnode2->next;
    	free(travnode2);

	}
}

void sortingLinkedList(struct node* head)
{
	struct node *trav1 = head;
	struct node *trav2;
	int i, temp;
	for(trav1=head; trav1!=NULL;trav1 = trav1->next)
	{
		for(trav2= trav1->next; trav2!=NULL;trav2 = trav2->next)
		{
			if(trav1->data > trav2->data)
			{
				temp = trav1->data;
				trav1->data = trav2->data;
				trav2->data = temp;
			}
		}
	}

	printf("\nAfter sorting linked list: ");
	while(head != NULL)
	{
		printf("%d ->", head -> data);
		head = head->next;
	}
}


int main(void)
{
	struct node *firstnode = NULL;
	int choice;
	do
	{
		printf("\n\n1. Create Linked List");
		printf("\n2. Display Linked List");
		printf("\n3. Find Length of Linked List");
		printf("\n4. Insert at First");
		printf("\n5. Insert at Last");
		printf("\n6. Insert at Position");
		printf("\n7. Delete at First");
		printf("\n8. Delete at Last");
		printf("\n9. Delete at Position");
		printf("\n10. Sorting linked list");
		printf("\n\nEnter your choice:");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1: createLinkedList(&firstnode);
			      break;
		    case 2: displayLinkedList(firstnode);
			      break;
		    case 3: find_length(firstnode);
			      break;
		    case 4: insertAtFirst(&firstnode);
			      break;
		    case 5: createLinkedList(&firstnode);
			      break;
			case 6: insertAtPos(&firstnode);
			      break;
			case 7: deleteAtFirst(&firstnode);
			      break;
			case 8: deleteAtLast(&firstnode);
			      break;
		    case 9: deleteAtPos(&firstnode);
			      break;
		    case 10: sortingLinkedList(firstnode);
			      break;
		    default: printf("\nInvalid choice");
		}
	}while(choice != 0);

	return 0;
}
