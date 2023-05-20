#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int const N=1000000;
vector<int>g[N];



int minS(int n,int romeo, int juliet) {
    
    vector<int> dist1(n, -1); 
    vector<int> dist2(n, -1); 


    queue<int> q1;
    q1.push(romeo);
    dist1[romeo] = 0;

    while (!q1.empty()) {
        int u = q1.front();
        q1.pop();

        for (int v : g[u]) {
            if (dist1[v] == -1) {
                dist1[v] = dist1[u] + 1;
                q1.push(v);
            }
        }
    }

    queue<int> q2;
    q2.push(juliet);
    dist2[juliet] = 0;

    while (!q2.empty()) {
        int u = q2.front();
        q2.pop();

        for (int v : g[u]) {
            if (dist2[v] == -1) {
                dist2[v] = dist2[u] + 1;
                q2.push(v);
            }
        }
    }

    
    int ms = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (dist1[i] != -1 && dist2[i] != -1) {
            ms = min(ms, dist1[i] + dist2[i]);
        }
    }

    return ms;
}

int main() {
    int n, m,k;
    cin >> n >> m;

    

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    int romeo, juliet,ms;
    cin >> romeo >> juliet>>k;

    

    ms = minS(n,romeo, juliet);

    if(ms%2==0)ms=ms/2;
    else ms=(ms=ms/2)+1;

    //check
    if(ms<=k)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;    

    return 0;
}
