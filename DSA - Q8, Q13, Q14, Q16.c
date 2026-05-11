#include <stdio.h>

int main()
{
    // 8. Write a program to delete an element at a specific position from an array.
    // 13. Write a program to move all zeros(0’s) to the end of a given array.
    // 14. Write a program to move all zeros(0’s) to the beginning of a given array.
    // 16. Write a program to insert element in an array at specified position

    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 8. Delete element at specific position

    int deletePos;

    printf("\nEnter position to delete (0 to %d): ", n - 1);
    scanf("%d", &deletePos);

    for(int i = deletePos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // 16. Insert element at specified position


    int insertPos, value;

    printf("\nEnter position to insert: ");
    scanf("%d", &insertPos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    for(int i = n; i > insertPos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[insertPos] = value;

    n++;

    printf("Array after insertion: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // 13. Move zeros to end


    int zeroEnd[100];
    int k = 0;

    // first store non-zero
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            zeroEnd[k++] = arr[i];
        }
    }

    // then store zeros
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            zeroEnd[k++] = arr[i];
        }
    }

    printf("\nArray after moving zeros to end: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", zeroEnd[i]);
    }


    // 14. Move zeros to beginning


    int zeroBegin[100];
    k = 0;

    // first store zeros
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            zeroBegin[k++] = arr[i];
        }
    }

    // then store non-zeros
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            zeroBegin[k++] = arr[i];
        }
    }

    printf("\nArray after moving zeros to beginning: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", zeroBegin[i]);
    }

    return 0;
}

