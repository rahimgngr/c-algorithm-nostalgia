#include <stdio.h> //K�t�phanelerimizi ekliyoruz.
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main(){ //Ana fonksiyonumuzu olu�turduk.
 setlocale(LC_ALL, "Turkish"); //Burada t�rk�e karakter sorunu olmas�n diye bu kodu ekledik.
 int a,b,c,d,e; //De�i�kenlerimizi girdik.
printf("Pascal ��geni Ka� Sat�r Olsun? = ");
scanf("%d",&a); //Burada d��ar�dan pascal ��geni ka� sat�r olmas�n� istiyorsan�z onu giriyoruz.
 printf("\n"); //Bir alt sat�ra ge�me kodu.
for (int b = 0; b < a; b++) //Burada for d�ng�s� kulland�k.Pascal ��geni i�in toplamda 3 for d�ng�s� kullanaca��z.
 {
 int c = 1;
 for (int d = 0; d < a - b; d++)
 {
 printf(" "); //Burada pascal ��genimiz olu�sun diye de�erler aras�na bo�luk b�rak�yoruz ki ��gen g�r�n�m�n� als�n.
 }
 for (int e = 0; e <= b; e++)
 {
 printf(" %d ", c); //Gerekli i�lemlerimiz yap�ld� ve pascal ��genimizdeki elemanlar�n de�erleri teker teker girildi.
 c = c * (b - e) / (e + 1);
 }
printf("\n");
 }
getch();
 return 0; //Fonksiyonumuzu bitiriyoruz.
}
