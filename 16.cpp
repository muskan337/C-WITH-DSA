#include <iostream>
using namespace std;

int main() {
// int a = 10;
// cout<<&a<<endl;
// int *ptr = &a;
// cout<<&a<<endl;
// int **ptr2 = &ptr;
// cout<<&ptr<<endl;
// cout<<*(&a)<<endl;//10
// cout<<*(ptr)<<endl;  //10
// cout<<*(ptr2)<<endl;  //200

// int *ptr = NULL;
// cout<<ptr<<endl;

int a = 10, b= 5; 
int *ptr = & a;
// ptr = &b;
cout<<ptr<<endl;
ptr++;
cout<<ptr<<endl;
++ptr;
cout<<ptr<<endl;

 //but
//  int arr[] = {1, ,2 , 3, 4, 5};
 
//  int c = 15;
//  arr = &a; //error
return 0;
}