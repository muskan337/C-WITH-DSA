// #include <iostream>
// using namespace std;

// int main() {
//  long x= 2;
//  int n = 8;
//  long binForm = n;
//  double ans = 1;\

//  if(n == 0){
//     return 1.0;
//  }
 
//  if(x == 0){
//     return 0.0;
//  }

//  if(x == 1){
//     return 1.0;
//  }

// if(x == -1 && n%2 == 0){
//     return 1.0;
// }

// if(x == -1 && n%2 != 0){
//     return 1.0;
// }

//  if(n<0){
//     x = 1/x;
//     binForm = -binForm;
//  }
//  while(binForm > 0){
//     if(binForm % 2 ==0){
//   ans *= x;
//     }
//     x = x*x;
//     binForm /= 2;
//  }
//  cout<<ans;
// return 0;
// }

#include <iostream>
using namespace std;

int main() {
 int arr[] = {7, 1, 5, 3, 6, 4};
 int n = 6;
 int bestBuy = arr[0];
 int maxProfit = 0;
for(int i=1; i<n;i++){
    bestBuy = min(bestBuy, arr[i]);

    if(arr[i] > bestBuy){
        maxProfit = max(maxProfit, arr[i]- bestBuy);
    }
}
 cout<<maxProfit;
return 0;
}