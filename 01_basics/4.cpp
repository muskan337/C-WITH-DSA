#include<iostream>
using namespace std;

//function definition
// void hello(){
//     cout<<"Hello World!";
// }


// int main(){

//       hello();  //function call 
//     return 0;
// }

// int printHello(){
//     cout<<"hello WorlD!"<<endl;;
// return 3;
// }

// int main(){
// //  int val= printHello();   
//    cout<<printHello()<<endl;
//   return 0;
// }

// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     int s = a + b;

//     return s;
// }

// int main(){
  
// cout<<sum(10,5)<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int SUM(int n){
//     int sum = 0 ;
//     for(int i = 0; i<=n; i++){
//         sum += i;
//     }
//     return sum;
// }

// int main() {
    
//     cout<< SUM(5)<<endl;

// return 0;
// }


// #include <iostream>
// using namespace std;

// int factorial(int n){
//     int fac =1;
    
//     for(int i=1; i<=n; i++){
//         fac *= i;
//     }
//     return fac;
// }

// int main() {
//  cout<<factorial(5)<<endl;;
// return 0;
// }

// #include <iostream>
// using namespace std;

// int digitSum(int num){
//     int sum = 0;
//    while(num > 0){
//    int digit = num%10;
//    num /= 10;
//     sum += digit;
//    }
//    return sum;
// }

// int main() {
// int num = 145;
//  cout<<digitSum(num)<<endl;

// return 0;
// }

// #include <iostream>
// using namespace std;

// int binoCoeff(int n, int r){
//     int fac = 1;
//     int FAC = 1;
//     int Fac = 1;
//     int N = (n-r);
//     for(int i=1; i<=n; i++){
//         fac *= i;
//     }
//     for(int i=1; i<=r; i++){
//         FAC *= i;
//     }
//     for(int i=1; i<=N; i++){
//         Fac *= i;
//     }
//     int coeff = fac/(FAC*Fac);
//     return coeff; 
// }

// int main() {
//  cout<<binoCoeff(8,2)<<endl;
// return 0;
// }

#include <iostream>
using namespace std;

int fibonacci(int n){
    int fib[n];
     fib[0] = 1;
     fib[1] = 1;
     for(int i= 2; i<=n; i++){
        fib[i] = fib[i-1] + fib[i-2];
     }
     return fib[n];
}

int main() {
    cout<<fibonacci(5)<<endl;
return 0;
}