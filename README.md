
![alt text](https://sun9-58.userapi.com/impg/6ClzdLjoZbkHyqRhBxkHmyIkLXyQiUpVxQrqUA/UXONW81DT6E.jpg?size=673x212&quality=96&sign=c809a8e07506961d9fd0c4bf7a06ab29&type=album)

## Main purpose:

#### A simple and convenient module for quick sorting of lists using one of the presented sorting methods.

## Main functions:

* [bubblesort](https://en.wikipedia.org/wiki/Bubble_sort)

#### Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. The algorithm, which is a comparison sort, is named for the way smaller or larger elements "bubble" to the top of the list.

* [insertionsort](https://en.wikipedia.org/wiki/Insertion_sort)

#### Insertion sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. Insertion sort iterates, consuming one input element each repetition, and grows a sorted output list. At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list, and inserts it there. It repeats until no input elements remain.

* [choicesort](https://ru.wikipedia.org/wiki/%D0%A1%D0%BE%D1%80%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%BA%D0%B0_%D0%BF%D0%BE%D0%B4%D1%81%D1%87%D1%91%D1%82%D0%BE%D0%BC#:~:text=%D0%A1%D0%BE%D1%80%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%BA%D0%B0%20%D0%BF%D0%BE%D0%B4%D1%81%D1%87%D1%91%D1%82%D0%BE%D0%BC%20(%D0%B0%D0%BD%D0%B3%D0%BB.,%D1%81%D0%BF%D0%B8%D1%81%D0%BA%D0%B0)%20%D0%B4%D0%BB%D1%8F%20%D0%BF%D0%BE%D0%B4%D1%81%D1%87%D1%91%D1%82%D0%B0%20%D1%81%D0%BE%D0%B2%D0%BF%D0%B0%D0%B4%D0%B0%D1%8E%D1%89%D0%B8%D1%85%20%D1%8D%D0%BB%D0%B5%D0%BC%D0%B5%D0%BD%D1%82%D0%BE%D0%B2.)

#### Count sorting creates an ordered sequence of items in free memory. The idea of the method is as follows: in the sorted sequence, the element occupying the position with the number K + 1 exceeds exactly K elements, therefore, in the process of sorting by the counting method, at each i-th pass, we compare the i-th element in pairs with all elements of the array.

* [shellsort](https://ru.wikipedia.org/wiki/%D0%A1%D0%BE%D1%80%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%BA%D0%B0_%D0%A8%D0%B5%D0%BB%D0%BB%D0%B0)

#### Sorting algorithm, which is an improved insertion sorting algorithm. The idea of the Schell method is to compare elements that are not only next to each other, but also at a specified distance from each other.

## How to use it?

#### Install all files then simply open CMD and write consistently
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
## Authors:

#### Yuliya Volkova | ysdv99@gmail.com
#### Artem Smirnov | nice.artem123@list.ru
