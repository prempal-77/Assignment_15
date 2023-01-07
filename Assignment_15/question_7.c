/*Write a function in C to count a total number of duplicate elements in an array.(Means
elements that occurs 2 times in an array)*/

#include <stdio.h>
int count_duplicates(int array[], int size); 
int main() 
{
  int array[] = {1, 2, 3, 3, 4, 5, 5};
  int size = sizeof(array) / sizeof(array[0]);
  int count = count_duplicates(array, size);
  printf("Number of duplicate elements: %d\n", count);
  return 0;
}
int count_duplicates(int array[], int size) 
{
  int i, j;
  int count = 0;
  for (i = 0; i < size; i++) 
  {
    for (j = i + 1; j < size; j++) 
    {
      if (array[i] == array[j]) 
      {
        count++;
        break;
      }
    }
  }
  return count;
}

