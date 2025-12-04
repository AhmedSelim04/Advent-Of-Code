#include <bits/stdc++.h>
using namespace std;
#define ll long long

void agwn() {
    ll ans=0;
    string s;
    while (cin>>s&&s!="!") {
        char mx='0';
        for (int i=0;i<s.size()-1;i++) {
            mx=max(mx,s[i]);
        }
        string x;
        int idx=0;
        for (int i=0;i<s.size()-1;i++) {
            if (mx==s[i]) {
                idx=i;
                x.push_back(s[i]);
                break;
            }
        }
        mx='0';
        for (int i=idx+1;i<s.size();i++) {
            mx=max(mx,s[i]);
        }
        x.push_back(mx);
        ans+=stoi(x);
    }
    cout<<ans<<endl;
}
int main() {
    agwn();
    return 0;

}