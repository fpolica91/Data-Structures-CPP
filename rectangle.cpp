#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle{
	int length;
	int width;
};


void rectangle(){
  struct Rectangle r = {10,5};
  cout<<r.length<<endl;
  cout<<r.width<<endl;

  struct Rectangle *p=&r;
  cout<< p -> length<<endl;
  cout<< p -> width<<endl;

  // creating struct in heap i C
  
  struct Rectangle *x;
  // malloc returns void pointer, need to typecast
  x=(struct Rectangle *)malloc(sizeof(struct Rectangle));
  x -> length=15;
  x -> width =7;

    cout<< x -> length<<endl;
    cout<< x -> width<<endl;

}