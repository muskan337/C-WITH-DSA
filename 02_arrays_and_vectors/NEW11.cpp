//  #include <iostream>
//  using namespace std;
 
//  int main() {
//  int height = {1, 8,  6, 2, 5, 4, 8, 3, 7};
//  int area = 0;
//  int n = 9;
//  int length;
//  int maxWater =  0;
//  int width;

//  for(int i=0; i<n; i++){
//    for(int j=i+1; j<n; j++){
//      width = min(height[i], height[j]);
//      length = j-i;
//      area = length*width;
//      maxWater = max(area, maxWater);
//    }

//  }

//  cout<<area<<endl;
//  return 0;
//  }

#include <iostream>
using namespace std;

int main() {
int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
int n = 9;
 int lp = 0;
 int rp = n-1;
 int mw = 0;
 int curr;
 int w, ht;
   while(lp<rp){
    w = rp - lp;
    ht = min(height[lp], height[rp]);
    curr = w*ht;
    mw = max(mw, curr);
    height[lp]< height[rp] ? lp++ : rp--;
   }
   cout<<mw;
 
return 0;
}