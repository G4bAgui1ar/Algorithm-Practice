using System;

namespace ArrayProblems{
    class Program{
        static void Main(string[] args){
            Console.WriteLine("Solution for Problem 1");
            Problem1();

            Console.WriteLine("\n\nSolution for Problem 2");
            Problem2();

            Console.WriteLine("\n\nSolution for Problem 3");
            Problem3();

            Console.WriteLine("\nSolution for Problem 4");
            Problem4();
            
            Console.WriteLine("\nSolution for Problem 5");
            Problem5();
        }

        // 1. Create and Print: Create an array with 5 elements and print each element.
        static void Problem1(){
            int[] arr1 = new int[5];
            for(int i = 0; i < arr1.Length; i++){
                arr1[i] = i + 1;
                Console.Write(arr1[i] + " ");
            }
        }

        //2. Modify an Element: Create an array with 10 elements, replace the 5th element with 55, and print the entire array.
        static void Problem2(){
            int[] arr2 = new int[10];
            for(int i = 0; i < arr2.Length; i++){
                arr2[i] = i + 1;
            }
            arr2[4] = 55;
            foreach(int num in arr2){
                Console.Write(num + " ");
            }
        }

        // 3. Sum of Array Elements: Create an array with any 5 integers, then calculate and print the sum of all elements.
        static void Problem3(){
            int[] arr3 = {5, 9, 1, 8, 4};
            int sum = 0;

            for(int i = 0; i < arr3.Length; i++){
                arr3[i] = i+1;
                sum += arr3[i];
                Console.Write(arr3[i] + " ");
            }
            Console.WriteLine("Sum of array is " + sum);
        }

        // 4. Find the Maximum Value: Write code to find the maximum value in an array of 8 integers.
        static void Problem4(){
            int[] arr4 = {51, 9, 11, 82, 49, 10, -298, 99};
            int max = arr4[0];
            foreach(int num in arr4){
                if(num > max){
                    max = num;
                }
                Console.Write(num + " ");
            }
            Console.WriteLine("\nThe maximum value in the array is: " + max);
        }

        // 5. Reverse Array: Given an array of 6 elements, write code to reverse the elements of the array.
        static void Problem5(){
            int[] arr5 = {1, 2, 3, 4, 5, 6};
            for(int i = arr5.Length - 1; i >= 0; i--){
                Console.Write(arr5[i] + " ");
            }
        }
    }
}
