#include <stdio.h> //Kütüphanelerimizi ekliyoruz.
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main(){ //Ana fonksiyonumuzu oluþturduk.
 setlocale(LC_ALL, "Turkish"); //Burada türkçe karakter sorunu olmasýn diye bu kodu ekledik.
 int a,b,c,d,e; //Deðiþkenlerimizi girdik.
printf("Pascal Üçgeni Kaç Satýr Olsun? = ");
scanf("%d",&a); //Burada dýþarýdan pascal üçgeni kaç satýr olmasýný istiyorsanýz onu giriyoruz.
 printf("\n"); //Bir alt satýra geçme kodu.
for (int b = 0; b < a; b++) //Burada for döngüsü kullandýk.Pascal üçgeni için toplamda 3 for döngüsü kullanacaðýz.
 {
 int c = 1;
 for (int d = 0; d < a - b; d++)
 {
 printf(" "); //Burada pascal üçgenimiz oluþsun diye deðerler arasýna boþluk býrakýyoruz ki üçgen görünümünü alsýn.
 }
 for (int e = 0; e <= b; e++)
 {
 printf(" %d ", c); //Gerekli iþlemlerimiz yapýldý ve pascal üçgenimizdeki elemanlarýn deðerleri teker teker girildi.
 c = c * (b - e) / (e + 1);
 }
printf("\n");
 }
getch();
 return 0; //Fonksiyonumuzu bitiriyoruz.
}
