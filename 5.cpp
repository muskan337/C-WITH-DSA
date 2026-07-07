//   #include <iostream>
//   using namespace std;

//   int decTbin(int num){
//     int ans = 0;
//     int dec = 0;
//     int power = 1;
//     while(num>0){
//         int remainder = num%2;
//         num = num/2;
//        ans += remainder * power;
//        power *= 10;
//     }
//     return ans;
//   }
  
//   int main() {
//   cout<<decTbin(42)<<endl;
//   return 0;
//   }

// #include <iostream>
// using namespace std;

// int binToDec(int num){
//     int rem;
//     int ans = 0;
//     int power = 1; // 2^0;
//     while(num>0){
//         int rem = num%10;
//         ans += rem*power;
//         num /= 10;
//         power *= 2;
//     }
//     return ans;
// }

// int main() {
// cout<<binToDec(101010)<<endl;
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// cout<<(4<<1)<<endl; //8
// cout<<(8>>2)<<endl;//2
// return 0;
// }

#include <iostream>
using namespace std;

int main() {
cout<<sizeof(int)<<endl;     
unsigned int x = -10;
cout<<x;
return 0;
}