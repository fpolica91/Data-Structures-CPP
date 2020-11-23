#include <iostream>
#include <stdio.h>
using namespace std;

void pointer()
{   
    int a = 10;
    int *p;
    // &a how to reference address of, using "&"
    p=&a;
    cout<<"______ pointer function"<<endl;
    printf("%p the address of a \n", &a);
    cout<<*p<<endl;


    //pointer to array
   int A[5] = {2,3,4,5,6};
   int *x;
  //  you dont need & when initializing pointer of array.
   p=A;
   for(int i = 0; i <5; i++)
    // accessing array using address.
    cout<<p[i]<<endl;
    // return void;
}