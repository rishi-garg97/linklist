#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

struct node
{
	int data;
struct node *link;
};

struct node *header;
void reverse(struct node*);

int main()
{
     struct node *ptr,*cpt;
    int ch,d;
 
    ptr=(struct node*)malloc(sizeof(struct node));
	printf("enter vlaue u want to insert");
	scanf("%d",&d);
	ptr->data=d;
	header=ptr;
	ch=1;
	while (ch==1)
	{
	
	cpt =(struct node *)malloc(sizeof(struct node));
	printf("enter vlaue u want to insert");
	scanf("%d",&d);
	cpt->data=d;
    ptr->link=cpt;
    ptr=cpt;

    printf("enter value again");
    scanf("%d",&ch);

	}
	ptr->link=NULL;
	printf("reverse elements are\n");
	reverse(header);
	return 0;

}

void reverse(struct node *head)
{
	if(head==NULL)
	return;
	
	reverse(head->link);
	printf("%d\n",head->data);
}
