#include <iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> nums, int m, int mid){
    int painters = 1;
    int time = 0;
    for(int i=0; i<nums.size(); i++){
        if(time + nums[i] <= mid){
            time += nums[i];
        }else{
            painters++;
            time = nums[i];
        }
    }
    if(painters > m) {

     return false;
    }
    else{
        return true;
    }

}

int minTime(vector<int> nums , int m){
    int st = INT_MIN;
    int end = 0;
    int ans = -1;
    for(int i=0; i<nums.size(); i++){
        end += nums[i];
        st = max(st, nums[i]);
    }
    while(st <= end){
         int mid = st +(end- st)/2;
         if(isValid(nums, m, mid)){
            ans = mid;
            end = mid-1;
         }else{
            st = mid+1;
         }
    }
    return ans;
}

int main() {
 vector<int> nums = {40, 30, 10, 20};
 int m = 2; //  painters allowed

 cout<<minTime(nums, m);
return 0;
}