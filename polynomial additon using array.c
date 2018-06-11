#include < stdio.h >
#include < conio.h > 
#define max 20

struct poly
{
	int exp,coef;
};

void main()
{
	struct poly p1[max],p2[max],p3[max];
	int max1,max2,max3;	
	clrscr();
	printf("\nEnter first poly : ");
	max1 = read_poly(p1);
	printf("\nEnter second poly : ");
	max2 = read_poly(p2);	
	max3 = add_poly(p1,p2,p3,max1,max2);	
	printf("\nFirst poly is ");
	print_poly(p1,max1);
	printf("\nSecond poly is ");
	print_poly(p2,max2);
	printf("\n The resultant poly after addition is");
	print_poly(p3,max3);
}

int read_poly(struct poly p[])
{
	int i,texp;
	i=0;
	printf("\nEnter exp ( use -1 to exit) : ");
	scanf("%d",&texp);
	while ( texp != -1)
	{
		p[i].exp = texp;
		printf("\nEnter coef : ");
		scanf("%d",&p[i].coef);
		i++;
		printf("\nEnter exp ( use -1 to exit) : ");
		scanf("%d",&texp);
	} 
	return(i);
}