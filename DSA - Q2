#include <stdio.h>

int main()
{
    // 2. Write a program to print all unique elements in an array.
    int n;
    printf("Enter the size of your array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of your array: ");
    for(int i =0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    
    printf("Unique elements are: ");
    for(int i = 0; i<n; i++){
        int unique = 1;
        for(int j = 0; j<n; j++){
            if(i != j && arr[i] == arr[j]){
                unique = 0;
                break;
            }
        }
        if(unique){
            printf("%d", arr[i]);
        }
    }
    

    return 0;
}
