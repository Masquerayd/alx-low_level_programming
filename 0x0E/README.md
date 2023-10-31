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






