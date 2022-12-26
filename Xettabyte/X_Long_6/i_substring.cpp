#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    int n;
	cin >> n;

	while (n--){
		string a;
		cin >> a;
       
		for (int i = 1; i <= a.length(); i++){
            int cLength= 0;
            if (a.length() % i == 0){
                set<string> subs;
                while (cLength < a.length()){
                    string s = a.substr(cLength, i);
                    subs.insert(s);
                    cLength += i;
                }
                if (subs.size() == 1){
                    cout<<i<<endl;
                    if(n)cout<<endl;
                    break;
                }
            }
		}
	}


	return 0;
}