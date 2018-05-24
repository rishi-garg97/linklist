#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct node
{
	int a;
	struct node*p;
}NODE;
NODE*header;
void move_in_front();
void traverse();
void main()
{
	
	
		  int ch; int op;
	  NODE *ptr,*cpt;  
	  ptr=(NODE*)malloc(sizeof(NODE));
	  printf("enter value");
	  scanf("%d",&ptr->a);
      header=ptr;
	  printf("press 1 to continue");
	  scanf("%d",&ch);

	  while(ch==1)
	  {
	  
	    
			  cpt=(NODE*)malloc(sizeof(NODE));
			   printf("enter value");
			   scanf("%d",&cpt->a);
			   ptr->p=cpt;
			   ptr=cpt;
			   cpt->p=NULL;
		
		   
		   printf("press 1 to continue");
		   scanf("%d",&ch);
			   	  
	   }  
	   ptr->p=NULL;
    move_in_front();
}


void traverse()
{
	printf("enter values are\n");
	while(header!=NULL)
	{
		printf("\t%d",header->a);
	header=header->p;
	}
	printf("\tNULL");

}

void move_in_front()
{
	NODE*newheader,*prev,*header1;
	newheader=header;

	if(newheader->p==NULL)
	{
	   traverse();
	   return ;
	}



	while(newheader!=NULL)
	 {
	    if(newheader->p->p==NULL)
	    {
	    prev=newheader->p;
	    break;
	    }

	    else newheader=newheader->p;

	 }
	 prev=newheader->p;
	 newheader->p=NULL;
	 prev->p=header;
	 header=prev;

	traverse();

}
