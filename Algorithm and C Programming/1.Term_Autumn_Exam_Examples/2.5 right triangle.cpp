#include <stdio.h>
#include <conio.h>

int main() 
{
	int i,j,k,m,kenar=7,yildiz=1,hashtag=0,bosluk=6;
	
	for(i=0;i<7;i++) 
	{
		for(j=0;j<bosluk;j++)
		{
			printf(" ");
		}
		for(k=0;k<yildiz;k++)
		{
			printf("*");
		}
		for(m=0;m<hashtag;m++)
		{
			printf("#");
		}
		bosluk--;
		hashtag++;
		printf("\n");
	}
	getch();
	return 0;
}
