//
//  main.cpp
//  cmpt225lab3
//
//  Created by Kevin Zhang on 2016-01-27.
//  Copyright © 2016 Kevin Zhang. All rights reserved.
//

#include <iostream>
#include <iostream>
#include <string>
#include "mystack.hpp"

using namespace std;

void StackTest();

int main(int argc, const char * argv[]) {
  StackTest();
    return 0;
}

void StackTest()
{
  MyStack<int> int_st;
  MyStack<string> str_st;
  
  int_st.Push(3);
  int_st.Push(2);
  int_st.Push(1);
  
  str_st.Push("dew");
  str_st.Push("mountain");

  
  cout << int_st.Pop() << " -- ";
  cout << int_st.Pop() << " -- ";
  cout << int_st.Pop() << endl << endl;
  
  cout << str_st.Pop() << " -- ";
  cout << str_st.Pop() << endl << endl;

}
