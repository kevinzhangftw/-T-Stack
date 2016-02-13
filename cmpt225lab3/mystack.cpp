//
//  mystack.cpp
//  cmpt225lab3
//
//  Created by Kevin Zhang on 2016-01-27.
//  Copyright © 2016 Kevin Zhang. All rights reserved.
//
#ifdef _MYSTACK_

//#include "mystack.hpp"
#include <stdexcept>

// Default constructor
// PRE:
// POST: creates empty stack of size 10
template <class T>
MyStack<T>::MyStack()
{
  size = 10;
  top = 0;
  arr = new T[size];
}

// Constructor(int)
// PRE:
// PARAM: n - size of stack to be created
// POST: creates empty stack of size n
template <class T>
MyStack<T>::MyStack(int n)
{
  size = n;
  top = 0;
  arr = new T[size];
}

// Destructor
template <class T>
MyStack<T>::~MyStack(void)
{
  delete[] arr;
}

// Insert method
// PRE: stack is not full
// PARAM: x - value to be inserted
// POST: inserts x at the top of the stack
template <class T>
void MyStack<T>::Push(T x)
{
  if (top == size){
    throw std::runtime_error("stack is full");
  }
  arr[top++] = x;
}

// Remove method
// PRE: stack is not empty
// POST: removes and returns the value at the top of the stack
template <class T>
T MyStack<T>::Pop()
{
  if (top == 0){
    throw std::runtime_error("stack is empty");
  }
  return arr[--top];
}

#endif