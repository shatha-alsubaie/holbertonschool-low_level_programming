# Simple Calculator

An interactive calculator written in C.

## Compile

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Run

./calculator

## Operations

1: Addition
2: Subtraction (A - B)
3: Multiplication
4: Division (A / B)
0: Quit

Choose an operation, then enter A and B.
The menu repeats until you choose 0.

## Numeric behavior

Operands use double and support decimal values.
For example, 10 / 4 produces 2.5.
Results display up to 10 significant digits.
Floating-point rounding may occur.

## Error handling and limitations

Choices outside 0-4 print "Invalid choice".
Division by zero prints "Error: division by zero".
Failed numeric conversions end the program.
Input is read using scanf; mixed input such as 1abc
is not fully validated.
Numeric overflow is not checked.
