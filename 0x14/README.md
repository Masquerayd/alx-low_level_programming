# Bitwise operations in C

A bit is the smallest unit of data that can be stored in a computer, in c we can perform bit level operations and manipulate the data.In C there are 6 opereators that are known as bit operators. They are used to perform bitwise operations in C.

1. The **& (bitwise AND)**, takes two numbers as operands and does a *AND* on every bit of the two numbers. The **AND** results in a 1 if both bits are 1.

1. The ** | (bitwise OR) ** , does an **OR** operations every bit of the two numbers given as an operand. THe **OR** results in a 1 if one of the bits is a 1.

1. The ** ^ (bitwise XOR) ** takes two numbers as operands and does a *OR* on every bit of the two numbers, The **XOR** results in a 1 if the two bits are different.

1. The **<< (left shit)** takes two numbers as operands and then left shifts the bits of the first operand, the amount of shifts to the right is based on the second number.

1. The **>> (right shit)** takes two numbers as operands and then right shifts the bits of the first number, with the amont of spaces based on the second number.

1. The **~ (bitwise NOT)** takes one number and inverts all of the bit of it

**NOTE**: all of the numbers that are given as operands are first converted to binary then the operations are provessed.

The truth table below shows some of the bitwise operators in C

| X | Y | X & Y | X | Y | X ^ Y |
|:---:|:---:|:---:|:---:|:---:|
| 0 | 0 | 0 | 0 | 0 |
| 0 | 1 | 0 | 1 | 1 |
| 1 | 0 | 0 | 1 | 1 |
| 1 | 1 | 1 | 1 | 0 |


