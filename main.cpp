#include <iostream>
#include "set_list_backed.h"
#include "set_map_backed.h"
#include "set_double_backed.h"

#define MAX 10

using namespace std;

void test(SetOfInts*);

int main() {
    ListBackedSet *listSet = new ListBackedSet(MAX);
    MapBackedSet *mapSet = new MapBackedSet(MAX);
    DoubleBackedSet *doubleSet = new DoubleBackedSet(MAX);
    cout << "Testing list backed Set" << endl;
    test(listSet);
    cout << "Testing map backed Set" << endl;
    test(mapSet);
    cout << "Testing double backed Set" << endl;
    test(doubleSet);
    delete listSet;
    delete mapSet;
    delete doubleSet;
    return 0;
}

void test(SetOfInts *list) {
    list->add(0);
    list->add(1);
    list->add(2);
    list->add(3);
    list->add(4);
    list->remove(2);
    cout << "count: " << list->count() << endl;
    cout << "has(2): " << list->has(2) << endl;
    cout << "has(3): " << list->has(3) << endl;
    list->clear();
    cout << "count after clearing: " << list->count() << endl;
}
