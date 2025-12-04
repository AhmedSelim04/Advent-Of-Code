#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
bool is_v(int x,int y) {
    return x>=0 && x<n && y>=0 && y<m;
}
void agwn() {
    vector<string>x;
    string s;
    while (cin >> s&&(s!="!")) {
        x.push_back(s);
    }
    int dx[]={1,1,1,-1,-1,-1,0,0};
    int dy[]={0,1,-1,0,1,-1,1,-1};
    n=x.size();
    m=x[0].size();
    int ans=0;

    vector<pair<int,int>> v;
    bool is=true;
    while (is) {
        is=false;
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                int cnt=0;
                for (int k=0;k<8;k++) {
                    int nx=i+dx[k];
                    int ny=j+dy[k];
                    if (is_v(nx,ny)&&x[nx][ny]=='@') {
                        cnt++;
                    }
                }
                if (cnt<4&&x[i][j]=='@') {
                    ans++;
                    v.push_back({i,j});
                }
            }
        }

        for (auto i:v) {
            x[i.first][i.second]='x';
        }
        is=v.size();
        v.clear();
    }
    cout<<ans<<endl;

}
int main() {
    agwn();
    return 0;

}