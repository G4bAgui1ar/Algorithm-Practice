#include<stdio.h>

// EXERCISES

void main(){

    // 1. Create and Print: Create an array with 5 elements and print each element.
    printf("Solution for Problem 1\n");
    int arr1[5];
    for (int i = 0; i < 5; i++)
    {
        arr1[i] = i + 1;
        printf("%d ", arr1[i]);
    }

    // 2. Modify an Element: Create an array with 10 elements, replace the 5th element with 55, and print the entire array.
    printf("\n\nSolution for Problem 2\n");
    int arr2[10];
    for (int i = 0; i < 10; i++)
    {
        arr2[i] = i + 1;
    }
    arr2[4] = 55;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }

    // 3. Sum of Array Elements: Create an array with any 5 integers, then calculate and print the sum of all elements.
    printf("\n\nSolution for Problem 3\n");
    int arr3[] = {5, 9, 1, 8, 4};
    int sum = 0;
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    for (int i = 0; i < size3; i++)
    {   
        arr3[i] = i + 1;
        sum += arr3[i];
        printf("%d ", arr3[i]);
    }
    printf("\nSum of Array is %d", sum);

    // 4. Find the Maximum Value: Write code to find the maximum value in an array of 8 integers.
    printf("\n\nSolution for Problem 4\n");
    int arr4[] = {51, 9, 11, 82, 49, 10, -298, 99};
    int max = arr4[0];
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    for(int i = 0; i < size4; i++){
        if(max < arr4[i]){
            max = arr4[i];
        }
        printf("%d ", arr4[i]);
    }
    printf("\nThe max valuie of the array is %d", max);

    
    // 5. Reverse Array: Given an array of 6 elements, write code to reverse the elements of the array.
    printf("\n\nSolution for Problem 5\n");
    int arr5[] = {1, 2, 3, 4, 5, 6};
    int size5 = sizeof(arr5) / sizeof(arr5[0]);
    for(int i = size5-1; i >=0; i--){
        printf("%d ", arr5[i]);
    }
}