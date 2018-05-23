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
void delete_value(NODE*);

int main()
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
	 printf("11.Traverse\n22.delete_value\n33.exit");
	 scanf("%d",&op);
	 
	 switch (op) 
	 
	 {
	 	case 11:	
        traverse(header);break;      
	    
	    
	    case 22:
	    delete_value(header);break;
 		
		case 33:
			exit(0);
			
			default:
				 printf("wrong choice");
	}
	 return 0; 
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

void delete_value(NODE*header)
{
	NODE *newheader,*temp;
       int flag=1,val;
       newheader=header;

       if(header==NULL)
       printf("empty list");
       printf("enter value to be deleted");
       scanf("%d",&val);

       if(header->a==val)
	{   
	   flag=0;
	   newheader=header->p;
	}
       else
	{
	    while(header!=NULL)
	     {
	    	if(header->a==val)
		   {
		     flag=0;
		    header=header->p;
		     temp->p=header;
		   }
		    else
		  {  
		    temp=header;
		    header=header->p;
          }
        }
	}

	if(flag==1)
	printf("element not in the list");
	traverse(newheader);
}
