//Write a function in C to count the frequency of each element of an array.

#include <stdio.h>

int count_frequency(int array[], int size, int frequency[]) ;
int main() 
{
  int array[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
  int size = sizeof(array) / sizeof(array[0]);
  int frequency[size];
  count_frequency(array, size, frequency);
  int i;
  for (i = 0; i < size; i++) 
  {
    if (array[i] != -1) 
    {
      printf("%d occurs %d times\n", array[i], frequency[i]);
    }
  }
  return 0;
}
int count_frequency(int array[], int size, int frequency[]) 
{
  int i, j;
  for (i = 0; i < size; i++) 
  {
    frequency[i] = 1;
    for (j = i + 1; j < size; j++) 
    {
      if (array[i] == array[j]) 
      {
        frequency[i]++;
        array[j] = -1;
      }
    }
  }
}

