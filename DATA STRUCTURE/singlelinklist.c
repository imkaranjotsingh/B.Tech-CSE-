#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
	int info;
	struct nodetype *next;
}node;
void createlist(node **head);
void traverse(node *head );
void insertatbeginning(node **head,int item);
void insertafterelement(node *head , int item,int after);
void insertatend(node **head,int item);
void deletfrombeginning(node **head);
void deletfromend(node **head);
void deletafterelement(node *head,int after);
void deletelist(node **head);

void main()
{
	node *head;
	int choice,element,after;
	createlist(&head);
	while(1)
	{
		printf("=====================\n");
		printf("Press 1 to ADD Element At Beginning\n");
		printf("Press 2 to ADD Element At END\n");
		printf("Press 3 to ADD Element After a Given Position\n");
		printf("Press 4 to DELETE Element from Beginning\n");
		printf("Press 5 to DELETE Element From END\n");
		printf("Press 6 to DELETE Element After a given Postion\n");
		printf("Press 7 to TRAVERSE The List\n");
		printf("Press 8 to EXIT \n\n");
		printf("Enter your Choice (1-8)\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				printf("\nEnter the Element:");
				scanf("%d",&element);
				insertatbeginning(&head,element);
				break;
			case 2:
				printf("\nEnter the Element:");
				scanf("%d",&element);
				insertatend(&head,element);
				break;
			case 3:
				printf("\nEnter the Element:");
				scanf("%d",&element);
				printf("\nEnter Element after which to insert:");
				scanf("%d",&after);
				insertafterelement(head,element,after);
				break;
			case 4:
				deletfrombeginning(&head);
				break;
			case 5:
				deletfromend(&head);
				break;
			case 6:
				printf("\nEnter Element after which U want to delet:");
				scanf("%d",&after);
				deletafterelement(head,after);
				break;
			case 7:
				if(head==NULL)
					printf("--List is Empty--");
				else
					traverse(head);
				printf("Press any key to continue...");
				getch();
				break;
			case 8:
				deletelist(&head);
				exit(1);
				
		}
	}
}
void createlist(node **head)
{
	*head=NULL;
}
void traverse(node *head)
{
	while(head!=NULL)
	{
		printf("%d\t",head->info);
		head=head->next;
	}
}
void insertatbeginning(node **head,int item)
{
	node *ptr;
	ptr = (node * ) malloc(sizeof(node));
	ptr->info=item;
	if(*head==NULL)
	{
		ptr->next=NULL;
	}
	else
	{
		ptr->next=*head;
		*head=ptr;
	}
}
void insertatend(node **head,int item)
{
	node *ptr,*loc;
	ptr=(node*) malloc(sizeof(node));
	ptr->info=item;
	ptr->next=NULL;
	if(*head==NULL)
	{
		*head=ptr;
	}
	else
	{
		loc=*head;
		while(loc->next!=NULL)
		{
			loc=loc->next;
		}
		loc->next=ptr;
	}
}
void insertafterelement(node *head ,int item,int after)
{
	node *ptr,*loc;
	while((head != NULL)&&(head->info!=item))
	{
		head=head->next;
	}
	loc=head;
	if(loc==(node *)NULL)
		return;
	ptr=(node *)malloc(sizeof(node));
	ptr->info=item;
	ptr->next=loc->next;
	loc->next=ptr;
}
void deletfrombeginning(node **head)
{
	node *ptr;
	if(*head ==NULL)
		return;
	else
	{
		ptr=*head;
		*head=(*head)->next;
		free(ptr);
	}
}
void deletfromend(node **head)
{
	node *ptr,*loc;
	if(*head==NULL)
		return;
	else if((*head)->next==(node*)NULL)
	{
		ptr=*head;
		*head=NULL;
		free(ptr);
	}
	else
	{
		loc=*head;
		ptr=(*head)->next;
		while(ptr->next != NULL)
		{
			loc=ptr;
		}
		ptr=ptr->next;
	}
	loc->next=NULL;
	free(ptr);
}
void deletafterelement(node *head,int after)
{
	node *ptr,*loc;
	while((head != NULL)&&(head->info!=after))
	{
		head=head->next;
	}
	loc=head;
	if(loc==(node *) NULL)
		return;
	ptr=loc->next;
	loc->next=ptr->next;
	free(ptr);
}
void deletelist(node **head)
{
	node *ptr;
	while(*head!=NULL)
	{
		ptr=*head;
		*head=(*head)->next;
		free(ptr);
	}
}
