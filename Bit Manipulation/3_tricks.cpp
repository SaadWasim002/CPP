#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void printBinary(int num){
    for(int i = 10 ; i >= 0 ; i--){
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
int main() {
    //UPERCASE TO LOWERCASE
    char A = 'A';
    char a = A | (1<<5);
    cout << a << endl;
    cout << char(A | ' ') << endl; // ' ' = 1<<5
    //LOWERCASE TO UPERCASE
    char b = 'b';
    char B = b & (~(1<<5));
    cout << B << endl;
    cout << char(b & '_') << endl; //'_' = 1011111
    //CLEAR LSB TILL K
    int n = 59;
    printBinary(n);
    int k = 3;
    int ans = (n & (~((1<<(k+1)) - 1)));
    // a = 1 << k+1 -> 10000 
    // a = a-1 -> 1111
    // a = ~a ->111110000
    printBinary(ans);
    //CLEAR MSB TILL K
    n = 59;
    printBinary(n);
    k = 3;
    ans = (n & ((1<<(k+1)) - 1));
    printBinary(ans);
    //CHECK POWER OF 2
    n = 16;
    if(n & (n-1)){
        cout << "NOT POWER OF 2";
    }
    else{
        cout << "POWER OF 2";
    }
    return 0;
}
