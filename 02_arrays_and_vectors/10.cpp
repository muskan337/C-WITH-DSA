#include <iostream>
using namespace std;

 int maxSub(int arr[]){
 int n = 5;
 for(int st=0; st<n; st++){
    for(int end=st; end<n; end++){
        for(int i=st; i<=end; i++){

            cout<<arr[i];
        }
        cout<<" ";
    }
    cout<<endl;
 }
 }

 int main() {
    int arr[] = {1, 2, 3, 4, 5};
 cout<<maxSub(arr)<<endl;
return 0;
}

// #include <iostream>
// using namespace std;

// int maxSubSum(int nums[]){
//     int n = 7;

//     int MAX = INT_MIN;
//     for(int st=0; st<n; st++){
//         int currentSum = 0;
//         for(int end=st; end<n; end++){
//              currentSum += nums[end];
//              MAX = max(currentSum, MAX);
//         }
//     }
//     return MAX;
// }

// int main() {
//   int nums[] = {3, -4, 5, 4, -1, 7, -8};
//   cout<<maxSubSum(nums)<<endl;
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int nums[] = {3, -4, 5, 4, -1, 7, -8};
//     int n = 7;
//     int cs = 0;
//     int largest = INT_MIN;
//     for(int i=0; i<n; i++){
//        cs += nums[i];
//        largest = max(cs, largest);
////        if(cs<0){
//         cs=0;
//        }
//     }
//     cout<<largest;
//     return 0;
// }