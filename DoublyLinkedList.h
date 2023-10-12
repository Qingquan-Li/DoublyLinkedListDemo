#include <iostream>
using namespace std;

#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

template <class T>
struct node
{
    T info;
    node<T> *next, *prev;
};

template <class T>
class DoublyLinkedList
{
private:
    node<T> *first, *last;
    int length;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    DoublyLinkedList(const DoublyLinkedList<T>& other);
    const DoublyLinkedList<T>& operator=(const DoublyLinkedList<T>& other);

    int getLength() const;
    bool isEmpty() const;

    void insertFront(const T& item);
    void insertBack(const T& item);
    void deleteItem(const T& item);
    bool searchItem(const T& item) const;

    class forwardIterator
    {
    private:
        node<T>* current;

    public:
        forwardIterator(node<T>* start) : current(start) {}

        T operator*() { return current->info; }
        void operator++() { current = current->next; }
        bool operator!=(const forwardIterator& it) { return current != it.current; }
    };

    class backwardIterator
    {
    private:
        node<T>* current;

    public:
        backwardIterator(node<T>* start) : current(start) {}

        T operator*() { return current->info; }
        void operator--() { current = current->prev; }
        bool operator!=(const backwardIterator& it) { return current != it.current; }
    };

    forwardIterator begin() { return forwardIterator(first); }
    forwardIterator end() { return forwardIterator(nullptr); }

    backwardIterator rbegin() { return backwardIterator(last); }
    backwardIterator rend() { return backwardIterator(nullptr); }

    void destroy();
    void copy(const DoublyLinkedList<T>& other);
};

#endif