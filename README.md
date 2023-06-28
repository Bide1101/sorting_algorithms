Sorting Algorithms and Big O

This repository provides information about different sorting algorithms and how their efficiency is measured using Big O notation. Sorting algorithms are important tools for arranging elements in a specific order, like sorting numbers from smallest to largest. The choice of which sorting algorithm to use depends on factors such as the size of the data, the desired order, and the efficiency needed.

List of Sorting Algorithms:

Bubble Sort
Selection Sort
Insertion Sort
Merge Sort
Quick Sort
Heap Sort
Radix Sort
Counting Sort
Big O Notation is a way to describe the performance of an algorithm. It represents the maximum amount of time an algorithm takes to run as the input size grows. Here are some common notations used in Big O:

O(1): Constant time complexity. The algorithm takes the same amount of time regardless of the input size.
O(log n): Logarithmic time complexity. The algorithm's runtime increases slowly as the input size grows.
O(n): Linear time complexity. The algorithm's runtime increases linearly with the input size.
O(n log n): Linearithmic time complexity. The algorithm's runtime grows in proportion to the input size multiplied by the logarithm of the input size.
O(n^2): Quadratic time complexity. The algorithm's runtime grows quadratically with the input size.
O(2^n): Exponential time complexity. The algorithm's runtime grows exponentially with the input size.
O(n!): Factorial time complexity. The algorithm's runtime grows factorialy with the input size.
Here's a summary of the time complexities for the mentioned sorting algorithms:

Sorting Algorithm	Best Case	Average Case	Worst Case
Bubble Sort	O(n)	O(n^2)	O(n^2)
Selection Sort	O(n^2)	O(n^2)	O(n^2)
Insertion Sort	O(n)	O(n^2)	O(n^2)
Merge Sort	O(n log n)	O(n log n)	O(n log n)
Quick Sort	O(n log n)	O(n log n)	O(n^2)
Heap Sort	O(n log n)	O(n log n)	O(n log n)
Radix Sort	O(nk)	O(nk)	O(nk)
Counting Sort	O(n + k)	O(n + k)	O(n + k)
Please note that in the table above, "n" represents the size of the input array, and "k" represents the range of input values.
