/*
                Linear Search
    1>linear search is sequential searching algorithm.
    2>it start from one end and check every element until desired element found.
    3>it is simplest searching algorithm.
    4>time complexity:O(n).
      space complexity:O(1)
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
//Search element
void searche(int a[], int n)
{
    int searchelement, flag = 0;
    printf("\nEnter the elemnt you want to search:");
    scanf("%d", &searchelement);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == searchelement)
        {
            printf("The element %d is found at %d th position.", searchelement, i + 1);
            flag=0;
            break;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("The element %d not found.",searchelement);
    }
}

void main()
{
    int a[]={15,98,63,42,87,23};
    int len;
    len=sizeof(a)/sizeof(a[0]);// fined length of array
    traversal(a,len);//traversal function return array element
    searche(a,len); //method call for linear search
}
