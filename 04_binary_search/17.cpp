// #include <iostream>
// #include<vector>
// using namespace std;

// int binarySearch(vector<int> arr, int n, int tar){
//    int s=0, e=n-1;
//    while(s<=e){
//     int mid = s+(e-s)/2;
//     if(tar> arr[mid]){
//         s = mid+1;
//     }else if(tar < arr[mid]){
//         e = mid-1;
//     }else{
//         return mid;
//     }
//    }
//    return -1;
// }

// int main() {
//  vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
//  int n = arr.size();
//  int tar = 12;
//   int result = binarySearch(arr, n, tar);
//   cout << "Element found at index: " << result << endl;

// return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;

// int binarySearch(vector<int> arr, int n, int tar){
//    int s=0, e=n-1;
//    while(s<=e){
//     int mid = s+(e-s)/2;
//     if(tar> arr[mid]){
//         s = mid+1;
//     }else if(tar < arr[mid]){
//         e = mid-1;
//     }else{
//         return mid;
//     }
//    }
//    return -1;
// }

// int main() {
//  vector<int> arr = {-1, 0, 3, 4, 9, 12};
//  int n = arr.size();
//  int tar = 0;
//   int result = binarySearch(arr, n, tar);
//   cout << "Element found at index: " << result << endl;
// return 0;
// }

#include <iostream>
#include<vector>
using namespace std;

int binarySearchRecurr(vector<int> arr, int n, int s, int e, int tar){
   // int s=0, e=n-1;
   while(s<=e){
    int mid = s+(e-s)/2;
    if(tar> arr[mid]){
       return binarySearchRecurr(arr, n, mid+1, e, tar);
    }else if(tar < arr[mid]){
        return binarySearchRecurr(arr, n, s, mid-1, tar);
    }else{
        return mid;
    }
   }
   return -1;
}

int main() {
 vector<int> arr = {-1, 0, 3, 4, 9, 12};
 int n = arr.size();
 int tar = 0;
  int result = binarySearchRecurr(arr, n, 0, n-1, tar);
  cout << "Element found at index: " << result << endl;
return 0;
}