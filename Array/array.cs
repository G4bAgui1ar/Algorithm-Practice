// EXERCISES
// 1. Create and Print: Create an array with 5 elements and print each element.

// 2. Modify an Element: Create an array with 10 elements, replace the 5th element with 55, and print the entire array.

// 3. Sum of Array Elements: Create an array with any 5 integers, then calculate and print the sum of all elements.

// 4. Find the Maximum Value: Write code to find the maximum value in an array of 8 integers.

// 5. Reverse Array: Given an array of 6 elements, write code to reverse the elements of the array.

using Systems;

namespace ArrayProblems{
    class Program{
        static void Main(string[] args){
            Problem1();
            // Problem2();
            // problem3();
            // Problem4();
            // problem5();
        }

        // 1. Create and Print: Create an array with 5 elements and print each element.
        static void Problem1(){
            int[] arr1 = new int[5];
            for(int i; i > arr1.Length; i++){
                arr1[i] = i + 1;
                System.out.WriteLine(arr1[i] + " ");
            }
        }
    }
}