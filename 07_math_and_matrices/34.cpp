// #include <iostream>
// using namespace std;

// string isPrime(int n ){
//     for(int i=2; i*i<=n; i++){
//         if(n%i == 0){
//             return "non-prime";
//         }
//     }
//     return "prime";
// }

// bool isPrime(int N ){
//     bool is_prime = true;
//     for(int n=2; n<=N; n++){
//             for(int i=2; i<=n; i++){
//                  if(n% i == 0){
//                     is_prime = false;
//                     break;
//                  }
//                  else{
//                     is_prime = true;
                   
//                  }
//             }
           
//     }
//     return is_prime;
// }

 //int main() {
// int n = 16;

// cout<<isPrime(n)<<endl;



// return 0;
// }

// 

#include <iostream>
using namespace std;

bool isArmstrong(int n){
    int N = n;
    int ans = 0;
    while(n != 0){
    int digit = n%10;
    ans += (digit*digit*digit);
    }
   return N == ans;
}

int main() {
int n = 153;
if(isArmstrong(n)){
    cout<<"an armstrong no.";
}else{
    cout<<"not an armstrong no.";
}
return 0;
}