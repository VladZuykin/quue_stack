#include <iostream>
#include "queue_stack.h"

using namespace std;

int main()
{

        Stack<int> stack = Stack<int>();
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);
    stack.Push(4);


//    cout << stack;

//    cin >> stack;

    Stack<int> stack1(stack);
    stack1.Pop();
    stack1.Pop();

    stack.Pop();
    stack.Push(5);
    stack.Push(6);

    stack1.Push(7);

    cout << endl << stack << " " << stack1 << endl;

    stack1 = stack;
    stack1.Pop();
    stack1.Push(100);
    cout << stack1;

//    cin >> stack1;
//    stack = Queue<int>();


//    cout << stack.GetFront() << endl << stack.GetFront() << endl;
//    cout << stack.Size();


//    Queue<int> queue = Queue<int>(), queue1;

//    cin >> queue;

//    cout << endl << queue << endl;

//    queue.Pop();
//    cout <<  queue << " " << queue.IsEmpty() << " " << queue.Size();
//    Stack<int> stack = Stack<int>(), stack1;
//    stack.Push(5);
//    cout << stack;
//
////    cin >> stack;
//
////    cout << endl << stack << " " << stack1 << endl;
//
////    cin >> stack1;
////    stack = Stack<int>();
//
//
////    cout << stack.GetFront() << endl << stack.GetFront() << endl;
////    cout << stack.Size();
//
//
//    Queue<int> queue = Queue<int>(), queue1;
//
//    cin >> queue;
//
//    cout << endl << queue << endl;
//
//    queue.Pop();
//    cout <<  queue << " " << queue.IsEmpty() << " " << queue.Size();

    return 0;
}
