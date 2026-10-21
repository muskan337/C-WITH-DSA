// #include <iostream>
// #include <cmath>
// using namespace std;

// // Define the function whose root you want to find
// double f(double x) {
//     return x * x * x - x - 2;  // example: x^3 - x - 2 = 0
// }

// double bisection(double a, double b, double tol = 1e-6, int maxIter = 100) {
//     if (f(a) * f(b) >= 0) {
//         cout << "Bisection method fails: f(a) and f(b) must have opposite signs.\n";
//         return NAN;
//     }

//     double c = a;
//     for (int i = 0; i < maxIter; i++) {
//         c = (a + b) / 2.0;

//         if (fabs(f(c)) < tol || (b - a) / 2.0 < tol) {
//             cout << "Root found after " << i + 1 << " iterations: " << c << endl;
//             return c;
//         }

//         if (f(c) * f(a) < 0)
//             b = c;
//         else
//             a = c;
//     }

//     cout << "Max iterations reached. Approximate root: " << c << endl;
//     return c;
// }

// int main() {
//     double a = 1, b = 2;  // interval where root lies
//     bisection(a, b);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// double f(double x) {
//     return x * x - 4;  // change this to your equation
// }

// int main() {
//     double a = 0, b = 5;   // interval containing the root
//     double c;

//     while ((b - a) >= 0.0001) {
//         c = (a + b) / 2;

//         if (f(c) == 0.0)
//             break;
//         else if (f(c) * f(a) < 0)
//             b = c;
//         else
//             a = c;
//     }

//     cout << "Root = " << c << endl;
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid,  int end){
    vector<int> temp;
    int i = st,  j = mid+1;
    while(i<= mid && j<= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0; idx< temp.size(); idx++){
        arr[idx+st] = temp[idx];
    }
}

 void mergeSort(vector<int> &arr, int st, int end){
    if(st<end){
        int mid = st+(end-st)/2;
        mergeSort(arr, 0, mid);
        mergeSort(arr, mid+1, end);
         

        merge(arr, st, mid, end);
    }
 }

int main() {
 vector<int> arr = {12, 31, 35,  8, 32, 17};

   mergeSort(arr, 0, arr.size()-1);
   for(int val : arr){
    cout<<val<<" ";
   }
   return 0;
}