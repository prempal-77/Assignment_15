/*Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/

#include <stdio.h>
int find_adjacent_duplicate(int array[], int size);
int main() 
{
  int array[] = {1, 2, 3, 3, 4, 5};
  int size = sizeof(array) / sizeof(array[0]);
  int duplicate = find_adjacent_duplicate(array, size);
  if (duplicate == -1) 
  {
    printf("No adjacent duplicate found\n");
  } 
  else 
  {
    printf("The first occurrence of an adjacent duplicate value is: %d\n", duplicate);
  }
  return 0;
}
int find_adjacent_duplicate(int array[], int size) 
{
  int i;
  for (i = 0; i < size - 1; i++) 
  {
    if (array[i] == array[i + 1]) 
    {
      return array[i];
    }
  }
  return -1; 
}


