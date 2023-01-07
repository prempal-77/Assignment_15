/*Write a function in C to read n number of values in an array and display it in reverse
order.*/

#include<stdio.h>

int read_and_display_in_reverse(int n);
int main()
{
  int n;
  printf("Enter the number of values: ");
  scanf("%d", &n);
  read_and_display_in_reverse(n);
  return 0;
}
int read_and_display_in_reverse(int n) 
{
  int i;
  int array[n];
  for (i = 0; i < n; i++) 
  {
    printf("Enter a value: ");
    scanf("%d", &array[i]);
  }
  printf("Values in reverse order: ");
  for (i = n - 1; i >= 0; i--) 
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}
 
