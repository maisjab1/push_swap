*This activity has been created as part of the 42 curriculum by nibrahee, mjabarin.*

# Push_Swap

## Description
**push swap** is a soring algorithm project from **42 school**.
The goal is to sort a stack of integers using a limited set of operations, while producing the smallest possible number of moves.

You sre given a list of integers as arguments, and you must sort them using two stacks:
* Stack A
* Stack B

Only specific operations are allowed.

### Allowed Operations

| Operation | Description                                 |
| :---      | :---                                        |
| `sa`      | swap the first 2 elements of stack A        |
| `sb`      | swap the first 2 elements of stack B        |
| `ss`      | `sa` and `sb` at the same time              |
| `pa`      | push the top element of B to A              |
| `pb`      | push the top element of A to B              |
| `ra`      | rotate stack A (first element becomes last) |
| `rb`      | rotate stack B (first element becomes last) |
| `rr`      | `ra` and `rb` at the same time              |
| `rra`     | reverse rotate stack A                      |
| `rrb`     | reverse rotate stack B                      |
| `rrr`     | `rra` and `rrb` at the same time            |

### Objectives

* Sort stack A in ascending order.
* Use only the allowed operations.
* Use the minimum number of operations.
* Handle:
  * Negative numbers.
  * Duplicates (must return Error).
  * Invalid input (must return Error).
  * Already sorted input (no operations done).
### Alogrithms

The program uses 3 algorithms to sort the input:
* **Simple strategy** : Selection sort, takes $`O(n^2)`$ time complexity.
* **Medium strategy** : Chunk_Based sort, takes $`O(n \sqrt{n})`$ time complexity.
* **Complex strategy** : Radix sort, takes $`O(n \log n)`$ time complexity.

## Instructions

1. ### Compilation

Clone the repository and run `make`:

```bash

git clone https://github.com/noormigdady/push_swap.git
cd push_swap
make

```
2. ## Execution

Pass a list of integers as arguments. The program will output the shortest list of instructions to sort them.

```bash

./push_swap 4 67 3 1 9

```
3. ## Visualizing(Optional)

If you want to see the magic happen, you can pipe the output into a checker (if provided) or a third-party visualizer:

```bash

ARG="4 67 3 1 9"; ./push_swap $ARG | ./checker_os $ARG

```

## Resourses
* [Selection sort](https://www.geeksforgeeks.org/dsa/selection-sort-algorithm-2/)
* [To get least amount of operations](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)
* [Radix sort](https://notes.devnyxie.com/0-Notes/c/push_swap)
* [Chunk sort](https://satyadeepmaheshwari.medium.com/sorting-large-datasets-with-limited-memory-the-chunked-merge-sort-approach-318275275c81)
* push swap 42 documentation

### Ai usege
+ clarifying theoretical concepts.
+ reviewing code structure and logic.
+ improving documentation clarity.

## Group project contributions
- nibrahee: stack implementation, operations, selections sort, chunk sort and norminette.
- mjabarin: input validation, bench and flags, radix sort, indexing and makefile.
