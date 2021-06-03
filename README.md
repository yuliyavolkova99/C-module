
![alt text](https://sun9-58.userapi.com/impg/6ClzdLjoZbkHyqRhBxkHmyIkLXyQiUpVxQrqUA/UXONW81DT6E.jpg?size=673x212&quality=96&sign=c809a8e07506961d9fd0c4bf7a06ab29&type=album)

## Main purpose:

###### A simple and convenient module for quick sorting of lists using one of the presented sorting methods.

## Main functions:

* [bubblesort](https://en.wikipedia.org/wiki/Bubble_sort)

###### Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. The algorithm, which is a comparison sort, is named for the way smaller or larger elements "bubble" to the top of the list.

![alt text](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif)

* [insertionsort](https://en.wikipedia.org/wiki/Insertion_sort)

###### Insertion sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. Insertion sort iterates, consuming one input element each repetition, and grows a sorted output list. At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list, and inserts it there. It repeats until no input elements remain.

![alt text](https://upload.wikimedia.org/wikipedia/commons/4/42/Insertion_sort.gif)

* [choicesort](https://en.wikipedia.org/wiki/Selection_sort)

###### Selection sort is noted for its simplicity and has performance advantages over more complicated algorithms in certain situations, particularly where auxiliary memory is limited.The algorithm divides the input list into two parts: a sorted sublist of items which is built up from left to right at the front (left) of the list and a sublist of the remaining unsorted items that occupy the rest of the list. Initially, the sorted sublist is empty and the unsorted sublist is the entire input list. The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the unsorted sublist, exchanging (swapping) it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.

![alt text](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)

* [shellsort](https://ru.wikipedia.org/wiki/%D0%A1%D0%BE%D1%80%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%BA%D0%B0_%D0%A8%D0%B5%D0%BB%D0%BB%D0%B0)

###### Sorting algorithm, which is an improved insertion sorting algorithm. The idea of the Schell method is to compare elements that are not only next to each other, but also at a specified distance from each other.

![alt text](https://upload.wikimedia.org/wikipedia/commons/d/d8/Sorting_shellsort_anim.gif)

# How to use it?

###### Install all files then simply open CMD and write consistently
```
python setup.py build

python setup.py install

python

import sortP

sortP.bubblesort([100,34,56])
sortP.insertionsort([100,34,56])
sortP.choicesort([100,34,56])
sortP.shellsort([100,34,56])
```
