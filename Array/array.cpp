#include <iostream>
using namespace std;

int main(){
    // 1. Create and Print: Create an array with 5 elements and print each element.
    cout << "Solution for Problem 1" <<endl;
    int arr1[5];
    for(int i = 0; i < 5; i++){
        arr1[i] = i + 1;
        cout << arr1[i] << " ";
    }

    // Problem 2: Modify an element - Replace the 5th element with 55 and print the entire array
    cout << "\n\nSolution for Problem 2" << endl;
    int arr2[10];
    for (int i = 0; i < 10; i++) {
        arr2[i] = i + 1;
    }
    arr2[4] = 55;
    for (int i = 0; i < 10; i++) {
        cout << arr2[i] << " ";
    }

    // Problem 3: Sum of array elements - Calculate and print the sum of all elements
    cout << "\n\nSolution for Problem 3" << endl;
    int arr3[] = {5, 9, 1, 8, 4};
    int sum = 0;
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    for (int i = 0; i < size3; i++) {
        arr3[i] = i + 1;  // Updating array values for this specific problem
        sum += arr3[i];
        cout << arr3[i] << " ";
    }
    cout << "\nSum of Array is " << sum;
    
    // Problem 4: Find the maximum value in an array
    cout << "\n\nSolution for Problem 4" << endl;
    int arr4[] = {51, 9, 11, 82, 49, 10, -298, 99};
    int max = arr4[0];
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    for (int i = 0; i < size4; i++) {
        if (max < arr4[i]) {
            max = arr4[i];
        }
        cout << arr4[i] << " ";
    }
    cout << "\nThe max value of the array is " << max;

    // Problem 5: Reverse the array and print
    cout << "\n\nSolution for Problem 5" << endl;
    int arr5[] = {1, 2, 3, 4, 5, 6};
    int size5 = sizeof(arr5) / sizeof(arr5[0]);
    for (int i = size5 - 1; i >= 0; i--) {
        cout << arr5[i] << " ";
    }

    return 0;
}