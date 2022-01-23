/*                      Bubble sort
 1>Bubble sort is a sorting algorithm.
 2>it compares two adjacent elements and if its not in proper position then swaps them until is sort.
 */
#include<stdio.h>
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
void bubblesort(int a[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void main()
{ 
    int a[] = {167, 98, 63, 42, 87, 23};
    int len;
    len = sizeof(a) / sizeof(a[0]); // fined length of array
    printf("\nArray Element before Bubble sort:");
    traversal(a,len);
    bubblesort(a,len);//bubble sort
    printf("\nArray Element after Bubble sort:");
    traversal(a,len);
}