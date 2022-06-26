#include<stdio.h>
#include<conio.h>

main()
{
    int i,sayi,sayac=0;
    printf("Sayiyi girin : ");
    scanf("%d",&sayi);
    
    for(i=2;i<sayi;i++)
    {
       if(sayi%i==0)
       {
           printf("%d",&i);
       }    
    }     
    
    if(sayac==0)
    {
        printf("Asal \n");                    
    }
    else
    {
        printf("Asal degil"); 
    }
    
    getch();
    return 0;
}


