#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],n,r,c,i,j;
	printf("ENTER NUMBER OF ROWS OF MATRIX\n");
	scanf("%d",&i);
	printf("ENTER NUMBER OF COLUMNS OF MATRIX\n");
	scanf("%d",&j);
	printf("ENTER ELEMENTS OF MATRIX\n");
	for(r=0;r<i;r++)
	{
	     for(c=0;c<j;c++)
	    scanf("%d",&a[r][c]);
	}
	printf("\n ELEMENTS OF MATRIX ARE\n");
	for(r=0;r<i;r++)
	{
	     for(c=0;c<j;c++)
	    {
		  printf("%d\t",a[r][c]);
	    }
	    printf("\n");
	}
	getch();
}
