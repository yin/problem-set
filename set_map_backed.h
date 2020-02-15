#ifndef _MAP_BACKED_SET_H_
#define _MAP_BACKED_SET_H_

#include "set.h"

class MapBackedSet : public SetOfInts {
    int *map;
    int size;

public:
    MapBackedSet(int len);

    bool has(int item);

    void add(int item);

    void remove(int item);

    int count();

    void clear();
};

/* O(N) */
MapBackedSet::MapBackedSet(int max) : SetOfInts(max) {
    this->map = new int[max];
    for (int i = 0; i < max; i++) {
        this->map[i] = 0;
    }
    this->size = 0;
}

/* O(1) */
bool MapBackedSet::has(int item) {
    if (this->map[item] == 1) return true;
    else return false;
}

/* O(1) */
void MapBackedSet::add(int item) {
    if (!this->has(item)) {
        this->map[item] = 1;
        this->size++;
    }
}

/* O(1) */
void MapBackedSet::remove(int item) {
    if (this->has(item)) {
        this->map[item] = 0;
        this->size--;
    }
}

/* O(1) */
int MapBackedSet::count() {
    return this->size;
}

/* O(N) */
void MapBackedSet::clear() {
    for (int i = 0; i < this->size; i++) {
        this->map[i] = 0;
    }
    this->size = 0;
}

#endif
