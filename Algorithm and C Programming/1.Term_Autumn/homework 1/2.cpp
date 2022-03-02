#include <stdio.h>
#include <conio.h>

int main(){

    printf("TR-Girilen Iki Sayidan Hangisi Daha Buyuktur?\n");
    printf("EN-Which of The Two Numbers Entered is Greater\n");
    printf("----------------------------------------------\n");
	float sayi1,sayi2;
	printf("Lütfen birinci sayıyı giriniz (Please enter the 1st number): \n");
    scanf("%f",&sayi1);
    printf("Lütfen ikinci sayıyı giriniz (Please enter the 2st number):\n");
    scanf("%f",&sayi2);
	if(sayi1>sayi2){
		printf("%.3f sayısı %.3f sayısından büyüktür. (The number %.3f is greater than the number %.3f)",sayi1,sayi2,sayi1,sayi2);
	}
	if(sayi1<sayi2){
		printf("%.3f sayısı %.3f sayısından büyüktür. (The number %.3f is greater than the number %.3f)",sayi2,sayi1,sayi2,sayi1);
	}
	else{
		printf("%.3f sayısı %.3f sayısına eşittir.(The number %.3f is equal to the number %.3f)",sayi1,sayi2,sayi1,sayi2);
	}
	
	getch();
	return 0;
}
