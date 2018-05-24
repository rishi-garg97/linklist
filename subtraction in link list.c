#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
	 int a;
	 struct node *p;
}NODE;

NODE*header;
int value();
int create_ll();
void traverse();
void main()
{
	int val1,val2,rem;
	printf("enter frst link list\n");
    val1 =create_ll();
	printf("enter second link list\n");
	val2 =create_ll();
	
	printf("%d\n%d",val1,val2); 
	
	rem=val1-val2;
	printf("subtraction of two linked list is = %d ",rem); 
	   getch();

}



int create_ll()
{
	
	  int val,ch;
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
  
  val=value();
	return val;
}

int value()
{
	NODE*newheader;
	int b,a=0,pow=10;
	newheader=header;
       
	while(newheader!=NULL)
	{
		if(newheader==header)
	    {
		   b=newheader->a;
		   a=b;
	    }
		else
		{
			pow=10;
			while(newheader->a>=pow)
			{
			   pow*=10;
		    }
			a=a*pow+newheader->a;
	    }
	    
		newheader=newheader->p;
	}

	return a;
}

void traverse()
{
	NODE*newheader;
	newheader=header;
       printf("enter elements are");
	while(newheader!=NULL)
	{
		printf("\t%d",newheader->a);
		newheader=newheader->p;
	}

	printf("\tNULL");
}
