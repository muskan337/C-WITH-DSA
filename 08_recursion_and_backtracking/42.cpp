// #include <iostream>
// using namespace std;

// void nums(int n){
//    if(n == 1){
//    cout<<"1\n";
//   return;
//    }
//    cout<<n<< " ";
//   nums(n-1);
// }

// int main() {
//  nums(4);
// return 0;
// }

// #include <iostream>
// using namespace std;

// int factorial(int n){
//     if(n==0){
//         return 1;
//     }

//     return n*factorial(n-1);
// }

// int main() {
//  cout<<factorial(5)<<endl;
// return 0;
// }

// #include <iostream>
// using namespace std;

// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     return fib(n-1)+ fib(n-2);
// }

// int main() {
//   cout<<fib(2)<<endl;
// return 0;
// }

#include <iostream>
using namespace std;

 bool isSorted(vector<int> &nums){
    int n = nums.size();

    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            return true;
        }
    }
    return false;
 }

int main() {

return 0;
}