// Program: Insert at End of Array
// Author: Albin Mathew
# Create an empty list to store numbers
arr = []

# Ask user how many elements they want in list
n = int(input("Enter number of elements in array: "))

# Ask user to input the elements
print("Enter", n, "elements:")
for i in range(n): # Loop to take n elements
    element = int(input()) # Take each element as input
    arr.append(element) # Add element to the end of list

# Ask user for the element to add at end
new_element = int(input("Enter the element to insert at end: "))

# Add the new element at the end of list
arr.append(new_element) # Append adds element at the end

# Print the updated list
print("Array after inserting", new_element, "at end:")
for i in range(len(arr)): # Loop to print all elements
    print(arr[i], end=" ") # Print each element with space
print() # New line after printing list