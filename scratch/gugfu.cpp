// #include <iostream>
// #include<string>
// using namespace std;

int main() {
 vector<chars> chars = {"a", "b", "b", "C", "C", "C", "c", "c", "C", "c", "c", "C"};
 vector<string> 
return 0;
}

#include <iostream>
using namespace std;

int decToBin(int num){
    int ans = 0;
    int power = 1;
    while(num > 0){
        int rem = num % 2;
      num /= 2;
      ans += rem*power;
      power *= 10;
    
    }

    return ans;

}

int main() {
int num = 42;

cout<<decToBin(num)<<endl;;

return 0;
}

// #include <iostream>
// using namespace std;

// BinToDec(int num){
//     int power = 1;
//     int ans = 0;
//     while(num > 0){
//         int rem = num%10;
//          num = num/10;
//         ans += power*rem;
//         power *= 2;
//     }
//     return ans;
// }

// int main() {
// int num = 101010;
 
// cout<<BinToDec(num)<<endl;
// return 0;
// }