#include <stdio.h>
#include <conio.h>

int main(){
	
	printf("TR-Girilen 2 Sayinin 4 Islemini Yapan Program\n");
	printf("EN-Program That Performs Four Operations of Two Entered Numbers\n");
	printf("---------------------------------------------------------------\n");

	float sayi1,sayi2;
	int islem;
	printf("Lutfen birinci sayýyý giriniz...\n");
    scanf("%f",&sayi1);
    printf("Islem giriniz...\n1:Toplama\n2:Cikarma\n3:Carpma\n4:Bolme\n");
    scanf("%d",&islem);
    printf("Lutfen ikinci sayiyi giriniz\n");
    scanf("%f",&sayi2);

    if(islem==1){
    	printf("Iki sayinin toplami (Sum of Two Numbers) = %.2f\n",sayi1+sayi2);
    	return 0;
	}
	if(islem==2){
		printf("Ýki sayýnýn farký (Difference of Two Numbers) = %.2f\n",sayi1-sayi2);
		return 0;
	}
	
	if(islem==3){
		printf("Ýki sayýnýn çarpýmý (Multiplication of Two Numbers) = %.2f\n",sayi1*sayi2);
		return 0;
	}
	if(islem==4){
		printf("Ýki sayýnýn bölümü (Division of Two Numbers) = %.4f\n",sayi1/sayi2);
		return 0;
	}
	else{
		printf("HATALI SECÝM!! / WRONG CHOICE!!");
		
		getch();
		return 0;
		
	}
}
