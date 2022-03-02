#include <stdio.h>
#include <conio.h>
 
int main(){
    
    printf("Girilen Kenar Sayisi Kadar Ucgen Cizdiren Program\n");
    
    int sira, i, j, yildizSayisi=1, boslukSayisi;
    
    printf("Sira Giriniz: ");
    scanf("%d", &sira);
    boslukSayisi = sira - 1;
    
    for(i=0; i<sira; i++)
	{
        
        for(j=0; j<boslukSayisi; j++) 
		{
			printf(" ");
		}
            
        for(j=0; j<yildizSayisi; j++)
		{
			printf("*"); 
		}
		            
        printf("\n");    
        yildizSayisi+=2;   
        boslukSayisi--; 
    }
    getch();
    return 0;
}
