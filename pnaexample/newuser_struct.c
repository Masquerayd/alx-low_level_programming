#include <stdio.h>
#include <stdlib.h>

/*
 * creating a struct called user with name,email and age
 */

struct User
{
	char *name;
	char *email;
	int age;
};

/*
 * This is a function that takes three arguments and stores them in a struct called user
 */

struct User *new_user(char *name, char *email, int age)
{
	struct User *user;
	struct User arg; 

/*
 * created a new struct to initialize the struct and we do so by assigining the address.
 */
	user =&arg;

	arg.name = name;
	arg.email = email;
	arg.age = age;

	return user;
}

int main (void)
{
	struct User *user;
/*
 * assigning addresss of struct function to struct 
 */
	user = new_user("Foo", "foo@foo.bar", 98);
	if (user == NULL)
	{
		return (1);
	}
	printf("User %s created !\n", user->name);
	printf("His Email is: %s\n", user->email);
	printf("And he is %d years old\n", user->age);
	return(0);
}

