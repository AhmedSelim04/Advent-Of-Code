#include <bits/stdc++.h>
using namespace std;
#define ll long long
//20
vector<pair<string,string>>split(string &s) {
    vector<pair<string,string>> res;
    for (int i=0; i<s.length(); i++) {
        string a,b;
        while (i<s.length()&&s[i]!='-') {
            a.push_back(s[i]);
            i++;
        }
        i++;
        while (i<s.length()&&s[i]!=',') {
            b.push_back(s[i]);
            i++;
        }
        res.push_back({a,b});
    }
    return res;
}
//100
bool ok(string s) {
    int n=s.length();
    for (int i=1; i<=n; i++) {//10
        if (s.size()%i!=0)continue;
        unordered_map<string,int> mp;
        string x;
        for (int j=0;j<n;j++) {//10
            x.push_back(s[j]);
            if (x.size()==i) {
                mp[x]++;
                x.clear();
            }
        }
        for (int j=0;j<i;j++)x.push_back(s[j]);
        if (mp[x]==n/i&&n/i>1)return 1;
    }
    return 0;
}
void agwn() {
    string s;
    getline(cin, s);
    vector<pair<string,string>> v = split(s);
    // for (int i = 0; i < v.size(); i++) {
    //     if (i > 0) cout << endl;
    //     cout << v[i].first<<' ';
    //     cout << v[i].second;
    // }
    ll ans=0;
    for (int i = 0; i < v.size(); i++) {//35
        ll x=stoll(v[i].first),y=stoll(v[i].second);
        for (ll j=x; j<=y; j++) { // 3*10^5

            if (ok(to_string(j))) {
                ans+=j;
                // cout<<j<<' ';
            }
            // cout<<j<<endl;
        }
    }
    cout<<ans<<endl;
}
int main() {
    agwn();
    return 0;

}