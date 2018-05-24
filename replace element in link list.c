#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node
{
	 int a;
	 struct node *p;
}NODE;

NODE*header;
void traverse(NODE*);
void swap(NODE*header);
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
	 
	 printf("enter option\n");
	 printf("11.Traverse\n22.swap\n33.exit\t");
	 scanf("%d",&op);
	 
	 switch (op)
	 
	 {
	 	case 11:	
        traverse(header);break;      
	    
	    case 22:
	    	swap(header);break;
	    	
	     case 33:
		exit (0);

		default:
		printf("wrong choice");
	}

	   getch();

}

void traverse(NODE*header)
{
	printf("enter values are\n");
	while(header!=NULL)
	{
		printf("\t%d",header->a);
	header=header->p;
	}
	printf("\tNULL");
	
	
}

void swap(NODE*header)
{
	int n,old,new1,flag=1;
	NODE*newheader;
	newheader=header;
	
	printf("enter elements to be replaced");
	scanf("%d",&old);
	printf("enter new element in place of old element");
	scanf("%d",&new1);

  
	while(header!=NULL)
	{
		if(header->a==old)
		{
		header->a=new1;
		flag=0;
	    }
		else 
		{
		header=header->p;
		}
		
    }	
    if(flag==1)
    {
    	printf("\n%d\t not in the list",old);return;
	}
	traverse(newheader);
	
	
}
