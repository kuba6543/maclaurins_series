#include <stdio.h>
#include <math.h>
#include <stdlib.h> // required libraries

int factorial(int n) // function calculating factorial, used in the Maclaurin's/Taylor's series
{
    int sum=1; // defining function in case of 0!
    for(n;n>0;n--)
    {
        sum *= n;
    }
    return sum;
}
float maclaurin_sin(float x,unsigned short n) // function used to approximate sin(x) using Maclaurin's series
{
    float sum=0; // sum of series' elements
    for(unsigned short l=0;l<n+1;l++)
    {
        sum+= (powf(-1, l) * powf(x, 2*l+1)) / factorial(2*l+1);
    }
    return sum;
    
}
float maclaurin_cos(float x,unsigned short n) // function used to approximate cos(x) using Maclaurin's series
{
     float sum=0; // sum of series' elements
    for(unsigned short l=0;l<n+1;l++)
    {
        sum+= (powf(-1, l) * powf(x, 2*l)) / factorial(2*l);
    }
    return sum;
}
int main() 
{
    float x_start; // starting value of x
    float delta_x; // step of x
    unsigned short k; // quantity of steps 
    unsigned short n; // quantity of Maclaurin's Series' elements
    printf("Enter starting value:\n");
    scanf("%f",&x_start);
    printf("Enter value of step:\n");
    scanf("%f",&delta_x);
    printf("Enter quantity of elements:\n");
    scanf("%hd",&k);
    printf("Enter quantity of Maclaurin's Series' elements:\n"); // inserting wrong value of any parameter will terminate the programme
    scanf("%hd",&n);
    for(unsigned short i=0;i<k+1;i++)
    {
        printf("Value of function sin(x) for x = %f is: %f \n", x_start + i*delta_x, maclaurin_sin(x_start + i*delta_x, n));
        printf("Value of function cos(x) for x = %f is: %f \n", x_start + i*delta_x, maclaurin_cos(x_start + i*delta_x, n));
    }
    return 0;
}
