#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    // a ^ 0 = a
    // a ^ a = 0
    //Swap two numbers
    int a = 5 , b = 10;
    a = a^b;
    b = b^a; //b ^ (a ^ b) = 0 ^ a = a
    a = a^b; // a ^ b ^ a = 0 ^ b = b
    return 0;
}
