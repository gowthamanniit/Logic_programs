#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,r=4,c=4,m=r,k=1,l=2;
	clrscr();
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
		printf(" %d%d ",i,j);
		}
		printf("\n");
	}
	printf("\nResult\n");
	for(i=1;i<(m+m);i++)
	{
		if(i<=m)
		{
		k=i;
		for(j=1;j<=i;j++)
		{
		printf(" %d%d ",k--,j);
		}
		}
		else
		{
		k=m;
		for(j=l++;j<=m;j++)
		{
		printf(" %d%d ",k--,j);
		}

		}
		printf("\n");
	}
	getch();
}