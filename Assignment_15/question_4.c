/*Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/

#include <stdio.h>
void left_rotate(int *array, int size, int n);
int main() 
{
  int array[] = {32, 29, 40, 12, 70};
  int size = sizeof(array) / sizeof(array[0]);

  left_rotate(array, size, 2);

  for (int i = 0; i < size; i++) 
  {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}

void left_rotate(int *array, int size, int n) 
{
 
  int temp[n];

 
  for (int i = 0; i < n; i++) 
  {
    temp[i] = array[i];
  }

 
  for (int i = n; i < size; i++) 
  {
    array[i - n] = array[i];
  }


  for (int i = 0; i < n; i++) 
  {
    array[size - n + i] = temp[i];
  }
}

