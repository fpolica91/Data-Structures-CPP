#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Item{
  int length;
  int width;
};

void types(){
  char *a;
  double *b;
  float *c;
  struct Item *d;

  cout<<sizeof(*a)<<endl;
  cout<<sizeof(*b)<<endl;
  cout<<sizeof(*c)<<endl;
}