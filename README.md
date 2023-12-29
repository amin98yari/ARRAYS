# bubble sort
Algorithm: Sort an array of 100 numbers in ascending order using bubble sort
- Start
- Define a constant named n with the value 100
- Declare five integer variables: i, j, a[n], temp, and swap
- Read 100 numbers from the user input and store them in the array a
- Set swap to 1
- Set i to 0
- Repeat the following steps until i is equal to n-1 or swap is equal to 0
  - Set swap to 0
  - Set j to 0
  - Repeat the following steps until j is equal to n-i-1
    - If a[j] is greater than a[j+1], then
      - Set temp to a[j]
      - Set a[j] to a[j+1]
      - Set a[j+1] to temp
      - Set swap to 1
    - Increase j by 1
  - Increase i by 1
- End

-----------------------


# binary search
Algorithm: Search for a value x in a sorted array a using binary search
- Start
- Declare six integer variables: a[], n, flag, i, j, and mid
- Set flag to 0 (a boolean variable to indicate whether x is found or not)
- Set i to 0 (the lower bound of the search range)
- Set j to n-1 (the upper bound of the search range)
- Set mid to (i+j)/2 (the middle index of the search range)
- Repeat the following steps until i is greater than or equal to j or flag is equal to 1
  - If x is equal to a[mid], then
    - print "found"
    - Set flag to 1
  - Else if x is less than a[mid], then
    - Set j to mid-1 (narrow the search range to the left half)
  - Else
    - Set i to mid+1 (narrow the search range to the right half)
  - Set mid to (i+j)/2 (update the middle index of the search range)
- If flag is equal to 0, then
  - print "not found"
- End

------------------

# linear search
Algorithm: Search for a value x in an array a of 100 numbers using linear search
- Start
- Define a constant named n with the value 100
- Declare three integer variables: i, x, and a[n]
- Read 100 numbers from the user input and store them in the array a
- print "enter x;"
- Read x from the user input
- Set i to 0
- Repeat the following steps until i is equal to n or x is found in the array
  - If a[i] is equal to x, then
    - print "found"
    - Exit the program
  - Increase i by 1
- print "not found"
- End

---------------------

# Permutational sorting
- Start
- Define a constant named n with the value 100
- Declare four integer variables: i, j, a[n], and temp
- Read 100 numbers from the user input and store them in the array a
- Set i to 0
- Repeat the following steps until i is equal to n-1
  - Set j to i+1
  - Repeat the following steps until j is equal to n
    - If a[i] is greater than a[j], then
      - Set temp to a[i]
      - Set a[i] to a[j]
      - Set a[j] to temp
    - Increase j by 1
  - Increase i by 1
- End
