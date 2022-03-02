#include <stdio.h>
#include <conio.h>

int main() 
{
	int i,j,satir=23,bosluk=0,yildiz;
	yildiz=satir;
	
	for(i=0; i<satir; i++) 
	{
		for(j=0; j<yildiz; j++) 
		{
			printf("*");
		}
		
		if(i<(satir/2)) 
		{
			yildiz-=2;
			bosluk++;	
		}
		else 
		{
			yildiz+=2;
			bosluk--;	
		}
		printf("\n");
		for(j=0; j<bosluk; j++) 
		{
			printf(" ");
		}
	}
	getch();
	return 0;
	
}
