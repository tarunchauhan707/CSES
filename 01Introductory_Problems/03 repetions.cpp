#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    cin>>s;
    int ans=1;
    int cnt=0;
    char prev='A';
    for(char c:s){
        if(c==prev){
            cnt++;
             ans=max(ans,cnt);
        }else{
            prev=c;
            cnt=1;
        }    
    }
    cout<<ans;
}
