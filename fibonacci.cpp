#include <stdio.h>
#include <conio.h>

int main()

{

 
	int ilksayi=1;
	int ikincisayi=1;
	int i;
	int temp,a;
	
scanf ("%d" ,&a);
printf ("%d\n%d\n",ilksayi,ikincisayi);	


	for(i = 0; i < a; i++)
	{
	
temp=ikincisayi;

ikincisayi += ilksayi;

ilksayi=temp;

printf ("%d\n",ikincisayi);
}

getch();
return 0;

}
