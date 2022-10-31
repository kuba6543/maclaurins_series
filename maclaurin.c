// Jakub Bartuszek, 318490
// Oświadczam, że program został wykonany samodzielnie

                    // reqired libraries
#include <stdio.h>  // standard I/O
#include <math.h>   // more advanced math eqations
#include <stdlib.h> // standard library

unsigned long long factorial(unsigned int n)  // function calculating factorial, used in the Maclaurin's series
{
    unsigned long long sum=1;                 // defining function in case of 0!
    for(n;n>0;n--)
    {
        sum *= n;
    }
    return sum;
}
float maclaurin_sin(float x,unsigned short n)   // function used to approximate sin(x) using Maclaurin's series
{
    float sum=0;                                // sum of series' elements
    for(unsigned short l=0;l<n+1;l++)
    {
        sum+= (powf(-1, l) * powf(x, 2*l+1)) / factorial(2*l+1);
    }
    return sum;
    
}
float maclaurin_cos(float x,unsigned short n)   // function used to approximate cos(x) using Maclaurin's series
{
     float sum=0;                               // sum of series' elements
    for(unsigned short l=0;l<n+1;l++)
    {
        sum+= (powf(-1, l) * powf(x, 2*l)) / factorial(2*l);
    }
    return sum;
}
int main() 
{
    float x_start;                      // starting value of x
    float delta_x;                      // step of x
    unsigned short quantity_of_steps;   // quantity of steps 
    unsigned short number_of_elements;  // quantity of Maclaurin's Series' elements

    printf("Enter starting value:\n");
    scanf("%f",&x_start);
    printf("Enter value of step:\n");
    scanf("%f",&delta_x);
    printf("Enter quantity of elements:\n");
    scanf("%hd",&quantity_of_steps);
    printf("Enter quantity of Maclaurin's Series' elements (use less than 30, higher values will overflow the factorial):\n");
    scanf("%hd",&number_of_elements);
    if (sizeof(x_start)!=4||sizeof(delta_x)!=4||sizeof(quantity_of_steps)!=2||sizeof(number_of_elements)!=2||number_of_elements>30)
    {
        printf("Wrong input!"); // float has size of 4 bytes,unsigned short - 2, char - 1
        return 1;
    }
    for(unsigned short i=0;i<quantity_of_steps+1;i++)
    {
        printf("Value of function sin(x) for x = %.3f is: %.4f \n", x_start + i*delta_x, maclaurin_sin(x_start + i*delta_x, number_of_elements));
        printf("Value of function cos(x) for x = %.3f is: %.4f \n", x_start + i*delta_x, maclaurin_cos(x_start + i*delta_x, number_of_elements));
    }
    return 0;
}
