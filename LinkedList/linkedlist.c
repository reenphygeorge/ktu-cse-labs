/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - LinkedList

DATE - 31st January, 2022

***********************************************************/
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head,*newnode,*temp,*temp2;

void add_end(int item)
{
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = item;
	if(head == NULL)
	{
		head = newnode;
		newnode->next = NULL;
	}
	else
	{
		temp = head;
		while(temp -> next != NULL)
		{
			temp = temp->next;
		}
		temp->next=newnode;
		newnode->next = NULL;
	}
}

void add_beg(int item)
{
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> data = item;
	if(head == NULL)
	{
		head = newnode;
		newnode -> next = NULL;
	}
	else
	{
		newnode -> next = head;
		head = newnode;
	}

}

void add_any(int item, int pos)
{
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> data = item;
	int count = 1;
	if(head == NULL)
	{
		head = newnode;
		newnode -> next = NULL;
	}
	else
	{
		temp = head;
		while(count<pos)
		{
			temp=temp->next;
			count++;
		}
		temp2 = temp -> next;
		temp -> next = newnode;
		newnode -> next = temp2;
	}
}

void delete_end()
{
	temp = head;
	temp2 = temp->next;
	while(temp2->next != NULL)
	{
		temp=temp->next;
		temp2=temp->next;
	}
	temp->next=NULL;
	printf("Deleted element: %d",temp2->data);
	free(temp2);
}

void delete_beg()
{
	temp = head->next;
	printf("Deleted Element: %d", head->data);
	free(head);
	head = temp;
}

void delete_any(int pos)
{
	int count = 1;
	temp = head;
	while(count<pos)
	{
		temp=temp->next;
		count++;
	}
	temp2=temp->next->next;
	printf("Deleted element: %d",temp->next->data);
	free(temp->next);
	temp->next=temp2;
}
void display()
{
	temp = head;
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

int main()
{
	int n,no,pos;
	do {
		printf("\n1. Add at end");
		printf("\n2. Add at beginning");
		printf("\n3. Add anywhere");
		printf("\n4. Delete from end");
		printf("\n5. Delete from start");
		printf("\n6. Delete from anywhere");
		printf("\n7. Display");
		printf("\n8. Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&n);
		switch (n)
		{
			case 1:
				printf("Enter the no: ");
				scanf("%d", &no);
				add_end(no);
				break;
			case 2:
				printf("Enter the no: ");
				scanf("%d", &no);
				add_beg(no);
				break;
			case 3:
				printf("Enter the no: ");
				scanf("%d", &no);
				printf("Enter the position: ");
				scanf("%d", &pos);
				add_any(no,pos);
				break;
			case 4:
				delete_end();
				break;
			case 5:
				delete_beg();
				break;
			case 6:
				printf("Enter the position: ");
				scanf("%d",&pos);
				delete_any(pos);
				break;
			case 7:
				display();
				break;
		}
	}while(n != 8);
	return 0;
}
