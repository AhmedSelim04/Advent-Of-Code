#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[100][20];
string s;
ll pw[]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000,100000000000,1000000000000,10000000000000,100000000000000};
ll rec(int i,int sz) {
    if (sz==12) {
        return 0;
    }
    if (s.size()==i||sz>12) {
        return -1e13;
    }
    if (~dp[i][sz]) {
        return dp[i][sz];
    }
    ll ch1=rec(i+1,sz);
    ll ch2=rec(i+1,sz+1)+(s[i]-'0')*pw[12-sz];
    return dp[i][sz]=max(ch1,ch2);
}
void agwn() {
    // cout<<inf-1<<endl;
    ll ans=0;
    while (cin>>s&&s!="!") {
        memset(dp,-1,sizeof(dp));
        ans+=rec(0,0)/10;
    }
    cout<<ans<<endl;
}
int main() {
    agwn();
    return 0;

}