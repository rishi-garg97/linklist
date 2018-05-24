#include<stdio.h>
#include<conio.h>
#include<malloc.h>

typedef struct node
{
	int a;
	struct node *p;
}NODE;

NODE *header;
int count=0;
void n_node_from_last();
void main()
{
	NODE*ptr,*cpt;
	 int ch=1;
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
	
	n_node_from_last(); 
}

void n_node_from_last()
{
   NODE*newheader;
   int no,count1=1,print,flag=0;
   newheader=header;
   
   printf("\nenter n node from last");
   scanf("%d",&no);
   print=count-no+1;
   
   while(newheader!=NULL)
   {
   	   if(print==count1)
   	   {
   	printf("\nn th elemen from last is\t");
   	printf("%d",newheader->a);
	   flag=1;
	}
        else newheader=newheader->p;
		  count1++;
   }
   	
   	if(flag==0)
   	{
   		printf("\nposition not found");
	   }
}
