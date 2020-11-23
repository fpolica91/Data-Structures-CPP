#include <iostream>
#include <stdio.h>
using namespace std;

void reference(){
  int a = 20;
  //does not consume memory conceptually, 
  // uses the same memory 
  int &r = a;
  cout<<a<<endl<<r<<endl;
}