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
    //SET
    int a = 9;
    int k = 2;
    if((a & (1<<k)) != 0)
        cout << "SET" << endl;
    else
        cout << "UNSET" << endl;
    
    //BIT SET
    printBinary(a|(1<<k));
    cout << (a|(1<<k)) << endl;
    //BIT UNSET
    // 9 - 1001
    // ~9 - 0110
    printBinary(a & ~(1<<k));
    cout << (a & ~(1<<k)) << endl;

    //TOGGLE BIT
    printBinary(a ^ (1<<k));
    cout << (a ^ (1<<k)) << endl;
    int cnt = 0;
    //COUNT SET BIT
    for(int i = 31 ; i >= 0 ; i--){
        if((a & (1<<i)) != 0)
            cnt++;
    }
    cout << cnt << endl;
    cout << __builtin_popcount(a) << endl;
    cout << __builtin_popcountll((1ll<<35) -1) << endl;
    return 0;
}
