#include <stdio.h>
#include <conio.h>
#include <windows.h>

 
// Kullan�c�n�n istedi�i karakter ile ��gen yapma
 
int main(){
    system("color 02");
    
    
    int sira, i, j, yildizSayisi=1, boslukSayisi;
    char karakter;
    
    printf("Sira Giriniz: ");
    scanf("%d", &sira);
    
    printf("Girilecek Karakter: ");
    scanf(" %c", &karakter);
    
//Bo�luk Say�s�n� Sira Sayisindan bir az olmas� laz�m
    boslukSayisi = sira - 1;
    
//�lk For sat�r say�s�n� yazd�r�r (��genin boyu)
    for(i=0; i<sira; i++){
        
//�kinci For ile bo�luk yazd�r�l�r
        for(j=0; j<boslukSayisi; j++)
            printf(" ");
        
// ���nc� For ise Ekrana Yildiz yazdirir
        for(j=0; j<yildizSayisi; j++)
            printf("%c", karakter);    
        
//Her Yildiz yazd�rma i�leminden sonra a�a�� inilir 
        printf("\n");
        
//Her a�a�� indi�inde 2 tane fazladan yildiz yazd�rmak i�in yildizSayisi 2 artirilir
        yildizSayisi+=2;   // yildizSayisi = yildizSayisi + 2;  de yazd�r�labilir
        
//Her a�a�� indildi�inde Bo�luk say�s�n�n 1 azalmas� laz�m
        boslukSayisi--;
        
    }
    
    
    getch();
    return 0;
}
