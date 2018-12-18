#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[100],temp;
	int i,j,len;
	clrscr();
	printf("Enter name:");
	scanf("%s",name); // mary
	len=strlen(name);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(name[i]>name[j])
			{
			temp=name[i];
			name[i]=name[j];
			name[j]=temp;
			}
		}
	}

	printf("\n your name char in ascending order:");
	for(i=0;i<len;i++)
	{
		printf("%c",name[i]);
	}

	getch();
}