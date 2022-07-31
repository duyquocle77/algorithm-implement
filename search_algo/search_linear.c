#include <stdio.h>
 
int search(int[], int, int);
 
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int key = 10;
    int size = sizeof(arr) / sizeof(arr[0]);
   
    int result = search(arr, size, key);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}

int 
search(int arr[], int size, int key) {
    int i;
    for (i = 0; i < size; i++)
        if (arr[i] == key)
            return i;
    return -1;
}
