#ifndef STACK_H__
#define STACK_H__

typedef unsigned long Item;

class Stack
{
private:
    enum
    {
        MAX = 12
    };
    Item items[MAX];
    int top;

public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    bool pop(Item &item);
};

#endif