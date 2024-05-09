C - Search Algorithms
This repository contains implementations of various search algorithms as part of the ALX School project on search algorithms.
 Each algorithm is implemented in C programming language, and the corresponding space/time complexities are provided for each algorithm.

Tests
tests: Folder containing test files for all tasks. These test files are provided by ALX School.
Helper Files
listint: Folder containing helper files for Task 12, which involves singly linked list jump search.
create_list.c: C function that creates a listint_t singly linked list.
free_list.c: C function that frees a listint_t singly linked list.
print_list.c: C function that prints the contents of a listint_t singly linked list.
skiplist: Folder containing helper files for Task 13, which involves singly skipped list jump search.
create_skiplist.c: C function that creates a skiplist_t singly skipped list.
free_skiplist.c: C function that frees a skiplist_t singly skipped list.
print_skiplist.c: C function that prints the contents of a skiplist_t singly skipped list.
Header File
search_algos.h: Header file containing definitions and prototypes for all types and functions written for the project.
Data Structures
listint_s

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;




skiplist_s
------------
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

Function Prototypes
File	Prototype
0-linear.c	int linear_search(int *array, size_t size, int value);
1-binary.c	int binary_search(int *array, size_t size, int value);
100-jump.c	int jump_search(int *array, size_t size, int value);
102-interpolation.c	int interpolation_search(int *array, size_t size, int value);
103-exponential.c	int exponential_search(int *array, size_t size, int value);
104-advanced_binary.c	int advanced_binary(int *array, size_t size, int value);
Tasks
0. Linear search
0-linear.c: C function that searches for a value in an array of integers using linear search. Returns the first index where the value is located or -1 if the value is not present or the array is NULL.
1. Binary search
1-binary.c: C function that searches for a value in a sorted array of integers using binary search. Returns the index where the value is located or -1 if the value is not present or the array is NULL.
2. Big O #0
2-O: Text file containing the worst-case time complexity of linear search.
3. Big O #1
3-O: Text file containing the worst-case space complexity of iterative linear search.
4. Big O #2
4-O: Text file containing the worst-case time complexity of binary search.
5. Big O #3
5-O: Text file containing the worst-case space complexity of binary search.
6. Big O #4
6-O: Text file containing the space complexity of the given algorithm.
7. Jump search
100-jump.c: C function that searches for a value in a sorted array of integers using jump search. Returns the index where the value is located or -1 if the value is not present or the array is NULL.
8. Big O #5
101-O: Text file containing the average case time complexity of jump search in an array of size n using step = sqrt(n).
9. Interpolation search
102-interpolation.c: C function that searches for a value in a sorted array of integers using interpolation search. Returns the index where the value is located or -1 if the value is not present or the array is NULL.
10. Exponential search
103-exponential.c: C function that searches for a value in a sorted array of integers using exponential search. Returns the index where the value is located or -1 if the value is not present or the array is NULL.
11. Advanced binary search
104-advanced_binary.c: C function that searches for a value in a sorted array of integers using advanced binary search. Returns the index where the value is located or -1 if the value is not present or the array is NULL.
12. Jump search in a singly linked list
105-jump_list.c: C function that searches for a value in a listint_t sorted singly linked list of integers using jump search. Returns a pointer to the first node where the value is located or NULL if the value is not present or the head of the list is NULL.
13. Linear search in a skip list
106-linear_skip.c: C function that searches for a value in a skiplist_t sorted skipped linked list of integers using jump search. Returns a pointer to the first node where the value is located or NULL if the value is not present or the head of the list is NULL.
14. Big O #6
107-O: Text file containing the average time complexity of jump search in a singly linked list of size n, using step = sqrt(n).
15. Big O #7
108-O: Text file containing the average time complexity of jump search in a sorted skipped linked list of size n, using step = sqrt(n).
Author
This project was implemented by Nwafor Chukwuebuka
