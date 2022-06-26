#include <stdio.h>
#include <conio.h>


int main()

{
	int n,toplam;
	
printf("Girdiginiz sayiya kadar olan ardisik sayilari toplamak icin son sayiyi giriniz :\n");
scanf ("%d" ,&n);
toplam=n*(n+1)/2;

printf ("%d",toplam);
	
	
	getch();
	return 0;
}
