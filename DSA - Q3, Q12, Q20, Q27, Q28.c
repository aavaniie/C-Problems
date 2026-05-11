#include <stdio.h>

int main()
{
    // 3.Write a program to print all prime numbers in an array.
    // 12.Write a program to separate prime and non-prime numbers in separate arrays.
    // 20.Write a program to replace all prime numbers by 0 and non-prime numbers by 1.
    // 27. Write a program to count the total number of prime numbers in an array.
    // 28. Write a program to delete all prime numbers in an array.

    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 3. Print all prime numbers
    printf("\nPrime numbers are: ");

    for(int i = 0; i < n; i++)
    {
        int isPrime = 1;

        if(arr[i] < 2)
        {
            isPrime = 0;
        }

        for(int j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
        {
            printf("%d ", arr[i]);
        }
    }

    // 12. Separate prime and non-prime numbers
    int primeArr[n], nonPrimeArr[n];
    int p = 0, np = 0;

    for(int i = 0; i < n; i++)
    {
        int isPrime = 1;

        if(arr[i] < 2)
        {
            isPrime = 0;
        }

        for(int j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
        {
            primeArr[p++] = arr[i];
        }
        else
        {
            nonPrimeArr[np++] = arr[i];
        }
    }

    printf("\nPrime array: ");

    for(int i = 0; i < p; i++)
    {
        printf("%d ", primeArr[i]);
    }

    printf("\nNon-prime array: ");

    for(int i = 0; i < np; i++)
    {
        printf("%d ", nonPrimeArr[i]);
    }

    // 20. Replace prime by 0 and non-prime by 1
    int replacedArr[n];

    for(int i = 0; i < n; i++)
    {
        int isPrime = 1;

        if(arr[i] < 2)
        {
            isPrime = 0;
        }

        for(int j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
        {
            replacedArr[i] = 0;
        }
        else
        {
            replacedArr[i] = 1;
        }
    }

    printf("\nAfter replacing prime by 0 and non-prime by 1: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", replacedArr[i]);
    }

    // 27. Count total prime numbers
    int primeCount = 0;

    for(int i = 0; i < n; i++)
    {
        int isPrime = 1;

        if(arr[i] < 2)
        {
            isPrime = 0;
        }

        for(int j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
        {
            primeCount++;
        }
    }

    printf("\nTotal prime numbers: %d", primeCount);

    // 28. Delete all prime numbers
    int nonPrimeOnly[n];
    int k = 0;

    for(int i = 0; i < n; i++)
    {
        int isPrime = 1;

        if(arr[i] < 2)
        {
            isPrime = 0;
        }

        for(int j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(!isPrime)
        {
            nonPrimeOnly[k++] = arr[i];
        }
    }

    printf("\nArray after deleting prime numbers: ");

    for(int i = 0; i < k; i++)
    {
        printf("%d ", nonPrimeOnly[i]);
    }


    return 0;
}
