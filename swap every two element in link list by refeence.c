#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
	 int a;
	 struct node *p;
}NODE;

NODE*header;
void traverse();
void swap();
int main()
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
	swap();
  return 0;
	   getch();

}
void traverse()
{
	printf("enter values are\n");
	while(header!=NULL)
	{
		printf("\t%d",header->a);
	header=header->p;
	}

}

void swap()
{
	NODE*temp,*header1,*header2,*t;
	header1=header;
	header2=header->p;
    header=header->p;
	
	  while(header1!=NULL&&header1->p!=NULL)
	 {      
	    
		if(header2->p->p==NULL||header2->p==NULL)
		header1->p=header2->p;
		
		else
		header1->p=header2->p->p;
		t=header2->p;
		header2->p=header1;
	    header2=t->p;
	    header1=t;
     
	 }

   traverse();
}
