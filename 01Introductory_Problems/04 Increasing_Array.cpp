#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    ll ans=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        maxi=max(maxi,num);
        ans+=maxi-num;
    }
    cout<<ans;
    return 0;
}