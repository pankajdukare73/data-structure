/*                      Array
    1>Array is collection os similar data type.
    2>that can be store in continuos memory location
    3>syntax:
        data_type Array_name[size];
        int a[10];  //size of array is 10 it contain 10 integer
    4>type:
        1>one dimension:
            it contain only one row.
        2>two dimension:
            it contain row and column.
            data_type array_name[row][column] //int a[2][3]
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

//insertion in array
//1.insert at begining
int insertatb(int a[], int n)
{
    int newelement;
    printf("Enter the element you want to insert:");
    scanf("%d", &newelement);
    for (int i = n + 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = newelement;
    printf("Sucessfully inserted %d element at begining ", newelement);
    return n + 1;
}
//insert at index
int insertati(int a[], int n)
{
    int newelement, index;
    printf("Enter the Index At you want to add element:");
    scanf("%d", &index);
    printf("Enter the element you want to insert:");
    scanf("%d", &newelement);
    for (int i = n + 1; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = newelement;
    printf("Sucessfully inserted %d element at index %d ", newelement, index);
    return n + 1;
}
//insert at End
int insertate(int a[], int n)
{
    int newelement;
    printf("Enter the element you want to insert:");
    scanf("%d", &newelement);
    a[n] = newelement;
    printf("Sucessfully inserted %d element at end ", newelement);
    return n + 1;
}

//delete element
int deletee(int a[], int n)
{
    int delelement, flag = 0;
    printf("Enter the element you want to delete:");
    scanf("%d",&delelement);
    for (int i = 0; i < n; i++)
    {
        if (a[i]==delelement)
        {
            for (int j = 0; j < n - 1; j++)
            {
                a[i] = a[i + 1];
            }
            printf("Sucessfully deleted %d element.", delelement);
            return n - 1;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("The element %d not found.", delelement);
    }

    return n;
}

//Search element
void searche(int a[], int n)
{
    int searchelement, flag = 0;
    printf("Enter the elemnt you want to search:");
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

//Update element with the help of element
void updatee(int a[], int n)
{
    int oldelement, newelement,flag=0;
    printf("Enter the element you want to update:");
    scanf("%d", &oldelement);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == oldelement)
        {
            printf("Enter new element to upadate:");
            scanf("%d", &newelement);
            a[i] = newelement;
            printf("The element %d is updated sucessfully.", newelement);
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("The element %d not found.", oldelement);
    }
}
//update element with help of index
void updateie(int a[], int n)
{
    int newelement, index;
    printf("Enter the Index At you want to add element:");
    scanf("%d", &index);
    printf("Enter the elemnt you want to insert:");
    scanf("%d", &newelement);
    a[index] = newelement;
    printf("The element %d is updated sucessfully.", newelement);
}

void main()
{
    int a[100];
    printf("How many element you want to insert in array:");
    int n, choice, newelement, choiceu = 1, index, choicei;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element:", i);
        scanf("%d", &a[i]);
    }
    while (choice != 0)
    {
        printf("\nEnter you Choice:\n1.Traversal.\n2.Insertion.\n3.Deletion.\n4.Search.\n5.Update.\n0.Exit.\nChoice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            traversal(a, n);
            break;
        case 2:
            while (choicei != 0)
            {
                printf("\nInsert Element:\n1.At beginning.\n2.At Index.\n3.At End.\n0.Exit.\nChoice:");
                scanf("%d", &choicei);
                switch (choicei)
                {
                case 1:
                    n = insertatb(a, n);
                    break;
                case 2:
                    n = insertati(a, n);
                    break;
                case 3:
                    n = insertate(a, n);
                    break;
                case 0:
                    break;
                default:
                    printf("You Enter wrong choice!!!!try again.");
                    break;
                }
            }
            choicei = 1;
            break;
        case 3:
            n = deletee(a, n);
            break;
        case 4:
            searche(a, n);
            break;
        case 5:
            while (choiceu != 0)
            {
                printf("\nUpdate element:\n1.with element.\n2.with Index.\n0.Exit.\nchoice:");
                scanf("%d", &choiceu);
                switch (choiceu)
                {
                case 1:
                    updatee(a, n);
                    break;
                case 2:
                    updateie(a, n);
                    break;
                case 0:
                    break;
                default:
                    printf("You Enter wrong choice!!!!try again.");
                    break;
                }
            }
            choiceu = 1;
            break;
        case 0:
            break;
        default:
            printf("You Enter wrong choice!!!!try again.");
            break;
        }
    }
}
