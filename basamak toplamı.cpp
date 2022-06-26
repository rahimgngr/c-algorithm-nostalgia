#include <stdio.h>
#include <conio.h>

int main()

{
	int toplam=0,kalan,sayi;
	
printf ("Sayiyi giriniz :\n");
scanf ("%d" ,&sayi);

	while (sayi !=0)
	
		{
		
		kalan = sayi % 10;
		toplam = toplam + kalan;
		sayi = sayi / 10;
	   
	    }
	    
printf ("Basamaklar toplami = %d\n",toplam);

		getch ();
		return 0;
		
}
	   
	   
