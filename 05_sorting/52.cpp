#include <iostream>
#include <vector>
using namespace std;

 int partition(vector<int> &nums, int st, int end){
     int idx = st-1, pivot = nums[end];

     for(int j=st; j<end; j++){
        if(nums[j] <= pivot){
            idx++;
            swap(nums[j], nums[idx]);
        }
     }
   idx++;
   swap(nums[end], nums[idx]);
   return idx;
 }

void quick(vector<int> &nums, int st, int end){
 if(st<end){
    int pivotIdx = partition(nums, st, end);
    quick(nums, st, pivotIdx-1);
    quick(nums, pivotIdx+1, end);
 }
}

int main() {
// vector<int> nums = {12, 31, 35, 8, 32, 17};
vector<int> nums = {15, 6, 0, 56, 45};

 quick(nums, 0, nums.size()-1);

  for(int val : nums){
    cout<<val<<" ";
  }
  cout<<endl;
return 0;
}