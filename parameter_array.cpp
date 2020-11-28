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

void funner(int *A, int n){
  for(int i =0;  i < n; i ++){
    A[i] = A[i] + 2;
    cout<<A[i]<< " funner" <<endl;
  }

}

int array_returned(){

  int B[ ] = {2,3,4,5,6,7};
  int n = 6;
  funner(B, n);

  for(int x:B)
  cout<<x<<" end of line"<<endl;

  int *A;
  A = fun(5);
  cout<<A<<endl;
  return 0;
}