#include <iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> nums, int n, int m ,  int mid){
    int st =1, pages=0;
    for(int i=0; i<n; i++){
  if(nums[i] > mid){
    return false;
  }
  if(pages + nums[i] <= mid){
    pages += nums[i];
  } else{
    st++;
    pages = nums[i];
  }
    }
    return st > m ?  false : true;
}

int allocateBooks(vector<int> nums, int n, int m){ //0(logN +n)
    int sum=0;
    for(int i=0; i<nums.size(); i++){
        sum += nums[i];
    }
    int s=0, e=sum;
     int ans =-1;
    while(s<=e){  
        int mid = s+(e-s)/2;
        
        if(isValid(nums,n,m,mid)){
            ans = mid;
            e = mid-1;
        }else{
            s= mid+1;
        }
    }
    return ans;
}

int main() {
  vector<int> nums = {2, 1, 3, 4};
  int n=4, m=2;

  cout<<allocateBooks(nums, n, m);
return 0;
}