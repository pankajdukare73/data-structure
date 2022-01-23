/*
                    selection sort
    1>selction sort is sorting algorith.
    2>in selction sort select the minimum element from array and placed at beganing of the array.
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
void selectionsort(int a[], int len)
{
    int small;
    for (int i = 0; i < len-1; i++)
    {
        small = i;
        for (int j = i+1; j < len; j++)
        {
            if (a[small] >a[j])
            {
                small = j;
            }
        }
        int temp = a[i];
        a[i] = a[small];
        a[small] = temp;
    }
}
void main()
{
    int a[] = {167, 98, 63, 42, 87, 23};
    int len;
    len = sizeof(a) / sizeof(a[0]); // fined length of array
    printf("\nArray Element before Selection sort:");
    traversal(a, len);
    selectionsort(a, len);//selection sort
    printf("\nArray Element after Selection sort:");
    traversal(a, len);
}