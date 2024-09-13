#include <stdio.h>
#define SIZE 100

int main(void) {
    //Write a program in C to read n number of values in an array and display them in reverse order.
    int n;
    int arr[SIZE];
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);
    printf("Input %d number of elements in the array :", n);

    for (int i = 0; i < n; ++i) {
        printf("\nElement - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The values store into the array are : \n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\nThe values store into the array in reverse are : \n");
    for (int i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
