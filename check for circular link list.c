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
void chng_into_cll();
void check_cll();
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
	  check_cll();
	   getch();

}

void check_cll()
{
	NODE*newheader;
	int flag=1,op=1;
	newheader=header;
	
	if(newheader==NULL)
	printf("list is empty");
	else 
	{
		while(newheader!=NULL)
	   {  
	       if(newheader->p==header)
			{
				printf("circular link list");
			flag=0;	break;}
			
			newheader=newheader->p;
	   }
   }
  

   if(flag==1)
   printf("not circular link list\n");


     
     while(op!=3)
     {

     printf("\nselect options\n1.change into circular link list\n2.check for circular link list\n3.exit");
     scanf("%d",&op);
	 
         switch(op)
          {
	
	       case 1:chng_into_cll();break;
           case 2:check_cll();break;  
           case 3:exit(0);  
           default :printf("wrong choice");  
         		 
         }
      }
}
void chng_into_cll()
{
	NODE*newheader;
	newheader=header;
	
	while(newheader!=NULL)
	{
	    if(newheader->p==NULL)
		{
		newheader->p=header;
         break;
        }
		else newheader=newheader->p;
	}
}
