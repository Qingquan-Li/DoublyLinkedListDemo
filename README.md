# Doubly Linked List Demo 

## Requirements

Design and implement a class representing an unsorted doubly linked list. The class must have the following requirements:
1. The linked list and the nodes must be implemented as  C++ templates
2. It must include a constructor, a destructor, a copy constructor and an operator=
3. It must include functions to delete a given item, search for a given item, check if the list is empty, return the length of the list 
4. It must include functions to insert at the front and at the back of the list
5. It must provide an iterator to access items from front to back
6. It must provide an iterator to access items from back to front

Write a menu-driven program to test all the functions in your class.

## Run the code

```bash
# Compile
$ g++ -std=c++11 main.cpp -o DoublyLinkedListDemo
# Run
$ ./DoublyLinkedListDemo

Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 1
Enter item to insert at the front: 100

Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 3
Enter item to delete: 100
Item deleted.

Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 3
List is empty. Nothing to delete!

Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 4
List is empty. Nothing to search for!

Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 5
Length of the list: 0


Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 6
Length of the list: 0


Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 1
Enter item to insert at the front: 200

Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 1
Enter item to insert at the front: 100

Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 2
Enter item to insert at the back: 300

Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 4
Search the list for a given item: 300
Item found in the list.

Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 400
Invalid choice!

Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 4
Search the list for a given item: 400
Item not found in the list.

Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 5
Length of the list: 3
100 200 300 

Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 6
Length of the list: 3
300 200 100 

Menu:
1. Insert at front
2. Insert at back
3. Delete item
4. Search item
5. Show forward
6. Show backward
0. Exit
Enter choice: 0
```
