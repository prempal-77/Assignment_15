/*Write a function to sort an array of any size. (TSRN)*/
#include<stdio.h>
void sort_array(int* array, int size); 
int main() 
{
    int my_array[5] = {3, 2, 5, 1, 4};
    sort_array(my_array, 5);
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");
    return 0;
}
void sort_array(int* array, int size) 
{
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) 
        {
            if (array[j] > array[j + 1]) 
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
