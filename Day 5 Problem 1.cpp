#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<ll,ll>>vec(vector<string>s) {
    vector<pair<ll,ll>>res;
    for (int i=0;i<s.size();i++) {
        string x;
        int j=0;
            while (j<s.size()&&s[i][j]!='-') {
                x.push_back(s[i][j]);
                j++;
            }
            j++;
        string y;
        while (j<s[i].size()) {
            y.push_back(s[i][j]);
            j++;
        }
        if (x.size()&&y.size())
        res.push_back({stoll(x),stoll(y)});
    }
    return res;
}
void agwn() {
    string s;
    ll x,y;
    vector<pair<ll,ll>> res;
    vector<string>v;
    while (getline(cin,s,'\n')&&s!="!") {
        v.push_back(s);
    }
    res=vec(v);
    ll ans=0;
    while (cin>>x&&x!=-1) {
        for (auto i:res) {
            if (i.first<=x&&i.second<=y) {
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    // int t=1;cin>>t;while (t--)
    agwn();


    return 0;
}

