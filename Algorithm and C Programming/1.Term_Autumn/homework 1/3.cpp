#include <stdio.h>
#include <conio.h>

int main(){
	
	printf("TR-Uc Sayinin Ortalamasini Bulan Program\n");
	printf("EN-Program to Find The Average of 3 Numbers\n");
	printf("-------------------------------------------\n");
	
	int sayi1,sayi2,sayi3;
	printf("Lutfen 1. Sayiyi Giriniz (Please Enter The 1st Number): ");
    scanf("%d",&sayi1);
    printf("Lutfen 2. Sayiyi Giriniz (Please Enter The 2st Number): ");
    scanf("%d",&sayi2);
    printf("Lutfen 3. Sayiyi Giriniz (Please Enter The 3st Number): ");
    scanf("%d",&sayi3);
    printf("Sayilarýn ortalamasi (Average of Numbers): %d",(sayi1+sayi2+sayi3)/3);
    
    getch();
    return 0;
}
