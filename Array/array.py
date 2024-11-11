# EXERCISES
# 1. Create and Print: Create an array with 5 elements and print each element.
print("Solution for Problem 1")
arr1 = [i + 1 for i in range(5)]
for item in arr1:
    print(item, end = " ")

# 2. Modify an Element: Create an array with 10 elements, replace the 5th element with 55, and print the entire array.
print("\n\nSolution for Problem 2")
arr2 = [i + 1 for i in range(10)]
arr2[4] = 55
for item in arr2:
    print(item, end =" ")

# 3. Sum of Array Elements: Create an array with any 5 integers, then calculate and print the sum of all elements.
print("\n\nSolution for Problem 3")
arr3 = [5, 2, 9, 7, 4]
for item in arr3:
    print(item, end=" ")
print("\nSum of the array = ", sum(arr3))

# 4. Find the Maximum Value: Write code to find the maximum value in an array of 8 integers.
print("\n\nSolution for Problem 4")
arr4 = [51, 9, 11, 82, 49, 10, -298, 99]
max_value = max(arr4)
for item in arr4:
    print(item, end = " ")
print("\nThe maximum value in the array is: ", max_value)

# 5. Reverse Array: Given an array of 6 elements, write code to reverse the elements of the array.
print("\n\nSolution for Problem 5")
arr5 = [1, 2, 3, 4, 5, 6]
for item in reversed(arr5):
    print(item, end = " ")