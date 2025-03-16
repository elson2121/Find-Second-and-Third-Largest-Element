#include <iostream>
#include <limits>
using namespace std;

// Function to find the second largest element in an array
int findSecondLargest(int arr[], int n) {
    if(n < 2) {
        cerr << "Error: Not enough elements" << endl;
        return -1; // or throw an exception
    }
    int first = arr[0];
    int second = numeric_limits<int>::min(); // Initialize to smallest possible int

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

// Function to find the third largest element in an array
int findThirdLargest(int arr[], int n) {
    if(n < 3) {
        cerr << "Error: Not enough elements" << endl;
        return -1; // or throw an exception
    }
    int first = numeric_limits<int>::min();
    int second = numeric_limits<int>::min();
    int third = numeric_limits<int>::min();

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }
    return third;
}

int main() {
    int arr[] = {4, 2, 7, 1, 9, -3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Second largest element: " << findSecondLargest(arr, size) << endl;
    cout << "Third largest element: " << findThirdLargest(arr, size) << endl;
    return 0;
}
