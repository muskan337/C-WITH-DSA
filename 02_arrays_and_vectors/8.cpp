#include <iostream>
using namespace std;
 
// void changeArr(int arr[], int size){
//     cout<<"in function : "<<endl;
//      for(int i = 0; i<size; i++){
//        arr[i] = 2*arr[i];
//      }
//    }

// int linearSearch(int arr[], int target, int n){
//      for(int i=0; i<n; i++){
//         if(arr[i] == target){
//             return i;
//         }
//      }
//      return -1;
// }


    
   

//int main() {
// int marks[5] = {97, 98, 99};
// double  price[8] = {101.9, 45.99};
// marks[0] = 101;
// // cout<<marks[0]<<endl;
// // cout<<marks[1]<<endl;
// // cout<<marks[2]<<endl;
// // cout<<marks[3]<<endl;

// int sz = sizeof(marks)/ sizeof(int);    
// // cout<<sz<<endl;

// // for(int i=0; i<sz; i++){
// //   cout<<marks[i]<<endl;
// // }

// int array[6] = {5, 15, 22, 1, -15, 24};
//  int smallest = INT_MAX;
//  int sz = sizeof(array)/ sizeof(int);    
//  for(int i=0; i<sz; i++){
//       if(array[i] < smallest){
//         smallest = array[i];
//       }
//  }
//  cout<<smallest<<endl;

// return 0;
// }

// int array[6] = {5, 15, 22, 1, -15, 24};
// int n = 6;
// int largest = INT_MIN;
// for(int i=0; i<n; i++){
//     if(array[i]> largest){
//      largest = array[i];
//     }
// }
//   cout<<largest<<endl;
  
// int arr[] = {1, 2, 3};

// changeArr(arr, 3);
//  cout<<"in main :\n";
//    int n= 3;
//  for(int i=0; i<n; i++){
//     cout<<arr[i]<<endl;
//  }

// int arr[] = {4, 2,  7, 8, 1, 2, 5};
// int target = 8; 
// int n = 7;
 
// cout<<linearSearch(arr, target, n)<<endl;

//return 0;
//}

void revAnArray(int arr[], int st, int end, int n){
  while(st<=end){
    swap(arr[st], arr[end]);
    st++, end--;
  }

}

int main(){
 int arr[7] = {4, 2, 7, 8, 1, 2, 5 };
 int n = 7;
 revAnArray(arr, 0, n-1, n);
 for(int i=0; i<n; i++){
    cout<<arr[i]<<", ";
 }
}
