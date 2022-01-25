//Program treba izracunat duljinu prilezece katete pravokutnog trokuta.

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
#include<math.h>
//Funkcija za izracunavanje duljine prilezece katete pravokutnog trokuta.
float duljina(int b,int c)
{
	float a;
	a=sqrt((c*c)-(b*b));
    return a;
}
  

int main()
{
    int b,c;
    printf("Unesi duljine stranica pravokutnog trokuta i duljinu hipotenuze \n");
    scanf("%d %d",&b,&c);
    // Pozivanje funkcije.
    float a= duljina(b,c);
    printf("Duljina prilezece katete pravokutnog trokuta je: %.2f",a);
    return 0;
}
