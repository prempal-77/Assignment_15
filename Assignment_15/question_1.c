//Write a function to find the greatest number from the given array of any size.
#include<stdio.h>
int find_greatest_number(int* array,int size);
int main() 
{
    int my_array[5] = {1, 2, 3, 4, 5};
    int greatest = find_greatest_number(my_array, 5);
    printf("The greatest number is: %d\n", greatest);
    return 0;
}
int find_greatest_number(int* array, int size) 
{
    int i;
    int greatest = array[0];
    for (i = 1; i < size; i++) 
    {
        if (array[i] > greatest) 
        {
            greatest = array[i];
        }
    }
    return greatest;
}
