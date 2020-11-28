//pass by address the actual parameters will be changed.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void swap(int *x, int *y){
  // accessing indirectly using pointers.
  // to pass by reference int &x, int &y instead of *
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
}

void swap_by_reference(int &x, int &y){
  int temp;
  temp = x;
  x = y;
  y = temp;
}



int address(){
	int a = 10;
	int b = 20;
	
	// remember &a is a reference to a.
	
	 swap(&a, &b);
   cout<<a<<endl;
   cout<<b<<endl;

  return 0;
}