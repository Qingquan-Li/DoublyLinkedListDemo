#include "DoublyLinkedList.h"
#include <iostream>

using namespace std;

// Function Prototypes
void insertFrontItem(DoublyLinkedList<int>& list);
void insertBackItem(DoublyLinkedList<int>& list);
void deleteItem(DoublyLinkedList<int>& list);
void findItem(DoublyLinkedList<int>& list);

int main()
{
    DoublyLinkedList<int> list;

    int choice;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Insert at front\n";
        cout << "2. Insert at back\n";
        cout << "3. Delete item\n";
        cout << "4. Search item\n";
        cout << "5. Show forward\n";
        cout << "6. Show backward\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                insertFrontItem(list);
                break;
            case 2:
                insertBackItem(list);
                break;
            case 3:
                deleteItem(list);
                break;
            case 4:
                findItem(list);
                break;
            case 5:
                for (auto it = list.begin(); it != list.end(); ++it)
                    cout << *it << " ";
                cout << endl;
                break;
            case 6:
                for (auto it = list.rbegin(); it != list.rend(); --it)
                    cout << *it << " ";
                cout << endl;
                break;
            case 0:
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}

void insertFrontItem(DoublyLinkedList<int>& list)
{
    int item;
    cout << "Enter item to insert at the front: ";
    cin >> item;
    list.insertFront(item);
}

void insertBackItem(DoublyLinkedList<int>& list)
{
    int item;
    cout << "Enter item to insert at the back: ";
    cin >> item;
    list.insertBack(item);
}

void deleteItem(DoublyLinkedList<int>& list)
{
    int item;
    cout << "Enter item to delete: ";
    cin >> item;
    if (list.searchItem(item))
    {
        list.deleteItem(item);
        cout << "Item deleted." << endl;
    }
    else
        cout << "Item not found in the list." << endl;
}

/**
 * Find a number in the list
 */
void findItem(DoublyLinkedList<int>& list)
{
    int item;
    cout << "Search the list for a given item: ";
    cin >> item;
    if (list.searchItem(item))
        cout << "Item found in the list." << endl;
    else
        cout << "Item not found in the list." << endl;
}