#include <iostream>
#include <vector>
using namespace std;

  bool isPalin(string s){
    string s2 = s;
    reverse(s2.begin(), s2.end());

    return s==s2;
  }
 
 void getAllPart(string s, vector<string> &partitions , vector<vector<string>> &ans){
      if(s.size() == 0){
        ans.push_back(partitions);
        return;
      }

    for(int i=0; i<s.size(); i++){
        string part = s.substr(0, i+1);
        if(isPalin(part)){
            partitions.push_back(part);
            getAllParts(s.substr(i+1). partitions, ans);
            partitions.pop_back(); 
        }
    }
 }


int  main() {
 string s = "aab";
 vector<vector<string>> ans;
 vector<string> partitions;
    vector<vector<string>> ans = getAllPart( s, partitions , ans);
    for(string val : ans){
        return val;
    }

return 0;
}