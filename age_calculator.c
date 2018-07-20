#include <stdio.h>
#include <string.h>

int main()
{
	int d[3],m[3],y[3];
	//Data entry starts from here
	printf("\t\t Age Calculator\n");
	printf("==============================================================\n");
	printf("Enter date of today [Follow the instruction carefully]\n");
	printf("==========================\n");
	printf("day: \n");
	scanf("%d",&d[0]);
	printf("month: \n");
	scanf("%d",&m[0]);
	printf("year: \n");
	scanf("%d",&y[0]);
  printf("==============================================================\n");
	printf("Enter date of your birth\n");
	printf("==========================\n");
	printf("day: \n");
	scanf("%d",&d[1]);
	printf("month: \n");
	scanf("%d",&m[1]);
	printf("year: \n");
	scanf("%d",&y[1]);
  printf("==============================================================\n");

	//Calculation starts from here

	if (d[1]>d[0])
	{
		d[2]=(d[0]+30)-d[1];
		m[1]=(m[1]+1);
		if(m[1]>m[0])
		{
			m[2]=(m[0]+12)-m[1];
			y[1]=(y[1]+1);
			y[2]=(y[0]-y[1]);
			printf("You are %d years %d months %d days old.\n",y[2],m[2],(d[2]+1));
		}
		else
		{
			m[2]=(m[0]-m[1]);
			y[2]=(y[0]-y[1]);
			printf("You are %d years %d months %d days old.\n",y[2],m[2],(d[2]+1));
		}
	}
	else
	{
		d[2]=(d[0]-d[1]);
		if(m[1]>m[0])
		{
			m[2]=(m[0]+12)-m[1];
			y[1]=(y[1]+1);
			y[2]=(y[0]-y[1]);
			printf("You are %d years %d months %d days old.\n",y[2],m[2],(d[2]+1));
		}
		else
		m[2]=(m[0]-m[1]);
		y[2]=(y[0]-y[1]);
		printf("You are %d years %d months %d days old.\n",y[2],m[2],(d[2]+1));
	}
	return 0;

}
