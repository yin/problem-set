#ifndef _DOUBLE_BACKED_SET_H_
#define _DOUBLE_BACKED_SET_H_

#include "set.h"

class DoubleBackedSet : public SetOfInts {
    int *list;
    int *map;
    int size;

public:
    DoubleBackedSet(int max);

    bool has(int item);

    void add(int item);

    void remove(int item);

    int count();

    void clear();
};

/* O(1) */
DoubleBackedSet::DoubleBackedSet(int max) : SetOfInts(max) {
    this->list = new int[max];
    this->map = new int[max];
    this->size = 0;
}

/* O(1) */
bool DoubleBackedSet::has(int item) {
    if (item > this->max) return false;
    if (this->map[item] > -1 && this->map[item] < this->size && this->list[this->map[item]] == item) {
        return true;
    } else return false;
}

/* O(1) */
void DoubleBackedSet::add(int item) {
    if (!this->has(item)) {
        this->map[item] = this->size;
        this->list[this->size++] = item;
    }
}

/* O(1) */
void DoubleBackedSet::remove(int item) {
    if (this->has(item)) {
        this->list[this->map[item]] = this->list[--this->size];
        this->map[item] = -1;
    }
}

/* O(1) */
int DoubleBackedSet::count() {
    return this->size;
}

/* O(1) */
void DoubleBackedSet::clear() {
    this->size = 0;
}

#endif
