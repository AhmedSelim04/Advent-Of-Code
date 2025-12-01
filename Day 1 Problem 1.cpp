#include <bits/stdc++.h>
using namespace std;
#define ll long long
void agwn() {
    char a;int b;
    int cnt=50,ans=0;
    while (cin >> a >> b&&a!='!'){
        int c1=cnt;

        if (a=='L') {
            cnt-=b;
            cnt=(cnt+100)%100;
        }
        else {
            cnt+=b;
            cnt=(cnt+100)%100;
        }
        if (cnt==0) {
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main() {
    agwn();
    return 0;

}