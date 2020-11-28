#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
};


struct Rectangle *fun(){
  struct Rectangle *p;
  p = new Rectangle;
  p->length = 25;
  p->breadth = 20;

  return p;
}


int created(){
  struct Rectangle *ptr = fun();
  cout<<"length of rectangle "<<ptr->length<<endl;
  return 0;
}