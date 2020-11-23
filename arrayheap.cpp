#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void arrayheap(){
  int *p;
  p=(int *)malloc(5 * sizeof(int));
  p[0] = 1; p[1] = 15; p[2] =20; p[3] =34; p[4] = 60;
  for(int i =0; i < 5; i++)
    cout<<p[i]<<endl;
  
  // equivalent of malloc in c++
  int *x;
  x = new int[2];
  x[0] =40; x[1] =34;
   for(int i =0; i < 2; i++)
    cout<<x[i]<<endl;
}