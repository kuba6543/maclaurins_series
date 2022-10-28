# Zadanie wybrane: nr 2

Program będzie aproksymował wartości dla funkcji:

1. sin(x)
2. cos(x)

## Zmienne w programie:

* x_start(float) - wartość początkowa x w algorytmie
* delta_x(float) - krok x w kolejnej iteracji
* k(unsigned short int) - ilość kroków
* n(unsigned short int) - ilość elementów szeregu Maclaurina

## Funkcje w programie:

* factorial(int) - liczy silnię dla danej liczby - niezbędny element szeregu Maclaurina
* maclaurin_sin(float) - liczy przybliżoną wartość sinusa dla argumentu x, używając n elementów szeregu
* maclaurin_cos(float) - liczy przybliżoną wartość cosinusa dla argumentu x, używając n elementów szeregu

## Przykładowe dane wejściowe

```
gcc maclaurin.c -lm -o maclaurin
./maclaurin
Enter starting value:
-1.5
Enter value of step:
0.5
Enter quantity of elements:
6
Enter quantity of Maclaurin's Series' elements:
9
Value of function sin(x) for x = -1.500000 is: -0.997471 
Value of function cos(x) for x = -1.500000 is: 0.070739 
Value of function sin(x) for x = -1.000000 is: -0.841471 
Value of function cos(x) for x = -1.000000 is: 0.540302 
Value of function sin(x) for x = -0.500000 is: -0.479426 
Value of function cos(x) for x = -0.500000 is: 0.877583 
Value of function sin(x) for x = 0.000000 is: 0.000000 
Value of function cos(x) for x = 0.000000 is: 1.000000 
Value of function sin(x) for x = 0.500000 is: 0.479426 
Value of function cos(x) for x = 0.500000 is: 0.877583 
Value of function sin(x) for x = 1.000000 is: 0.841471 
Value of function cos(x) for x = 1.000000 is: 0.540302 
Value of function sin(x) for x = 1.500000 is: 0.997471 
Value of function cos(x) for x = 1.500000 is: 0.070739
```
