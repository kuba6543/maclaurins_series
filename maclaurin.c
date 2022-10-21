#include <stdio.h>
#include <math.h>
#include <stdlib.h> // potrzebne biblioteki

float x_start; // wartosc poczatkowa x
float delta_x; // krok powiekszania x
unsigned short k; // licznosc wykonywania operacji powiekszenia x_start o delta_x 
unsigned short n; // liczba elementow szeregu potegowego Maclaurina
float maclaurin_sin(float x_start,unsigned short n) // funkcja liczaca aproksymacje funkcji sin(x) w szeregu Maclaurina
{
    float sum=0; // zmienna lokalna do sumowania i przedstawiania wyniku
    int factorial=1; // silnia szeregu
    for(unsigned short l=0;l<n+1;l++)
    {
        sum+= (pow(-1, l) * powf(x_start, 2l+1)) / factorial;
        factorial *= 2*l+2;
        factorial *= 2*l+3; // dodanie dwóch kolejnych elementów do silni
    }
    return sum;
}
float maclaurin_cos(float x_start,unsigned short n) // funkcja liczaca aproksymacje funkcji cos(x) w szeregu Maclaurina
{
    float sum=0; // zmienna lokalna do sumowania i przedstawiania wyniku
    int factorial=1; // silnia szeregu
    for(unsigned short l=0;l<n+1;l++)
    {
        sum+= (pow(-1, l) * powf(x_start, 2l)) / factorial;
        factorial *= 2*l+1;
        factorial *= 2*l+2; // dodanie dwóch kolejnych elementów do silni
    }
    return sum;
}
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
    for(unsigned short i=0;i<k+1;i++)
    {
        printf("Wartosc funkcji sin(x) dla %f wynosi: %f \n", x_start + i*delta_x,maclaurin_sin(x_start + i*delta_x, n));
        printf("Wartosc funkcji cos(x) dla %f wynosi: %f \n", x_start + i*delta_x,maclaurin_cos(x_start + i*delta_x, n));
    }


    return 0;
}