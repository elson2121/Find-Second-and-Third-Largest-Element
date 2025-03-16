# Find-Second-and-Third-Largest-Element
This project contains a C++ program that finds the second and third largest elements in a given array using efficient single-pass algorithms.
# Find Second and Third Largest Elements

This project contains a C++ program that finds the second and third largest elements in a given array using efficient single-pass algorithms.

## Description
The program processes an array of numbers and determines:
- The **second largest element**.
- The **third largest element**.

It uses two functions that iterate through the array only once (O(n) time complexity) and update the top values accordingly.

## Algorithm for Finding the Second Largest Element
1. **Input Check:** Ensure the array has at least 2 elements.
2. **Initialization:**  
   - Set `first` to the first element of the array.
   - Set `second` to a very small number (or the minimum integer value).
3. **Iteration:**  
   For each element in the array:
   - If the element is greater than `first`, update `second` to `first` and `first` to that element.
   - Otherwise, if the element is greater than `second` and not equal to `first`, update `second`.
4. **Return:** The value of `second` is the second largest element.

## Pseudocode for Second Largest Element
Algorithm FindSecondLargest(arr, n) if n < 2 then return "Error: Not enough elements" first ← arr[0] second ← -∞ for i from 1 to n-1 do if arr[i] > first then second ← first first ← arr[i] else if arr[i] > second and arr[i] ≠ first then second ← arr[i] return second

## Algorithm for Finding the Third Largest Element
1. **Input Check:** Ensure the array has at least 3 elements.
2. **Initialization:**  
   - Set `first`, `second`, and `third` to very small numbers (or the minimum integer value).
3. **Iteration:**  
   For each element in the array:
   - If the element is greater than `first`, shift `first` to `second`, `second` to `third`, and update `first` with the element.
   - Else if the element is greater than `second` (and not equal to `first`), shift `second` to `third` and update `second`.
   - Else if the element is greater than `third` (and not equal to `second` or `first`), update `third`.
4. **Return:** The value of `third` is the third largest element.

## Pseudocode for Third Largest Element
Algorithm FindThirdLargest(arr, n) if n < 3 then return "Error: Not enough elements" first ← -∞ second ← -∞ third ← -∞ for i from 0 to n-1 do if arr[i] > first then third ← second second ← first first ← arr[i] else if arr[i] > second and arr[i] ≠ first then third ← second second ← arr[i] else if arr[i] > third and arr[i] ≠ second and arr[i] ≠ first then third ← arr[i] return third

## Code Implementation
The complete C++ code is provided in the file **largest_elements.cpp**.

## How to Run
1. **Compile the program using:**
g++ largest_elements.cpp -o output

2. **Run the program:**
./output

3. The program will print the second and third largest elements from the array.

## Author
Samuel Diriba