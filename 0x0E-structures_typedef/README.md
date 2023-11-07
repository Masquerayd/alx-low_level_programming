# Structures
A structure is a user defined data type that allows you to combine data items of different kinds
## Structure declaration
You can define a structure in the global scope of your program (main.h).

```c
struct User
{
	char *name;
	char *email;
	int age;
};
```
You can declare elements of your structure in its scope.

```c
int main(void)
{
struct User user;
return (0);
}
```
you can access the elements of your file by using the `.` symbol.

```c
int main(void)
{
struct User user;

user.name ="Dragon";
user.email = "Dragon@balls.com";
user.age = "35";

return (0);
}
```

##  Pointers to Structures

To access elements of a pointer to a structure, you have to dereference thr pointer and then access the data using `.` symbol.But there is an equivalent method that one can use, you can simply use `->`symbol.

```c
int main(void)
{
	struct User user;
	struct User *ptr;

/*
 * Giving the struct pointer the address of the structure element
 */
	ptr = &user;
	(*ptr).name = "Foo bar";
	ptr->email = "foo@hbtn.com";
	return (0);
}


# typedef

In C programming language one can use a function called typedef to give a type a new name.In the example below you can create a type called *byte* which is an unsigned char

```c
typedef unsigned char byte;

int main(void)
{
	byte c;

	c = 200;
	return (0);
}
```
You can also define new data types from structures using typedef

```c
struct Computer {
	char *name;
	char *brand;
};
typedef struct Computer Computer;

```
 
an easier way to define a data type is shown below

```c
typedef struct Computer {
	cahr *name;
	char *name;
} Computer;
```

here is an example that shows how to define struct variables

```c
typedef struct User
{
	char *name;
	char *email;
	int age;
} user;

int main(void)
{
	struct User user;
	user user2;

	return (0);
}
```

## Documentation for structs 
```c
/**
 * struct my_struct - Short description
 * @a: First member
 * @b: Second member
 *
 * Description: Longer description
 */
struct my_struct
{
	int a;
	int b;
	/**
	 * @c: This is longer description of C
	 *
	 * Description: You can use paragraphs to describe arguments
	 * using this method.
	 */
	int c;
};
```c
