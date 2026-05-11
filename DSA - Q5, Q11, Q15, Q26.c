#include <stdio.h>

int main()
{
    // 5. Count frequency of each element
    // 11. Find repeating elements
    // 15. Delete duplicate elements
    // 26. Count unique elements

    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Q5 - Count frequency of each element

    printf("\nFrequency of elements:\n");

    for(int i = 0; i < n; i++)
    {
        int count = 1;

        if(arr[i] == -1)
        {
            continue;
        }

        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }

        printf("%d occurs %d times\n", arr[i], count);
    }

    // Restore array input again for next questions

    printf("\nRe-enter elements of array: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Q11 - Find repeating elements

    printf("\nRepeating elements are: ");

    for(int i = 0; i < n; i++)
    {
        int repeated = 0;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                repeated = 1;
                break;
            }
        }

        if(repeated)
        {
            printf("%d ", arr[i]);
        }
    }

    // Q15 - Delete duplicate elements

    int unique[n];
    int k = 0;

    for(int i = 0; i < n; i++)
    {
        int duplicate = 0;

        for(int j = 0; j < k; j++)
        {
            if(arr[i] == unique[j])
            {
                duplicate = 1;
                break;
            }
        }

        if(!duplicate)
        {
            unique[k++] = arr[i];
        }
    }

    printf("\nArray after deleting duplicates: ");

    for(int i = 0; i < k; i++)
    {
        printf("%d ", unique[i]);
    }

    // Q26 - Count unique elements

    int uniqueCount = 0;

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            uniqueCount++;
        }
    }

    printf("\nTotal unique elements: %d", uniqueCount);

    return 0;
}
