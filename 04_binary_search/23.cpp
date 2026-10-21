#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int> arr, int n, int C, int mid){
    int cows =1;
    int pos = arr[0];
    for(int i =1; i<n; i++){
        if(arr[i]-pos >= mid){
            cows++;
        pos = arr[i];    
        }
         if(cows == C){
   return true;
   }
    }
  return false;
}

int largestMinDis(vector<int> arr, int C){ 
    sort(arr.begin(), arr.end());  //O(logN)
    int n =  arr.size();
    int ans = -1;
    int st = 1, end = arr[n-1]-arr[0];
    while(st <= end){   //0(log{range} *N)
        int mid = st+(end-st)/2;
        if(isValid(arr, n, C, mid)){   // 0(logN), right
            ans =  mid;
            st = mid+1;
        }else{  //left 
            end = mid -1;}
    }
    return ans;
}

int main() {
 vector<int> arr = {1, 3, 8, 4, 9};
 int C= 3;

 cout<<largestMinDis(arr, C);
return 0;
}