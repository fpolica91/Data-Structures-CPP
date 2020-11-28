#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void swap(int &a, int &b){
  int temp;
  temp = a;
  a = b;
  b = temp;

}

int by_reference(){
  int x = 10;
  int y = 20;

  swap(x, y);
  cout<<x<<endl;
  cout<<y<<endl;
  return 0;
}