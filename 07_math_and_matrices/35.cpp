// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

// int matrix [4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
// int row = 4;
// int column = 3;
// int key = 8;
// vector<pair<int, int>> vec ;

// for(int i=0; i<row; i++){
//     for(int j=0; j<column; j++){
//         if(matrix[i][j] == key ){
//             vec.push_back({i,j});

//         }
//     }
// }
// for(auto p: vec){
//     cout<<p.first<<" "<<p.second<<endl;
// }
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int r = 3, c = 3;
//     int maxRSum = INT_MIN;
//     for(int i=0; i<r; i++){
//         int currSum=0;
//         for(int j=0; j<c; j++){
//             currSum +=  m[i][j];
//         }
//         maxRSum = max(maxRSum, currSum);
//     }
//     cout<<maxRSum<<endl;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<vector<int>> mat = {{1, 2, 3, 7, 8, 9}, {4, 5, 6}};

// cout<<mat[0][0]<<endl;

for(int i=0; i<mat.size(); i++){
  for(int j=0; j<mat[i].size(); j++){
      cout<<mat[i][j]<<" ";
  }
  cout<<endl;
}
return 0;
}