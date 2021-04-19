# 0x1E. C - Search Algorithms
---

## Description :newspaper:
This project was created with learning purposes at Holberton School; on `Ubuntu 14.04` `gcc 4.8.4`; and is about searching algorithms

---

A search algorithm is the step-by-step procedure used to locate specific data among a collection of data.

---

### Resources :blue_book: :orange_book: :green_book:
Read or watch:
- [Search Algotithm](https://en.wikipedia.org/wiki/Search_algorithm)
- [Space Complexity](https://www.geeksforgeeks.org/g-fact-86/)

---

### Tasks :white_check_mark:

The below tasks which ask to write a function follow the next instructions:
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- Every time you compare a value in the array to the value you are searching, you have to print this value

#### 0. Linear search
Write a function that searches for a value in an array of integers using the Linear search algorithm
- Prototype : `int linear_search(int *array, size_t size, int value);`

#### 1. Binary search
Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
- Prototype : `int binary_search(int *array, size_t size, int value);`
- You can assume that `array` will be sorted in ascending order
- You can assume that `value` won’t appear more than once in `array`
- You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray)

#### 2. Big O #0
What is the `time complexity` (worst case) of a linear search in an array of size `n`?

#### 3. Big O #1
What is the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`?

#### 4. Big O #2
What is the `time complexity` (worst case) of a binary search in an array of size `n`?

#### 5. Big O #3
What is the `space complexity` (worst case) of a binary search in an array of size `n`?

#### 6. Big O #4
What is the space complexity of this function / algorithm?
```c
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
          for (size_t i = 0; i < n; i++)
	       {
	                 map[i] = malloc(sizeof(int) * m);
}
     return (map);
}
```

---

## Author :bust_in_silhouette:
- [Adrian Vides] | [Twitter] | [GitHub]



---

[GitHub]: <https://github.com/AdrianVides56>
[Twitter]: <https://twitter.com/termi56661>
[Adrian Vides]: <https://www.linkedin.com/in/adrian-felipe-vides-jimenez-a201401b7>
