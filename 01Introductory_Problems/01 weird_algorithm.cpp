// 3 ->10 -> 5 ->16 -> 8 -> 4 -> 2 ->1
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// 3

// Output:
// 3 10 5 16 8 4 2 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n>1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
        cout<<n<<" ";
    }
    return 0;
}
