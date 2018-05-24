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
void insert_at_pos(NODE*);
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
	 printf("11.Traverse\n22.insert at position\n33.exit");
	 scanf("%d",&op);
	 
	 switch (op) 
	 
	 {
	 	case 11:	
        traverse(header);break;      
	    
       	case 22:
		insert_at_pos(header);break;  
		
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

void insert_at_pos(NODE*header)
{   
    NODE*newnode,*temp,*newheader;
	int val,flag=1;
	newheader=header;
	newnode=(NODE*)malloc(sizeof(NODE));

	printf("enter value after new value will be attached ");
	scanf("%d",&val);
	
 	
	if(header==NULL)
	printf("list is empty");
	
	
	
	else
	{
	
	     while(header!=NULL)
	     {
					    
			    if(header->a==val)
		       {    temp=header->p;
	             	header->p=newnode;
	         	    newnode->p=temp;
					flag=0;
					break;
		       }
	 	         else
                        
		         header=header->p;
	         
        }
        
   }
   
   if(flag==1)
   printf("position value not found");
   
   else 
   
   {
      printf("enter value to be attached");
   	  scanf("%d",&newnode->a);
	
   }
   traverse(newheader);
}
