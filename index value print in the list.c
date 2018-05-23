#include<stdio.h>
#include<conio.h>
#include<malloc.h>

typedef struct node
{
	int a;
	struct node *p;
}NODE;

int count=0;

NODE *header;
void  print_index_node();
void main()
{
	 int ch=1;
	 NODE*ptr,*cpt;
	 ptr=(NODE*)malloc(sizeof(NODE));
	 header=ptr;
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
	 ptr=header;
	 while(ptr!=0)
	 {
	 	printf("%d\n",ptr->a);
	 	ptr=ptr->p;
	 	count++;
	 }
	 
	 printf("\nno of values are = %d ",count);
	 
	 print_index_node();
}
void  print_index_node()1
{
	NODE*newheader;
	int no,count1=1,flag=0;
	newheader=header;
	
	printf("\nenter index no of element to be printed");
	scanf("%d",&no);
	
	while(newheader!=NULL)
	{
		if(count1==no)
		{
			printf("\nindex element is");
			printf("%d",newheader->a);
			flag=1;
		}
		
		else newheader=newheader->p;
		count1++;
	}
	if(flag==0)
	{
		printf("\nindex element not found");
	}
}
