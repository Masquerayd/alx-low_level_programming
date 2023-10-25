# function Pointers
We can have ponters to functions, a function pointer points to code instead of memory as normal pointers do, so no memory is allocated. it can be declared as follows

```c
#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
	printf("Value of a is %d\n", a);
}

int main()
{
	// fun_ptr is a pointer to function fun()
	void (*fun_ptr)(int) = &fun;

	/* The above line is equivalent of following two
	void (*fun_ptr)(int);
	fun_ptr = &fun;
	*/

	// Invoking fun() using fun_ptr
	(*fun_ptr)(10);

	return 0;
}
```

We can also use a function pointer without derefferencing it , this is done by removing the `&` symbol when setting address and also removing `*` when passing the argument to the function
```c
#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
	printf("Value of a is %d\n", a);
}

int main()
{
	void (*fun_ptr)(int) = fun; // & removed

	fun_ptr(10); // * removed

	return 0;
}
```
we can also use a function pointer as an array of functions , meaning you can use one function to acesss multiple function and edit it's arguments separaetly , this could be used in place of a switch statement. An example is shown below

```c
#include <stdio.h>
void add(int a, int b)
{
	printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
	printf("Subtraction is %d\n", a-b);
}
void multiply(int a, int b)
{
	printf("Multiplication is %d\n", a*b);
}

int main()
{
	// fun_ptr_arr is an array of function pointers
	void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
	unsigned int ch, a = 15, b = 10;

	printf("Enter Choice: 0 for add, 1 for subtract and 2 "
			"for multiply\n");
	scanf("%d", &ch);

	if (ch > 2) return 0;

	(*fun_ptr_arr[ch])(a, b);

	return 0;
}
```

like any pointer the benefit of function pointers is that it can be passed in a function and can also be return from funtion . this is shown below

```c
// A simple C program to show function pointers as parameter
#include <stdio.h>

// Two simple functions
void fun1() { printf("Fun1\n"); }
void fun2() { printf("Fun2\n"); }

// A function that receives a simple function
// as parameter and calls the function
void wrapper(void (*fun)())
{
	fun();
}

int main()
{
	wrapper(fun1);
	wrapper(fun2);
	return 0;
}
```
