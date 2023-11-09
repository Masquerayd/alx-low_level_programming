# Argc, Argc

It is sometimes useful for the main function to be able to take arguments.There are two main functions that the main function takes , these are **argc** and **argv**. gives a count of the number of arguments that **argv** has, **argv** is an array of pointers to the strings which are those arguments.here is an example of the following

```c
#include <stdio.h>

int main (int argc, char *argv[])
{
  int count;

  printf ("This program was called with \"%s\".\n",argv[0]);

  if (argc > 1)
    {
      for (count = 1; count < argc; count++)
	{
	  printf("argv[%d] = %s\n", count, argv[count]);
	}
    }
  else
    {
      printf("The command had no other arguments.\n");
    }

  return 0;
}
```

To run this code use the following you type the follwing in the code `./fubar a b c,`, and the output is 

```
This program was called with "./fubar".
argv[1] = a
argv[2] = b
argv[3] = c
```
