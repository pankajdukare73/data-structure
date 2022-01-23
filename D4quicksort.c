/*
                        Quik sort
    1>Quick sort is fastest sorted algorithm.
    2>QuickSort is work on a Divide and Conquer algorithm.
    3>in this one elemnt set as pivot.in every itertion one side content smallest and other side contain biggest elemnt.
    4>select pivot in different ways. 
        -Always pick first element as pivot.
        -Always pick last element as pivot (implemented below)
        -Pick a random element as pivot.
        -Pick median as pivot.

*/
#include <stdio.h>
//traversal array
void traversal(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
// swap element
void swap(int a[],int start, int end)
{
    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
}
//partition method perform partion of array
int partition(int a[], int lb, int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {

        while (pivot >= a[start])
        {
            start++;
        }
        while (pivot < a[end])
        {
            end--;
        }
        if (start < end)
        {
            swap(a,start,end);
        }
    }
    swap(a,lb,end);
    return end;
}
//Quick sort
void quicksort(int a[], int lb, int ub)
{
    int loc;
    if (lb < ub)
    {
        loc = partition(a, lb, ub);
        quicksort(a, lb, loc - 1);
        quicksort(a, loc + 1, ub);
    }
}
void main()
{
    int a[] = {167, 98, 63, 42, 87, 23};
    int len;
    len = sizeof(a) / sizeof(a[0]); // fined length of array
    int lb = 0, ub = len - 1;
    printf("\nArray Element before quick sort:");
    traversal(a, len);
    quicksort(a, lb, ub); //quick sort
    printf("\nArray Element after quick sort:");
    traversal(a, len);
}