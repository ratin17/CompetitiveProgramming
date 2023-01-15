#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)


int a[100005];
int tree[400005];

int makeST(int l, int r, int node)
{
	
	int x;
	int y;

	if(l == r) {
		tree[node] = a[l];
		return a[l];
	}

	x = makeST(l, (l + r) / 2, node * 2);
	y = makeST((l + r) / 2 + 1, r, node * 2 + 1);

	tree[node] = min(x, y);

	return tree[node];
}

int query(int l, int r, int e, int f, int node)
{
	int x;
	int y;
	
	if(e <= l and f >= r) {
		return tree[node];
	}

	if(e > r or f < l) {
		return INT_MAX;
	}

	x = query(l, (l+r)/2, e, f, node * 2);
	y = query((l+r)/ 2 + 1, r, e, f, node * 2 + 1);

	return min(x, y);
}

	
int main()
{
	int t,n,qs,x,y;

	cin>>t;

	for (int cs = 1; cs <= t; cs++) {
		
		cin>>n;
        cin>>qs;
		
		for (int i = 1; i <= n; i++) {
			cin>>a[i];
		}

		makeST(1, n, 1);
		
		printf("Case %d:\n", cs);
		
		for(int i = 0; i < qs; i++) {
			cin>>x;
            cin>>y;

			printf("%d\n", query(1, n, x, y, 1));
		}


	}


}