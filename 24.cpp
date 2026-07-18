// #include <iostream>
// #include<vector>
// using namespace std;

// int main() {
//  int arr[] = {4, 1, 5, 2, 3};
//  int n = 5;
//  for(int i=0; i<n-1; i++){
//     bool isSwap = false;
//     for(int j=0; j<n-i-1; j++){
//         if(arr[j] > arr[j+1]){
//             swap(arr[j], arr[j+1]);
//             isSwap = true;
//         }
//     }
//         if(!isSwap){
//             break;;
//         }
//  }
//  for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//  }
// return 0;
// }

// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         int minIndex = i;
//         for (int j = i+1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         swap(arr[i], arr[minIndex]);
//     }
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
// int n= 5;
// int arr[]  = {4, 1, 5, 2, 3};

// selectionSort(arr, n);
// printArray(arr, n);
// return 0;
// }

#include <iostream>
using namespace std;

int main() {
 int arr[] = {1, 4, 5, 2, 3};
 int n = 5;
 for(int i =1; i<n; i++){
    prev = i-1;
    curr = i;
    while(arr[prev] >= 0 && arr[prev] > arr[curr] ){
        arr[prev+1] = arr[prev];
        prev--;
    }
    arr[prev+1] = arr[curr];
 }
return 0;
}