#include <stdio.h>
#include <conio.h>
 
main()
{
    int adet = 7, bosluk = 1;
    for(int  i = 0; i < 7; i++)
    {
        for(int k = 0; k < bosluk; k++)
        {
            printf(" ");            
        }
        for(int j = 0; j < adet; j++)
        {
            printf("*");
        }
        printf("\n");
        adet--;
        bosluk++;
    }
    getch();
    return 0;
}
