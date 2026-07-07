// #include <iostream>
// #include<vector>
// using namespace std;

// int main() {
// // vector<int>vec = {1, 2, 3};  
// // // cout<<vec[0];
// // //  vector<int>vec(3, 0);
// // //  cout<<vec[0];
// // //  cout<<vec[1];
// // //  cout<<vec[2];
// // //  cout<<vec[3];
// // //  cout<<vec[4];
// // cout<<"size is : "<<vec.size()<<endl;
// // vector<int>set;
// // set.push_back(24); //vector ke end m 24 puh ho jaayega aur size increse ho jaayega

// vector<int>vec;
// vec.push_back(0);
// vec.push_back(1);
// vec.push_back(2);
// cout<<vec.size()<<endl;
// cout<<vec.capacity()<<endl;
// return 0;
// }

#include <iostream>
#include<vector>  
using namespace std;

int main() {
  vector<int> nums = {4, 1, 2, 1, 2};
  int ans = 0;
  for(int val : nums){
    ans = ans^val;
  }
  cout<<ans<<endl;
return 0;
}