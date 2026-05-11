#include <stdio.h>

int main()
{
    // 7. Separate odd and even numbers
    // 17. Print all negative elements
    // 18. Count total negative elements
    // 19. Replace even by 0 and odd by 1
    // 24. Find average of numbers
    // 25. Separate positive and negative numbers

    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 7. Separate odd and even numbers

    int even[n], odd[n];
    int e = 0, o = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[e++] = arr[i];
        }
        else
        {
            odd[o++] = arr[i];
        }
    }

    printf("\nEven numbers: ");

    for(int i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers: ");

    for(int i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }


    // 17. Print negative elements


    printf("\nNegative elements are: ");

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d ", arr[i]);
        }
    }


    // 18. Count negative elements


    int negativeCount = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            negativeCount++;
        }
    }

    printf("\nTotal negative elements: %d", negativeCount);


    // 19. Replace even by 0 and odd by 1


    int replaced[n];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            replaced[i] = 0;
        }
        else
        {
            replaced[i] = 1;
        }
    }

    printf("\nAfter replacing even by 0 and odd by 1: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", replaced[i]);
    }


    // 24. Find average of numbers


    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    float average = (float)sum / n;

    printf("\nAverage of array: %.2f", average);


    // 25. Separate positive and negative


    int positive[n], negative[n];
    int p = 0, neg = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
        {
            positive[p++] = arr[i];
        }
        else
        {
            negative[neg++] = arr[i];
        }
    }

    printf("\nPositive numbers: ");

    for(int i = 0; i < p; i++)
    {
        printf("%d ", positive[i]);
    }

    printf("\nNegative numbers: ");

    for(int i = 0; i < neg; i++)
    {
        printf("%d ", negative[i]);
    }

    return 0;
}
