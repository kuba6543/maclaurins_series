#include <stdio.h>
#include <math.h>
#include <stdlib.h> // potrzebne biblioteki

float x_start; // wartosc poczatkowa x
float delta_x; // krok powiekszania x
unsigned short k; // licznosc wykonywania operacji powiekszenia x_start o delta_x 
unsigned short n; // liczba elementow szeregu potegowego Maclaurina
int factorial(int n) // funkcja liczaca silnie 
{
    int sum=1; // zdefiniowanie w wypadku gdy trzeba policzyć 0!
    for(n;n>0;n--)
    {
        sum *= n;
    }
    return sum;
}
float maclaurin_sin(float x,unsigned short n) // funkcja liczaca aproksymacje funkcji sin(x) w szeregu Maclaurina
{
    float sum=0; // zmienna lokalna do sumowania i przedstawiania wyniku
    float licznik; // równanie licznika szeregu
    for(unsigned short l=0;l<n+1;l++)
    {
        licznik=powf(-1, l) * powf(x, 2l+1); // przepisanie równania do jednej z miennej w celu uniknięcia błędów
        sum+= licznik / factorial(2l+1);
    }
    return sum;
}
float maclaurin_cos(float x,unsigned short n) // funkcja liczaca aproksymacje funkcji cos(x) w szeregu Maclaurina
{
    float sum=0; // zmienna lokalna do sumowania i przedstawiania wyniku
    float licznik; // równanie licznika szeregu
    for(unsigned short l=0;l<n+1;l++)
    {
        licznik=powf(-1, l) * powf(x, 2l+1); // przepisanie równania do jednej z miennej w celu uniknięcia błędów
        sum+= licznik / factorial(2l);
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
        printf("Wartosc funkcji sin(x) dla %f wynosi: %f \n", x_start + i*delta_x, maclaurin_sin(x_start + i*delta_x, n));
        printf("Wartosc funkcji cos(x) dla %f wynosi: %f \n", x_start + i*delta_x, maclaurin_cos(x_start + i*delta_x, n));
    }
    return 0;
}