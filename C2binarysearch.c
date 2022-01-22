/*
                    Binary Search
    1>binary searching algorithm used for an fined element position in sorted array.
    2>when array are not sorted then first sort them.
    3>Working:
        step:
            1>set low=0 and high=n
            2>fined mid=(low+high)/2
            3>if a[mid]==element
                return mid
            4>if mid>element
                 high=mid-1
                 return to step 2
            5>if mid<element
                low=mid+1
                return to step 3
            7>repeat until low<=high
*/
//sort the array
void sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
//traversal array
void traversal(int a[], int n)
{
    printf("Array element are:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
// binary search
void binarysearch(int a[], int n)
{
    int low = 0, high = n, mid,flag=0, searchelement;
    printf("\nEnter the elemnt you want to search:");
    scanf("%d", &searchelement);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (searchelement == a[mid])
        {
            printf("The element %d is found at %d th position.", a[mid], mid);
            flag=1;
            break;
        }
        else if (searchelement < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if(flag==0)
    {
         printf("The element %d is not found.",searchelement);
    }

}
void main()
{
    int a[] = {15, 98, 63, 42, 87, 23};
    int len;
    len = sizeof(a) / sizeof(a[0]); // fined length of array
    sort(a, len);                   //first sort the array
    traversal(a, len);              //traversal function return array element
    binarysearch(a, len);           //method call for binary serch
}