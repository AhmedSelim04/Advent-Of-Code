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
    cout<<s<<endl;
    ll x,y;
    vector<pair<ll,ll>> res;
    vector<string>v;
    while (getline(cin,s,'\n')&&s!="!") {
        v.push_back(s);
    }
    res=vec(v);
    sort(res.begin(),res.end());
    ll ans=0;
    vector<pair<ll,ll>> v1;
    x=res[0].first,y=res[0].second;
    for (int i=1;i<res.size();i++) {
        if (y>=res[i].first) {
            x=min(x,res[i].first);
            y=max(y,res[i].second);
        }
        else {
            v1.push_back({x,y});
            x=res[i].first;
            y=res[i].second;
        }
    }
    if (v1.size()&&v1.back().first!=x&&v1.back().second!=y) {
        v1.push_back({x,y});
    }
    for (auto i:v1) {
        ans+=i.second-i.first+1;
    }
    cout<<ans<<endl;
}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t=1;cin>>t;while (t--)
    agwn();


    return 0;
}

