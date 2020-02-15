#ifndef _LIST_BACKED_SET_H_
#define _LIST_BACKED_SET_H_

#include "set.h"

class ListBackedSet : public SetOfInts {
    int *list;
    int size;

public:
    ListBackedSet(int len);

    bool has(int item);

    void add(int item);

    void remove(int item);

    int count();

    void clear();
};

/* O(1) */
ListBackedSet::ListBackedSet(int max) : SetOfInts(max) {
    this->list = new int[max];
    this->size = 0;
}

/* O(N) */
bool ListBackedSet::has(int item) {
    for (int i = 0; i < this->size; i++) {
        if (this->list[i] == item) return true;
    }
    return false;
}

/* O(N) */
void ListBackedSet::add(int item) {
    if (!this->has(item)) {
        this->list[this->size++] = item;
    }
}

/* O(N) */
void ListBackedSet::remove(int item) {
    for (int i = 0; i < this->size; i++) {
        if (this->list[i] == item)
            this->list[i] == this->list[--this->size];
    }
}

/* O(1) */
int ListBackedSet::count() {
    return this->size;
}

/* O(1) */
void ListBackedSet::clear() {
    this->size = 0;
}

#endif
