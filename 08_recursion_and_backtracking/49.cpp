#include <iostream>
#include <vector>
using namespace std;

    void getAllComb(vector<int> & can, int idx, int tar,  vector<int> &comb, vector<vector<int>> &ans){
       if(tar == 0){
        ans.push_back(comb);
        return;
       }
       if(i == n || target <0){
        return;
       }

        comb.push_back(can[idx]);
        getAllComb(can, idx+1, tar-can[idx], comb, ans);
        getAllComb(can, idx, tar-can[idx], comb, ans);
        comb.pop_back();
        getAllComb(can, idx+1, tar, comb, ans);

       
    }

   vector<vector<int> combinationSum(vector<int> &can, int tar){
    vector<int> comb;
    vector<vector<int>> ans;

  getAllComb(can, 0, tar, camb, ans);

  return ans;

}

int main() {
vector<int> can = {2, 3, 5};
int tar = 8;

  vector<vector<int>> ans = combinationSum(can, tar, comb);
  for(int i=0; i<ans.length(); i++){
    cout<<ans[i]<<endl;
  }
    
return 0;
}