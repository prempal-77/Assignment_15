/*Write a function in C to merge two arrays of the same size sorted in descending
order.*/


#include <stdio.h>
int merge_arrays(int array1[], int array2[], int size, int merged_array[]);
int main() {
  int array1[] = {10, 9, 8, 7};
  int array2[] = {6, 5, 4, 3};
  int size = sizeof(array1) / sizeof(array1[0]);
  int merged_array[2 * size];
  merge_arrays(array1, array2, size, merged_array);
  int i;
  printf("Merged array: ");
  for (i = 0; i < 2 * size; i++) 
  {
    printf("%d ", merged_array[i]);
  }
  printf("\n");
  return 0;
}
int merge_arrays(int array1[], int array2[], int size, int merged_array[]) 
{
  int i = 0, j = 0, k = 0;
  while (i < size && j < size) 
  {
    if (array1[i] > array2[j]) 
    {
      merged_array[k] = array1[i];
      i++;
    } 
    else 
    {
      merged_array[k] = array2[j];
      j++;
    }
    k++;
  }
  while (i < size) {
    merged_array[k] = array1[i];
    i++;
    k++;
  }
  while (j < size) {
    merged_array[k] = array2[j];
    j++;
    k++;
  }
}

