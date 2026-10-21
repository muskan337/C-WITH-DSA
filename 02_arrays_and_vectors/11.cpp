// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int nums[] = {2, 7, 11, 15};
//     int target = 13;
//     vector<int>vec;
//     int n = 4;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(nums[i] + nums[j] == target){
//                 vec.push_back(i);
//                 vec.push_back(j);
//             }
//         }
//     }
//     for(int i: vec){
//         cout<<i<<endl;
//     }

// return 0;
// }

// #include <iostream>
// #include <vector>

// using namespace std;
// int main() {
// int nums[] = {2, 7, 11, 15};
// int n = 4; 
// int target = 13;
// vector<int> vec;
//  int st=0, end= n-1;

//  while(st<end){    
//      if(nums[st] + nums[end] == target){
//          vec.push_back(st);
//          vec.push_back(end);
//         }else if(nums[st] + nums[end] > target){
//             end--;
//         }else{
//             st++;
//         }
        
//     }

//  for(int i : vec){
//     cout<<i<<endl;
//  }

// return 0;
// }

// MAJORITY ELEMENT
// a. brute force approach

// #include <iostream>
// #include<vector>
// using namespace std;

// int main() {
//  vector<int> nums = {1, 2, 2, 1, 1, 1};
//  int n = nums.size();
//  for(int val : nums){
//     int count = 0;
//     for(int ele : nums){
//          if(ele == val){
//             count++;
//          }
//     }
//     if(count > n/2){
//         cout<<val<<endl;
//     }
//  }
// return 0;
// }

// b. optimize

// #include <iostream>
// #include <vector>
// #include<algorithm>
// using namespace std;

// int main() {
//  vector<int> nums = {1, 2, 2, 1, 1, 1};
//  int n=6;
//  int ans = nums[0];
//  sort(nums.begin(), nums.end());
//  int freq =1;
//  for(int  i=1; i<n; i++){
//         if(nums[i]  == nums[i-1]){
//          freq++;
//         }else{
//          freq = 1;
//          ans = nums[i];
//         }
//         if(freq > n/2){
//       cout<<ans<<endl;
//         }
//  }
// return 0;
// }

// c.Moore's :
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
 vector<int> nums = {1, 2, 2, 1, 1, 1};
 int n=6;
 int ans = 0;
 sort(nums.begin(), nums.end());
 int freq =0;
 for(int  i=0; i<n; i++){
        if(freq == 0){
         ans = nums[i];
        }
        if(ans == nums[i]){
         freq++;
        }else{
         freq--;
        }
 }
 cout<<ans;
return 0;
}
