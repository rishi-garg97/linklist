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
void sort(NODE*);
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
	 printf("11.Traverse\n22.sort\n33.exit\t");
	 scanf("%d",&op);
	 
	 switch (op)
	 
	 {
	 	case 11:	
        traverse(header);break;      
	    
		case 22:
	    sort(header);break;
	    
		case 33:
		exit(0);
			
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


void sort(NODE*header)
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
	traverse(header);
	
}
