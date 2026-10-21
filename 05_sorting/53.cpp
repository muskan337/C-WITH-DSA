// #include <iostream>
// #include <vector>
// using namespace std;

//  int countInversions(vector<int> &nums){
//     int n = nums.size();
//     int count = 0;
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             while(i<j){
//                 if(nums[i]> nums[j]){
//                     count++;
//                 }
//             }
//         }
//     }
//     return count;
//  }

// int main() {
//  vector<int> nums = {6,  3, 5, 2, 7};
//  cout<<countInversions(nums)<<endl;
// return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &nums, int st, int mid, int end){
    vector<int> temp;
    int i=st, j=mid+1;
    int InvCount = 0; 
    while(i<= mid && j<= end){
        if(nums[i] <= nums[j]){
            temp.push_back(nums[i]);
            i++;
        }else{
            temp.push_back(nums[j]);
            j++;
            InvCount = (mid-i+1);   
             }
    }
    while(i<= mid){
  temp.push_back(nums[i]);
  i++;
    }
    while(j <= end){
        temp.push_back(nums[j]); 
        j++;
    }
    for(int idx=0; idx< temp.size(); idx++){
        nums[idx+st] = temp[idx];
    }
    return InvCount;
}

int mergeSort(vector<int> &nums, int st, int end){
    if(st<end){
       int mid = st+ (end-st)/2; 

      int leftInvCount = mergeSort(nums, st, mid);
     int rightInvCount = mergeSort(nums, mid+1, end);

    int InvCount = merge(nums, st, mid, end);

    return leftInvCount + rightInvCount + InvCount;
    }
    return 0;
}

int main() {
vector<int> nums = {6, 3, 5, 2, 7};

  int ans = mergeSort(nums, 0, nums.size()-1);
  cout<<ans<<" ";
return 0;
}