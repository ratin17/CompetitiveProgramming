#include <bits/stdc++.h>
using namespace std;

void updateA(vector<int>& A, vector<int>& D){
	for (int i = 0; i < A.size(); i++) {
		if (i == 0)
			A[i] = D[i];

		else
			A[i] = D[i] + A[i - 1];
	}
}


vector<int> initD(vector<int>& A){
	int n = A.size();

	vector<int> D(n + 1);

	D[0] = A[0], D[n] = 0;
	for (int i = 1; i < n; i++)
		D[i] = A[i] - A[i - 1];
	return D;
}


void updateD(vector<int>& D, int l, int r, int x){
	D[l] += x;
	D[r + 1] -= x;
}



int main(){
    int t;
    cin>>t;
    while(t--){
        int n,u,l,r,v,q,p;
        cin>>n>>u;

        vector<int> A(n,0);
        vector<int> D = initD(A);

        while(u--){
            cin>>l>>r>>v;
            updateD(D, l, r,v);
            
        }
        updateA(A,D);

        cin>>q;
        while(q--){
            cin>>p;
            if (p==0)cout<<D[p]<<endl;

		    else cout<<D[p]+A[p-1]<<endl;

        }


    }
	

	return 0;
}
