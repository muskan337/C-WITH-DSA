#include <iostream>
using namespace std;

bool isValid(vector<int> nums, int m, int mid){
    int painters = 1;
    int time = 0;
    for(int i=0; i<nums.size(); i++){