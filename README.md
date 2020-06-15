# Project 0x1B. C - Sorting algorithms & Big O

**A sorting algorithm** is an algorithm that puts elements of a list in a certain order. The most frequently used orders are numerical and lexicographical order. Efficient sorting is important for optimizing the efficiency of other algorithms (such as search and merge algorithms) that require input data to be in sorted lists. Sorting is also often useful for canonicalizing data and for producing human-readable output. More formally, the output of any sorting algorithm must satisfy two conditions:

    The output is in nondecreasing order (each element is no smaller than the previous element according to the desired total order);
    The output is a permutation (a reordering, yet retaining all of the original elements) of the input.

Further, the input data is often stored in an array, which allows random access, rather than a list, which only allows sequential access; though many algorithms can be applied to either type of data after suitable modification. -- Wikipedia

**Big O notation** is a mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity. Big O is a member of a family of notations invented by Paul Bachmann, Edmund Landau, and others, collectively called Bachmann–Landau notation or asymptotic notation.

In computer science, big O notation is used to classify algorithms according to how their run time or space requirements grow as the input size grows. In analytic number theory, big O notation is often used to express a bound on the difference between an arithmetical function and a better understood approximation; a famous example of such a difference is the remainder term in the prime number theorem.

Big O notation characterizes functions according to their growth rates: different functions with the same growth rate may be represented using the same O notation.

The letter O is used because the growth rate of a function is also referred to as the order of the function. A description of a function in terms of big O notation usually only provides an upper bound on the growth rate of the function. Associated with big O notation are several related notations, using the symbols o, Ω, ω, and Θ, to describe other kinds of bounds on asymptotic growth rates.

Big O notation is also used in many other fields to provide similar estimates. -- Wikipedia


## Resources

* [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
* [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
* [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
* [Array of infinite elements, run time complexity](https://www.quora.com/In-an-array-of-infinite-elements-what-is-the-run-time-complexity-of-finding-an-nth-item-in-the-array)
* [Bubble Sort](https://www.geeksforgeeks.org/bubble-sort/)

## Learning Objectives

* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

## General Reqirements 

* All files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* No global variables
* No more than 5 functions per file
* Do not use the standard library. 
* Do not use functions like printf, puts, … is totally forbidden.
* The prototypes of all functions should be included in the header file called sort.h
* A list/array does not need to be sorted if its size is less than 2.

### Github

* There should be one project repository per group. If clone/fork/whatever a project repository with the same name before the second deadline, risk a 0% score

### Tests

* Here is a quick tip to test sorting algorithms with big sets of random integers: [Random.org](https://www.random.org/integer-sets/)


## TASKS    

### Task 0.
Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

### Task 1.
Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

### Task 2.
Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

### Task 3
Write a function that sorts an array of integers in ascending order using the Quick sort algorithm



