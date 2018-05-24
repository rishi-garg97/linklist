#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
	 int a;
	 struct node *p;
}NODE;

NODE*header;
void min_max();
void sort();
void traverse();
void main()
{
	  int ch;
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

	   getch();
sort();
}

void traverse()
{
       printf("enter elements are");
	while(header!=NULL)
	{
		printf("\t%d",header->a);
		header=header->p;
	}

	printf("\tNULL");
}


void sort()
{
	NODE*ptr,*cpt;
	int t;
	ptr=header;
	if(header==NULL||header->p==NULL)
	{
		printf("sort not possible");
		return ;
	}
	
	else
	{
		
		while(ptr->p!=NULL)
		{
			cpt=ptr->p;
			while(cpt!=NULL)
			{
				if(ptr->a>cpt->a)
		         {
		         	t=ptr->a;
		         	ptr->a=cpt->a;
		         	cpt->a=t;
				 }		
				 
				 else {
				 	      cpt=cpt->p;
				       }
			}
	    ptr=ptr->p;
		}
		
	}
	//traverse();
	min_max();
	traverse();
}

void min_max()
{
	NODE*newheader,*temp,*temp1,*newheader1;
	newheader1=newheader=header;
	if(newheader->p->p==NULL)
	return;
	
	while(newheader1->p!=NULL)
	{
	  newheader=header;      
	while(newheader->p!=NULL)
	{
		temp=newheader;
		newheader=newheader->p;
	}
	temp->p=NULL;
	temp1=newheader1->p;
	newheader1->p=newheader;
	newheader1->p->p=temp1;
	newheader1=newheader1->p->p;
    }
	printf("erer");
}
