#include <iostream>
#include <stdio.h>
using namespace std;


void swap(int a, int b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}

 int func_example(){
   int num1 = 10;
   int num2 = 15;
   int sum;

    // pass by value
   swap(num1, num2);
   cout<<sum<<endl;
   return 0;
 }