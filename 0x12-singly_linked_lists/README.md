# Single linked lists

Single list is a link of memory blocks created by malloc in the heap, this memory consist of data and a pointer and it is called a node.A node is a struct that contains a null pointer. The pointer in the node points to the next memory block in the heap and memory is stored in this way.We should always  remember the address of the first pointer in the list as if we dont we will lose the data that the pointer points to and also we should always terminate the list with a `NULL` pointer.So we can summersie and say a list is either a `NULL` or its **DATA and POINTER**.

```c
# inlcude <stdio.h>
# include <stdlib.h>

typedef struct node *nodePtr;

//struc defn and typdef below are
// broken into two parts for clarity of explaining
// in our code we would usually combine the two 

struct node { 
/*
 *The in value is the data in the node and the nodePtr is the pointer to the 
 * next node
 */
	int data;
	nodePtr next;
};
/*
 *This tell C to call a Struct Node a node
 */
typedef struct node node;

int main(int argc, const char * argc[])
{
	nodePtr first = NULL;

	first = malloc(sizeof(node));
	first->next = NULL;

	first->data = 61;

	nodePrt temp; // Sets memory aside for temp
	temp = malloc(sizeof(node));// asks for memory to be set aside in the heap 
	// and temp now points to that heap of memory
	temp->next = first;//its like derefrencing the pointer and changing the 
	//next pointer of the data

	first = temp;//changing the pointer that first has to the pointer value that temp has

}
```


	printf("Hello,World!\n");
	return 0;
}

** Print the address of a struct
when printing the address of a struct using the format spercifier `%p`, please add `(void*)arg_struct`c infront of the sturcture argument here is an example

```c
	printf("%p\n", (void*)arg_struct
```
