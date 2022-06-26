#include <stdio.h>
#include <conio.h>

int main (void){

printf("Kim milyoner olmak ister yarismasina hosgeldiniz..\n");

int a,b,c,d,e,f,g,basla,devam;
printf("Cevaplamak icin : \na icin 1 \nb icin 2 \nc icin 3 \nve d icin 4 e basiniz..\n");
printf("Baslamak icin 1 e basiniz..\n");
scanf("%d",&basla);

if(basla==1){
printf("Soru 1\n");
printf("Ataturk kac yilinda dogdu?\na=1900\nb=1881\nc=1889\nd=1789\n");
scanf("%d",&a);

if(a==2){printf("Tebrikler! Cevap dogru..\n500 TL kazandiniz..\n");

printf("Devam etmek icin lutfen 1 e basiniz,cekilmek icin 2 ye basabilirsiniz.");

} 
else printf("Yanlis cevap maalesef elendiniz..");
	return 0;
}
scanf("%d",&devam);

if(devam==1){
printf("Soru 2\n");
printf("Turkiyenin baskenti neresidir?\na=Istanbul\nb=Ankara\nc=Konya\nd=Samsun\n");

scanf("%d",&b);
if(b==2){printf("Tebrikler! Cevap dogru..\n 1 milyon TL kazandiniz..\n");}
else printf("Elendiniz..");
}

printf ("Cikis yapmak icin lutfen 1'e basiniz\n");
scanf("%d",&basla);

if(basla==1){
printf("Yarisma sona erdi..\nIyi gunler dileriz...\n");
}

else printf("Cikis yaptiniz");

 

getch();
return(0);

}

 
