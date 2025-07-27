// Program: Insert at End of Array
// Author: Albin Mathew
#include <stdio.h> 

int main() { 
    int arr[100]; // Array to store numbers, max size 100
    int n; // Variable to store how many elements in array
    int element; // Variable to store the new element we want to add
    int i; // Loop variable for printing array

    // Ask user how many elements in array
    printf("Enter number of elements in array: ");
    scanf("%d", &n); // Store user input in n

    // Check if array is not full (less than 100)
    if (n >= 100) {
        printf("Array is full, cannot add more elements!\n");
        return 1; // Exit program if array is full
    }

    // Ask user to input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) { // Loop to take input for each element
        scanf("%d", &arr[i]); // Store each element in array
    }

    // Ask user for the element to add at end
    printf("Enter the element to insert at end: ");
    scanf("%d", &element); // Store the new element

    // Add element at the end of array
    arr[n] = element; // Put new element at index n (end of array)
    n++; // Increase size of array by 1

    // Print the updated array
    printf("Array after inserting %d at end:\n", element);
    for (i = 0; i < n; i++) { // Loop to print all elements
        printf("%d ", arr[i]); // Print each element with space
    }
    printf("\n"); 

    return 0; 
}