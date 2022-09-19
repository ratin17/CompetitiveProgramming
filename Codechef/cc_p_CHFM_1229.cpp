#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--){
	    int n;
	    cin>>n;

	    vector<int> v(n);
	    long long sum=0;
	    for(int i=0; i<n; i++){
	        cin>>v[i];
	        sum+=v[i];
	    }


	    int ans=0;
	    for(int i=0; i<n; i++){
	        if((sum*(n-1))==(sum-v[i])*n) {
	            ans=i+1;
	            break;
	        }
	    }

	    if(ans>0) cout<<ans<<endl;
	    else cout<<"Impossible"<<endl;
	}
	return 0;
}
