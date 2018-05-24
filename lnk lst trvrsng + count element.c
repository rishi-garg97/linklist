#include<stdio.h>
#include<conio.h>
#include<malloc.h>

typedef struct node
{
	int a;
	struct node *p;
}NODE;

NODE *head,*ptr,*cpt;

void main()
{
	 int ch=1,count=0;
	 ptr=(NODE*)malloc(sizeof(NODE));
	 head=ptr;
	 printf("enter value");
	 scanf("%d",&ptr->a);
	 
	 while(ch==1)
	 {
	 	cpt=(NODE*)malloc(sizeof(NODE));
	 	printf("enter value");
	 	scanf("%d",&cpt->a);
	 	ptr->p=cpt;
	 	ptr=cpt;
	 	
	 	printf("press 1 for continue");
	 	scanf("%d",&ch);
	 	
	 }
	 printf("enter values are\n");
	 ptr->p=NULL;
	 ptr=head;
	 while(ptr!=0)
	 {
	 	printf("%d\n",ptr->a);
	 	ptr=ptr->p;
	 	count++;
	 }
	 
	 printf("\nno of values are = %d ",count);
	 
}
