//
//  mystack.hpp
//  cmpt225lab3
//
//  Created by Kevin Zhang on 2016-01-27.
//  Copyright © 2016 Kevin Zhang. All rights reserved.
//

#ifndef _MYSTACK_
#define _MYSTACK_

template <class T>
class MyStack
{
public:
  // Default constructor
  // PRE:
  // POST: creates empty stack of size 10
  MyStack();
  
  // Constructor(int)
  // PRE:
  // PARAM: n - size of stack to be created
  // POST: creates empty stack of size n
  MyStack(int n);
  
  // Destructor
  ~MyStack();
  
  // Insert method
  // PRE: stack is not full
  // PARAM: x - value to be inserted
  // POST: inserts x at the top of the stack
  void Push(T x);
  
  // Remove method
  // PRE: stack is not empty
  // POST: removes and returns the value at the top of the stack
  T Pop();
  
private:
  T* arr;
  int size;
  int top;
};

#include "mystack.cpp"
#endif
