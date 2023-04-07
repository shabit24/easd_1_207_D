// 1.	Algorithms are necessary for solving problems. Because to find any solution of any problem, algorithm give the structure to solve complex problem. Algorithms can solve the problem more efficiently. For more complex issues that we can’t be able to solve easily, we get the solution by using algorithm. Algorithms can be designed to solve problems with a high degree of accuracy. Some problems are too complex to solve manually and require the use of algorithms to break them down into smaller, more manageable pieces.

// 2.	In the algorithm, it is classified into 2 data structures such as:

// a.	Array: Arrays are a collection of elements that are stored in contiguous memory locations. They are often used in algorithms to store and manipulate data that can be accessed using an index.

// b.	Linked Lists: Linked lists are a collection of elements, each of which contains a reference to the next element in the list.
// 3.	A program algorithm can be affected by a variety of factors like time complexity.      Algorithms with a higher number of operations will take longer to execute and are less efficient. Space Complexity, Algorithms that require a lot of memory are less efficient than those that use less memory. The size of the input data that an algorithm processes can also affect its efficiency. According to data structure algorithms can be either efficient nor inefficient.

// 4.	Of the 6 algorithms that have been studied Insertion Sort is the most efficient for sorting small data. Insertion Sort works by iterating through the array and inserting each element into its proper place in a sorted subarray. It has a time complexity of O(n^2) but performs better than other O(n^2) algorithms like Bubble Sort and Selection Sort, especially on small datasets.

// 5.	The quadratic time complexity names of algorithms are Bubble sort, Selection sort, Insertion sort. Because their time complexity of O(n^2) because they involve nested loops to compare and swap elements. Loglinear time complexity algorithms are Merge Sort, Quick Sort, Heap Sort. Because of their time complexity of O(n*log(n)), which is more efficient than O(n^2) algorithms.

#include <iostream>
using namespace std;
const int Max_Data = 7; // sum of last two digits
int SH_index = 0;       // replace with initials

void input(int arr[], int size)
{
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}