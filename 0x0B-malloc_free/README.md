# Automatic and dynamic allocation, malloc and free

## Automatic allocation 
when you use a variable in code , the program is automatically allocating memory for that variable and when the program ends , the memeory that was allocated is released.

## Dynamic memory allocation

The `malloc` function is used to allocate a certain amount of memory during the execution of the program. It will request the a block of memory from the heap , if the request is granted , the  operating systerm will reserve the requested amount of memory and and **malloc** will return with a pointer to the reserved space.E.g
```c
	tab = malloc(sizeof(tab)*3);
```
when the reserved space is not needed any more , you must return is back to the heap , by releasing it using the `free` function.
```c
	free(*tab);
```

The `malloc` pointer will return a `null` pointer if it runs into an error,so everytime when allocating space the coder needs to check for this, otherwise this can result in **segment faults**.Here is the fail safe the one can use when using malloc

```c
	if(tab == null)
	{
		print("cant allocated requested memory");
		return(1);
	}
```

