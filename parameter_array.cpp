#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int* fun(int n)
{
  int *p;
  p=(int*)malloc(n * sizeof(int));
  for(int i = 0; i <n; i++){
    p[i] = i+1;
  }
  return p;
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

  int *ptr;
  int size = 7;
  ptr = fun(size);
  for(int i=0; i <size; i++)
  cout<<ptr[i]<<" created array"<<endl;
  return 0;
}