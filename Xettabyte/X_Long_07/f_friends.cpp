
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

const int maxn = 10001;
int n,m;
int ans;
int p[maxn];
int cnt[maxn];

int findF(int x)
{
    return p[x] == x? x : p[x] = findF(p[x]);
}

void init(int n){
    ans = 1;
    for(int i = 1; i <= n ; i++)
        p[i] = i, cnt[i] = 1;

}

void makeFriend(int u, int v){
    int a = findF(u);
    int b = findF(v);
    if(a != b)
        p[b] = a, cnt[a] += cnt[b];
    ans = max(cnt[a],ans);
}


int main(){

    int T;
    cin >> T;

    while(T--){
        cin >>n>>m;
        init(n);
        int a,b;
        for(int i = 0; i < m; i++){
            cin >> a >> b;
            makeFriend(a,b);
        }

        cout << ans << endl;
    }

    return 0;
}