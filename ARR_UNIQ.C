#include<stdio.h>
#include<conio.h>


void main()

{

	int a[]={11,22,33,44,33,22,11,11,11,23,10};
	int i,j,temp,n,test=0;
	clrscr();
	n=sizeof(a)/2;
/*	for(i=0;i<n;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
	     if(a[i]>a[j])
	     {
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	     }
	  }
	}

	printf("\n ascending order :\n");
	for(i=0;i<n;i++)
	{
	 printf(" %d ",a[i]);
	}
*/
	printf("\n unique values:\n %d ",a[0]);
	for(i=1;i<n;i++)
	{
	  for(j=0;j<i;j++)
	  {
		if(a[i]==a[j])
		{
		test=1;
		break;
		}
	  }
	  if(test==0)
	  {
	  printf(" %d ",a[i]);
	  }
	   test=0;
	}
	getch();
}