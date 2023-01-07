//Write a function in C to print all unique elements in an array.

#include <stdio.h>

void print_unique(int array[], int size); 
int main() {
  int array[] = {1, 2, 3, 3, 4, 5, 5};
  int size = sizeof(array) / sizeof(array[0]);
  printf("Unique elements: ");
  print_unique(array, size);
  return 0;
}
void print_unique(int array[], int size) 
{
  int i, j;
  for (i = 0; i < size; i++) 
  {
    int is_unique = 1;
    for (j = 0; j < size; j++) 
    {
      if (i != j && array[i] == array[j]) 
      {
        is_unique = 0;
        break;
      }
    }
    if (is_unique) 
    {
      printf("%d ", array[i]);
    }
  }
  printf("\n");
}

