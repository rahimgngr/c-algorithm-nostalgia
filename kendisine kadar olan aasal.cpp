#include <stdio.h>

int main ()
{   
        int a, b, c, d;

        printf (" Bir sayi giriniz : ");
        scanf  (" %d", &a);
		
		if (b==0)
		a=10000000;
        // Buradaki b, asal olup olmad��� ara�t�r�lacak olan say�d�r.
        for (b = 2; b < a; b ++)
        {
          d = 1;
               for (c = 2; c < b; c ++)
               {
                  // Say� 2'den ba�lanarak kendisine kadar olan t�m tamsay�lara
                  // s�rayla b�l�n�yor. Tam b�len bir say�ya rasland���nda
                  // say�n�n asal say� olmad��� anla��l�yor ve bir sonraki
                  // say�y� denemek i�in d�ng� kesiliyor. Bu arada, bu say�n�n
                  // asal olamad���n� anlamatmak i�in d'nin de�eri 0 yap�l�yor.

                  if (b % c == 0)
                  {
                    d = 0;

                    break;
                  }
          }

          // Burada iki ihtimal vard�r. d == 0 ya da d == 1.
          // b'nin asal olmad��� anla��ld���nda d'nin de�eri 0 yap�lm��t�.
          // Aksi takdirde d'nin de�eri bir kal�r ve bu bize say�n�n asal
          // oldu�unu anlat�r.

          if (d == 1) printf (" %d \n", b );
     
          // D�g� bir sonraki say�n�n asal olup olmad���n� anlamak i�in
          // tekrar d�necektir. Bu nedenle d'nin de�eri d�ng�n�n ba��nda
          // tekrar 1 yap�l�yor.
        }

        return 0;
}
