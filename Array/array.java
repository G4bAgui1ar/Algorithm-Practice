/*
EXERCISES
1. Create and Print: Create an array with 5 elements and print each element.

2. Modify an Element: Create an array with 10 elements, replace the 5th element with 55, and print the entire array.

3. Sum of Array Elements: Create an array with any 5 integers, then calculate and print the sum of all elements.

4. Find the Maximum Value: Write code to find the maximum value in an array of 8 integers.

5. Reverse Array: Given an array of 6 elements, write code to reverse the elements of the array.
 */

import java.util.Arrays;

public class array{
    public static void main(String[] args) {
        // Problem 1 Solution
        System.out.println("Solution for Problem 1: ");
        int[] arr1 = new int[5];
        
        for(int i = 0; i<arr1.length; i++){
            arr1[i] = i+1;
            System.out.print(arr1[i] + " ");
        }

        // Problem 2 Solution
        System.out.println("\n\nSolution for Problem 2:");
        int[] arr2 = new int[10];

        for(int i = 0; i<arr2.length; i++){
            arr2[i] = i+1;
        }
        arr2[4] = 55;
        for(int num : arr2){
            System.out.print(num + " ");
        }

        //Solution for Problem 3
        System.out.println("\n\nSolution for Problem 3:");
        int[] arr3 = {5, 9, 1, 8, 4}; 
        for(int num : arr3){
            System.out.print(num + " ");
        }
        System.out.println("\nsum of array is " + Arrays.stream(arr3).sum());

        //Solution for Problem 4
        System.out.println("\nSolution for Problem 4:");
        int[] arr4 = {51, 9, 11, 82, 49, 10, -298, 99}; 
        int max = Arrays.stream(arr4).max().getAsInt();
        for(int num : arr4){
            System.out.print(num + " ");
        }
        System.out.println("\nThe maximum value in the array is: "+ max);


        //Solution for Problem 5
        System.out.println("\nSolution for Problem 5:");
        int[] arr5 = {1, 2, 3, 4, 5, 6};
        for(int i = arr5.length - 1; i >= 0; i--){
            System.out.print(arr5[i] + " ");
        }
    }
}



