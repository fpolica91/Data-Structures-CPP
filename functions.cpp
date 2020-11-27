#include <iostream>
#include <stdio.h>
using namespace std;


int add(int a, int b){
  int c;
  c = a + b;
  return c;
}

 void func_example(){
   int num1 = 10;
   int num2 = 15;
   int sum;

   sum = add(num1, num2);
   cout<<sum<<endl;
 }