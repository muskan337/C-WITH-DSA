#include <iostream>
using namespace std;

int main()
{
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    //  int n = 4;
    //  for (int i = 0; i< n; i++){
    //    for(int j = 1; j<= n; j++){
    //     cout<<j<<" ";
    //    }
    //    cout<<endl;
    //  }

    // A B C D
    // A B C D
    // A B C D
    // A B C D
    // int n =4;
    // for(int i =0; i<n; i++){
    //     char ch = 'A';
    //      for(int j=0; j<n; j++){
    //             cout<<ch<<" ";
    //             ch++;
    //      }
    //      cout<<endl;
    // }

    // 1 2 3
    // 4 5 6
    // 7 8 9
    // int n =3;
    // int N = 1;
    // for(int i=0; i<n ; i++){
    //    for(int j=0; j<n; j++ ){
    //      cout<<N<<" ";
    //        N++;
    //    }
    //    cout<<endl;
    // }

    // A B C
    // D E F
    // G H I
    // int n = 3;
    // char ch = 'A';
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j< n; j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    //  *
    //  * *
    //  * * *
    //  * * * *
    // int n = 4;
    // for(int i=0; i<n; i++){
    //     for(int j  = 0; j<=i; j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4

    // int n =4, N=1;
    // for(int i=0; i<n;  i++){
    //     for(int j= 0; j<=i; j++){
    //         cout<<N<<" ";

    //     }
    //     N++;
    //     cout<<endl;
    // }

    // A
    // B B
    // C C C
    // D D D D
    //  int n =4;
    //  char ch = 'A';
    //     for(int i=0; i<n;  i++){
    //         for(int j= 0; j<=i; j++){
    //             cout<<ch<<" ";

    //         }
    //         ch++;
    //         cout<<endl;
    //     }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // int n=4;
    // for(int i=0; i<n; i++){
    //     int N = 1;
    //     for(int j=0; j<=i; j++){
    //         cout<<N<<" ";
    //         N++;
    //     }
    //     cout<<endl;
    // }

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // int n =4;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j>0; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // int n =4;
    // int N = 1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<N<<" ";
    //         N++;
    //     }
    //     cout<<endl;
    // }
    //         OR

    //    int n=4;
    //    int num= 1;
    //    for(int i=0; i<n; i++){
    //     for(int j=i+1; j>0; j--){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    //    }

    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4
    // int n=4, num=1;
    // for(int i=0; i<n; i++){
    //     //spaces
    //     for(int j=0; j<i; j++){
    //         cout<<" ";
    //     }
    //     //nums
    //         for(int k=0; k<(n-i); k++){
    //             cout<<i+1;
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // int n= 4;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i-1; j++){
    //     cout<<" ";
    //         }

    //         for(int j =1; j<=i+1; j++){
    //             cout<<j;
    //         }
    //         for(int j=i; j>0; j--){
    //             cout<<j;
    //         }
    //         cout<<endl;
    //     }

    int n = 4;

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if(i != 0){
        for (int j = 0; j < 2*i- 1; j++)
        {
            cout << " ";
        }
        cout<<"*";
    }
    cout<<endl;
    }

    return 0;
}