#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node 
 {
     int a;
	 struct node *p;
}NODE;
NODE*header1,*header2,*header3;

void one();
void two();
void three();
void traverse1(NODE*);
void traverse2(NODE*);
void traverse3(NODE*);
void traverse_all();
void main()
{
	int n,s;
	printf("no of link list you want to create\n");
	printf("1.one\n2.two\n3.three");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1 :  one();break;
        case 2 :  two();break;
        case 3 :   three();break;
		default : exit (0);
				
	}
	
	printf("list do you want to show\n");
	printf("1.one\n2.two\n3.three\n4.all");
	scanf("%d",&s);
	
	switch(s)
	{
	
	case 1 :  traverse1(header1);break;
	case 2 :    traverse2(header2);break;
	case 3 : traverse3(header3);break;
    case 4 :traverse_all();break;

	default :exit(0);
   }  getch();
}

void one()
{
      int ch;
	  NODE *ptr1,*cpt1;
	  ptr1=(NODE*)malloc(sizeof(NODE));

	  printf("enter frst list\n");

	  printf("enter value");
	  scanf("%d",&ptr1->a);
	  header1=ptr1;
	  printf("press 1 to continue");
	  scanf("%d",&ch);

	  while(ch==1)
	  {
			   cpt1=(NODE*)malloc(sizeof(NODE));
			   printf("enter value");
			   scanf("%d",&cpt1->a);
			   ptr1->p=cpt1;
			   ptr1=cpt1;
			   cpt1->p=NULL;


		   printf("press 1 to continue");
		   scanf("%d",&ch);


	   }
	  ptr1->p=NULL;

}


void two()
{

	   int ch;
	  NODE *ptr2,*cpt2;
	  ptr2=(NODE*)malloc(sizeof(NODE));

	  one();
//	   clrscr();
	  printf("enter 2 list\n");
	  printf("enter value");
	  scanf("%d",&ptr2->a);
	  header2=ptr2;
	  printf("press 1 to continue");
	  scanf("%d",&ch);

	  while(ch==1)
	  {
			   cpt2=(NODE*)malloc(sizeof(NODE));
			   printf("enter value");
			   scanf("%d",&cpt2->a);
			   ptr2->p=cpt2;
			   ptr2=cpt2;
			   cpt2->p=NULL;


		   printf("press 1 to continue");
		   scanf("%d",&ch);


	   }
	  ptr2->p=NULL;

}


void three()
{
   int ch;
	  NODE *ptr3,*cpt3;
	  ptr3=(NODE*)malloc(sizeof(NODE));

      two();
  //clrscr();
      printf("enter third list\n");
      printf("enter value");
	  scanf("%d",&ptr3->a);
	  header3=ptr3;
	  printf("press 1 to continue");
	  scanf("%d",&ch);

	  while(ch==1)
	  {
			   cpt3=(NODE*)malloc(sizeof(NODE));
			   printf("enter value");
			   scanf("%d",&cpt3->a);
			   ptr3->p=cpt3;
			   ptr3=cpt3;
			   cpt3->p=NULL;


		   printf("press 1 to continue");
		   scanf("%d",&ch);


	   }
	  ptr3->p=NULL;
}

void traverse1(NODE*header)
{
	printf("enter values are\n");
	while(header!=NULL)
	{
		printf("\t%d",header->a);
	header=header->p;
	}
	printf("\tNULL");
   printf("\n");

}

void traverse2(NODE*header)
{
	printf("enter values are\n");
	while(header!=NULL)
	{
		printf("\t%d",header->a);
	header=header->p;
	}
	printf("\tNULL");
   printf("\n");

}

void traverse3(NODE*header)
{
	printf("enter values are\n");
	while(header!=NULL)
	{
		printf("\t%d",header->a);
	header=header->p;
	}
	printf("\tNULL");

 printf("\n");
}

void traverse_all()
{
	traverse1(header1);
	traverse2(header2);
	traverse3(header3);
}
