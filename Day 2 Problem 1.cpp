#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
bool ok(string s) {
    int n=s.length();
    if (n%2!=0)return 0;
    for (int i=0; i<n/2; i++) {
        if (s[i]!=s[n/2+i])return 0;
    }
    return 1;
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
    for (int i = 0; i < v.size(); i++) {
        ll x=stoll(v[i].first),y=stoll(v[i].second);
        for (ll j=x; j<=y; j++) {
            if (ok(to_string(j))) {
                ans+=j;
            }
        }
    }
    cout<<ans<<endl;
}
int main() {
    agwn();
    return 0;

}