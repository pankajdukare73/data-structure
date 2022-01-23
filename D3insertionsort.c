/*
                    Insertion sort
    1>Insertion sort is a simple sorting algorithm.
    2>array is dived into sorted array and unsorted array.select first element unsorted array and insert at proper position at sorted array.
*/
#include <stdio.h>
//traversal array
void traversal(int a[], int n)
{
    printf("Array element are:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
//buble sort
void insertionsort(int a[], int len)
{
    int key,j;
    for (int i = 1; i < len; i++)
    {
        key=a[i];
        j=i-1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
void main()
{
    int a[] = {167, 98, 63, 42, 87, 23};
    int len;
    len = sizeof(a) / sizeof(a[0]); // fined length of array
    printf("\nArray Element before insertion sort:");
    traversal(a, len);
    insertionsort(a, len);//insertion sort
    printf("\nArray Element after insertion sort:");
    traversal(a, len);
}