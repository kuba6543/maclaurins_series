# Zadanie wybrane: nr 2

## Description of programme:

Programme will be approximating functions written below:

1. sin(x)
2. cos(x)

## Variables in programme:

* x_start (float) - starting value of x
* delta_x (float) - step of x in one iteration
* quantity_of_steps (unsigned short int) - number of steps
* number_of_elements (unsigned short int) - number of Maclaurin's series' elements

## Functions in programme:

* factorial(int) - calculates the value of factorial
* maclaurin_sin(float x, unsigned short int n) - calculates approximate value of sin(x), using n series' elements
* maclaurin_cos(float x, unsigned short int n) - calculates approximate value of cos(x), using n series' elements

## Examplary input and output: 

```
gcc maclaurin.c -lm -o maclaurin
./maclaurin
Enter starting value:
-1.5
Enter value of step:
0.5
Enter quantity of elements:
6
Enter quantity of Maclaurin's Series' elements (use less than 30, higher values will overflow the factorial):
9
Value of function sin(x) for x = -1.500 is: -0.9975 
Value of function cos(x) for x = -1.500 is: 0.0707
Value of function sin(x) for x = -1.000 is: -0.8415 
Value of function cos(x) for x = -1.000 is: 0.5403
Value of function sin(x) for x = -0.500 is: -0.4794
Value of function cos(x) for x = -0.500 is: 0.8776
Value of function sin(x) for x = 0.000 is: 0.0000
Value of function cos(x) for x = 0.000 is: 1.0000 
Value of function sin(x) for x = 0.500 is: 0.4794
Value of function cos(x) for x = 0.500 is: 0.8776
Value of function sin(x) for x = 1.000 is: 0.8415
Value of function cos(x) for x = 1.000 is: 0.5403 
Value of function sin(x) for x = 1.500 is: 0.9975
Value of function cos(x) for x = 1.500 is: 0.0707
```
