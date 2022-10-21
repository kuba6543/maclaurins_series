#include <stdio.h>
#include <math.h>
#include <stdlib.h> // potrzebne biblioteki

float x_start; // wartosc poczatkowa x
float delta_x; // krok powiekszania x
unsigned short k; // licznosc wykonywania operacji powiekszenia x_start o delta_x 
unsigned short n; // liczba elementow szeregu potegowego Maclaurina
int main() 
{
    printf("Wprowadz wartosc poczatkowa:\n");
    scanf("%f",&x_start);
    printf("Wprowadz wartosc kroku powiekszania:\n");
    scanf("%f",&delta_x);
    printf("Wprowadz ilosc krokow powiekszenia funkcji:\n");
    scanf("%hd",&k);
    printf("Wprowadz ilosc elementow szeregu potegowego:\n");
    scanf("%hd",&n);
    
  
    return 0;
}