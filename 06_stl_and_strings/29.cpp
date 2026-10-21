#include <iostream>
#include <string>
using namespace std;

int main() {
//  char str[] = {'a', 'b', 'c', 'd', '\0'};
//  int arr[] = {1, 2, 3, 4}; 
//  cout<<str<<endl;

// char str[100];

// cout<<"enter string";
// // cin>>str;
// cin.getline(str, 100, '$');

// for(char ch : str){
//     cout<<ch<<" ";
// }

// cout<<"output : "<< str<<endl;

// char str[] = "apna college";
// int len = 0;

// for(int i=0; i<str[i] != '\0'; i++){
//     len++;
// }
// cout<<"length is : "<<len<<endl;

// string str = "apna college";
// // cout<<str<<endl;

// str = "hello";
// cout<<str<<endl;

// string str1 = "muskan";
// string str2 = "jain";

// string str3 = str1+str2;
// cout<<str3<<endl; 

// string str;
// // cin>>str;     
// getline(cin, str);

// cout<<str;

// char str[] = "hello";
// int n= 6;
// int st=0, end=n-1;
// while(st<end){
//     swap(str[st++], str[end--]);
// }
// for(int i=0; i<n; i++){
//     cout<<str[i]<<" ";
// }

 string str = "me is a good person";
 reverse(str.begin(), str.end());
 cout<<str;
 
return 0;
}