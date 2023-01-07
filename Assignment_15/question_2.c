//Write a function to find the smallest number from the given array of any size.
#include<stdio.h>
int find_smallest_number(int* array, int size);
int main() 
{
    int my_array[5] = {1, 2, 3, 4, 5};
    int smallest = find_smallest_number(my_array, 5);
    printf("The smallest number is: %d\n", smallest);
    return 0;
}
int find_smallest_number(int* array, int size) 
{
    int i;
    int smallest = array[0];
    for (i = 1; i < size; i++) 
    {
        if (array[i] < smallest) 
        {
            smallest = array[i];
        }
    }
    return smallest;
}
