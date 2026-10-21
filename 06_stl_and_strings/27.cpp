#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>

using namespace std;

int main() {
//  vector<int> vec = {1, 2, 3, 4, 5}; //empty array
//  vec.push_back(1);
//  vec.push_back(2);
//  vec.push_back(3);
//  vec.emplace_back(3);
//  vec.pop_back();
//  cout<<vec.at(2)<<endl;

//  cout<<vec.size()<<endl; 
//  cout<<vec.capacity()<<endl; 
//  cout<<vec.front()<<endl;
//  cout<<vec.back()<<endl;

//  vec.erase(vec.begin());
//  vec.erase(vec.begin()+2, vec.begin()+3);;
//  for(int val : vec){
//     cout<<val<<" ";
//  }
//  cout<<endl;

//  cout<<"vec.begin() : "<<*(vec.begin())<<endl;

// vector<int>::iterator it;
//  for( it=vec.begin(); it != vec.end(); it++){
//     cout<<*(it)<<" ";
//  }
// cout<<endl;

// list<int> l = {1, 2, 3, 4, 5};
// // l.push_back(1);
// // l.emplace_back(3);
// // l.push_front(2);
// // l.pop_back();
// // l.pop_front();

// for(int val : l){
//     cout<<val<<" ";
// }

// deque<int> d

//   pair<int, int> p = {1, 2}; 
//   cout<<p.first<<endl;
//   cout<<p.second<<endl;
//   pair<int, pair<int, int>> p2 = {1, {2, 3}};

//   cout<<p2.first<<endl;
//   cout<<p2.second.first<<endl;
//   cout<<p2.second.second<<endl;

// vector<pair<int, int>> vec = {{2, 3}, {4, 5}};
// vec.push_back({1, 2});
// vec.emplace_back({1, 2});

// stack<int> s ;
// s.push(4);
// s.push(5);

// stack<int> s2;

// s2.swap(s);

// while(!s2.empty()){
//     cout<<s2.top()<<endl;
//     s2.pop();
// }

// cout<<"top = "<<s.top()<<endl;

// while(!s.empty()){
//     cout<<s.top()<<" ";
//     s.pop();
// }


// queue<int> q;
// q.push(1);
// q.push(2);

// while(! q.empty()){
//     cout<<q.front()<<" ";
//     q.pop();
// }

// priority_queue<int> q;
// q.push(1);
// q.push(10);
// q.push(19);
// q.push(2);

// while(! q.empty()){
//     cout<<q.top()<<" ";
//     q.pop();
// }

// priority_queue<int, vector<int>, greater<int>> q;
// q.push(1);
// q.push(10);
// q.push(19);
// q.push(2);

// while(! q.empty()){
//     cout<<q.top()<<" ";
//     q.pop();
// }

// map<string, int> m;

// m["laptop"] = 100;
// m["tv"] = 100;
// m["headphones"] = 20;
// m["wire"] = 90;

// m.insert({"camera", 25});
// m.emplace("camera", 25);

// for(auto p : m){
//     cout<<p.first<<" "<<p.second<<endl;
// }

// cout<<"count "<<m.count("laptop")<<endl; // returns the no. of keys of laptop
// cout<<"count "<<m["laptop"]<<endl; // returns the value of laptop

// if(m.find("tv") != m.end()){
//     cout<<"found\n";
// }else{
//     cout<<"not found\n";
// } 

// m.erase("tv");

// multimap<string, int> m;

// m.emplace("tv", 100);
// m.emplace("tv", 100);
// m.emplace("tv", 100);
// m.emplace("tv", 100);

// for(auto p : m){
//     cout<<p.first<<" "<<p.second<<endl;
// }

// m.erase(m.find("tv"));

// set<int> s;

// s.insert(1);
// s.insert(2);
// s.insert(3);
// s.insert(4);
// s.insert(5);
// // s.insert(4);  duplicates are written only once
// // s.insert(5);

// cout<<s.size()<<endl;

//   for(auto val : s){
//     cout<<val<<" ";
//   }
//   cout<<endl;

multiset<int> s;
s.insert







 return 0;
 }