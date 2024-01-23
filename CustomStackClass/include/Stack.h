#ifndef STACK_H
#define STACK_H


class Stack
{
    public:
        Stack();
        Stack(int);

        void Push(int);
        int Pop();
        int Peek();
        bool IsEmpty();
        int GetLength();

        void PrintStack();

        virtual ~Stack();

    private:
        int *theStack;
        int currentStackSize = 1;

};

#endif // STACK_H
