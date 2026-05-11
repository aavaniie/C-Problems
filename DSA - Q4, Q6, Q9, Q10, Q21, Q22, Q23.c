#include <stdio.h>

int main()
{
    // 4. Write a program to merge two arrays sorted in descending order.
    // 6. Write a program to find the largest and smallest number in an array.
    // 9. Write a program to find the second largest number in an array.
    // 10. Write a program to find the second smallest number in an array.
    // 21. Write a program to sort and reverse an array.
    // 22. Write a program to sort elements of array in ascending order.
    // 23. Write a program to sort elements of array in descending order.

    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter elements of first array: ");

    for(int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter elements of second array: ");

    for(int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];

    // Copy first array
    for(int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    // Copy second array
    for(int i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }

    int total = n1 + n2;

    // DESCENDING SORT
    for(int i = 0; i < total - 1; i++)
    {
        for(int j = i + 1; j < total; j++)
        {
            if(merged[i] < merged[j])
            {
                int temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }

    // 4. Merge two arrays sorted in descending order
    printf("\nMerged array in descending order: ");

    for(int i = 0; i < total; i++)
    {
        printf("%d ", merged[i]);
    }
    // largest and smallest number
    printf("\nSmallest number: %d", merged[0]);
    printf("\nLargest number: %d", merged[total - 1]);
    // 9. Second largest number
    printf("\nSecond largest number: %d", merged[1]);

    // 10. Second smallest number
    printf("\nSecond smallest number: %d", merged[1]);
    // 23. Sort elements in descending order
    printf("\nArray in descending order: ");

    for(int i = 0; i < total; i++)
    {
        printf("%d ", merged[i]);
    }

    // 21. Reverse array
    printf("\nReversed array: ");

    for(int i = total - 1; i >= 0; i--)
    {
        printf("%d ", merged[i]);
    }

    // ASCENDING SORT
    for(int i = 0; i < total - 1; i++)
    {
        for(int j = i + 1; j < total; j++)
        {
            if(merged[i] > merged[j])
            {
                int temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }

    // 22. Sort elements in ascending order
    printf("\nArray in ascending order: ");

    for(int i = 0; i < total; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
