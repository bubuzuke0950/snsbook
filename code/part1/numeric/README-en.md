# 2. Numerical methods for solving ordinary differential equations

## Files
- `exp.c`: Initial value problem for the value of exp(1) by Euler, Heun, and Runge-Kutta methods
- `Makefile`: Makefile
- `README-ja.md`: Description in Japanese
- `README-ja.md`: Description in English (this fie)

## How to compile
`exp` will be obtained from `exp.c` by
```
node00:~/snsbook/code/part1/numeric$ gcc -O3 -std=gnu11 -Wall -o exp exp.c
```
Or, just type `make` to compile and obtain the result:
```
node00:~/snsbook/code/part1/numeric$ make
```

## How to run
Table 2.1 will be obtained by
```
node00:~/snsbook/code/part1/numeric$ ./exp
```
where the table shows from left to right the value of Delta t, the values of exp(1) calculated
by Euler, Heun, and Runge-Kutta methods, and their respective errors. The last `2.718281828459045`
is the correct value.
```
node00:~/snsbook/code/part1/numeric$ ./exp
1.000000000000000 2.000000000000000 2.500000000000000 2.708333333333333 0.7 0.2 0.01
0.500000000000000 2.250000000000000 2.640625000000000 2.717346191406250 0.5 0.08 0.0009
0.250000000000000 2.441406250000000 2.694855690002441 2.718209939201323 0.3 0.02 7e-05
0.125000000000000 2.565784513950348 2.711841238551985 2.718276844416735 0.2 0.006 5e-06
0.062500000000000 2.637928497366600 2.716593522474767 2.718281500340586 0.08 0.002 3e-07
0.031250000000000 2.676990129378183 2.717849673980259 2.718281807411193 0.04 0.0004 2e-08
0.015625000000000 2.697344952565100 2.718172511563830 2.718281827126323 0.02 0.0001 1e-09
0.007812500000000 2.707739019688019 2.718254338321275 2.718281828375204 0.01 3e-05 8e-11
0.003906250000000 2.712991624253433 2.718274935740745 2.718281828453785 0.005 7e-06 5e-12
0.001953125000000 2.715632000168990 2.718280102752167 2.718281828458716 0.003 2e-06 3e-13
0.000976562500000 2.716955729466436 2.718281396716139 2.718281828459026 0.001 4e-07 2e-14
0.000488281250000 2.717618482336880 2.718281720483778 2.718281828459050 0.0007 1e-07 4e-15
2.718281828459045
```