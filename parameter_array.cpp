#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int* fun(int n)
{
  int *p;
  p=(int*)malloc(n * sizeof(int));
  return (p);
}

int array_returned(){
  int *A;
  A = fun(5);
  cout<<A<<endl;
  return 0;
}