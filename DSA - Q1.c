#include <stdio.h>

int main()
{
    // Write a program to count the total number of duplicate elements in an array.
    int n = 5;
    int arr[n];
    
    printf("Enter the values of your array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    
    int dupCount = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++){
            if (arr[i] == arr[j]){
                dupCount++;
                break;
            }
        }
    }
    
    printf("Total number of duplicate elements: %d", dupCount);
    return 0;
}
