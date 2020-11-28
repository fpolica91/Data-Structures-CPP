#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
};



void fun(struct Rectangle r){
  cout<<"length "<<r.length<<endl;
  cout<<"breadth "<<r.breadth<<endl;

}

void fun_by_address(struct Rectangle *p){
  p ->length =20;
  cout<<"new length "<<p ->length <<endl;
}

int structure()
{
  struct Rectangle r ={10,5};
  fun(r);
  fun_by_address(&r);
  return 0;
}