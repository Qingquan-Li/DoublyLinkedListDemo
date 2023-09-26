//#include "DoublyLinkedList.h"
#include <iostream>
using namespace std;

template <class T>
DoublyLinkedList<T>::DoublyLinkedList() : first(nullptr), last(nullptr), length(0) {}

template <class T>
DoublyLinkedList<T>::~DoublyLinkedList()
{
    destroy();
}

template <class T>
DoublyLinkedList<T>::DoublyLinkedList(const DoublyLinkedList<T>& other)
{
    copy(other);
}

template <class T>
const DoublyLinkedList<T>& DoublyLinkedList<T>::operator=(const DoublyLinkedList<T>& other)
{
    if (this != &other)
    {
        destroy();
        copy(other);
    }
    return *this;
}

template <class T>
int DoublyLinkedList<T>::getLength() const
{
    return length;
}

template <class T>
bool DoublyLinkedList<T>::isEmpty() const
{
    return length == 0;
}

template <class T>
void DoublyLinkedList<T>::insertFront(const T& item)
{
    node<T>* newNode = new node<T>;
    newNode->info = item;
    newNode->next = first;
    newNode->prev = nullptr;

    if (first)
        first->prev = newNode;
    else
        last = newNode;

    first = newNode;
    ++length;
}

template <class T>
void DoublyLinkedList<T>::insertBack(const T& item)
{
    node<T>* newNode = new node<T>;
    newNode->info = item;
    newNode->next = nullptr;
    newNode->prev = last;

    if (last)
        last->next = newNode;
    else
        first = newNode;

    last = newNode;
    ++length;
}

template <class T>
void DoublyLinkedList<T>::deleteItem(const T& item)
{
    node<T>* current = first;

    while (current && current->info != item)
        current = current->next;

    if (current)
    {
        if (current->prev)
            current->prev->next = current->next;
        else
            first = current->next;

        if (current->next)
            current->next->prev = current->prev;
        else
            last = current->prev;

        delete current;
        --length;
    }
}

template <class T>
bool DoublyLinkedList<T>::searchItem(const T& item) const
{
    for (node<T>* current = first; current; current = current->next)
        if (current->info == item)
            return true;
    return false;
}

template <class T>
void DoublyLinkedList<T>::destroy()
{
    while (first)
    {
        node<T>* current = first;
        first = first->next;
        delete current;
    }
    last = nullptr;
    length = 0;
}

template <class T>
void DoublyLinkedList<T>::copy(const DoublyLinkedList<T>& other)
{
    first = last = nullptr;
    length = 0;

    for (node<T>* current = other.first; current; current = current->next)
        insertBack(current->info);
}