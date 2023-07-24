/**
  *swap_int - Swaps variable a and b
  *@a: int a
  *@b: int b
  *return: returns nothing
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
