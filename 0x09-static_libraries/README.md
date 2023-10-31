# building C libraries

A `Library` is a file that contains several object files. Using these Labraries it makes it easier  for the compiler to find functions , variables and so on.


There are two types of libraries 

1. Static Libraries - are just collection of object files that are linked into the program during th e linking phase.
1. Shared Libraries - are shared by all programs, in stead of compiling all the object files into the executable it checks if the files exisit in a shared library and them complies them into the program, without the files the program would not compile.(But the shared library has to have the files inorder for the program to compile).

## Creating C libraries 

To create a **Static Library** , we are going to use a program called the **Archiver**. The code below shows the how we can create a archive called `libutil,a` with two object files called `util_file.o` `util_net.o`.

```
	ar rc libutila.a util_file.o util_net.o
```

1. **ar** - Tells the compiler to create a archiver from the two object files and if there is already a archive called `libutil.a` it tells the compiler to overwite it.
1. **rc** - The 'r' tells the compiler to replace older object files and the **C** tells it to create the library if it already doesnt exist.

After archiving the oject files we need to indx the archive in order to sort out the order of the symbols. this is done using **ranlib**.

```
	ranlib libutil,a
```

**Note:** when the compiler complains that the archive's index is out of date , you need to follow the following steps inorder to fix and prevent it:

1. Use `ranlib` to regenerate the index.
1. when coping the archive file to another location use `cp -p` instead of `cp` .The `-p` tell `cp` to keep all attributes including its last modification date. This fools the compiler into thinking that the index has already been updated.


## Using the archive in a program

Once the library has been compile , it can now be used to compile programs using objects files within the library . this is done using the following code 

```
	gcc main.o -L -lutil -o prog
```

- **-L** - tells 
# Building C libraries                                                                                                          A `Library` is a file that contains several object files. Using these Labraries it makes it easier  for the compiler to find functions , variables and so on.                                                                                                   
