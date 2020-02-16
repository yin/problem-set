#ifndef _SET_OF_INTS_H_
#define _SET_OF_INTS_H_

class SetOfInts {
protected:
    int max;
public:
    SetOfInts(int max);

    virtual bool has(int item) = 0;

    virtual void add(int item) = 0;

    virtual void remove(int item) = 0;

    virtual int count() = 0;

    virtual void clear() = 0;
};

SetOfInts::SetOfInts(int max) {
    this->max = max;
}

#endif
