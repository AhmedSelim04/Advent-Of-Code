#include <bits/stdc++.h>
using namespace std;
#define ll long long
void agwn() {
    char a;int b;
    int cnt=50,ans=0;
    while (cin >> a >> b&&a!='!'){
        int c1=cnt;

        if (b>=100) {
            ans+=b/100;
            b%=100;
        }
        if (a=='L') {
            cnt-=b;
            cnt=(cnt+100)%100;
        }
        else {
            cnt+=b;
            cnt=(cnt+100)%100;
        }
        if (c1==0)continue;
        if (cnt==0) {
            ans++;
        }
        else if (a=='L') {
            if (c1<cnt)ans++;
        }
        else if (a=='R') {
            if (c1>cnt)ans++;
        }
    }
    cout<<ans<<endl;
}
int main() {
    agwn();
    return 0;

}