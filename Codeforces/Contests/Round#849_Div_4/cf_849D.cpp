#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int maxUnique(string S, set<string> st){
 
  int mx = 0;

  for (int i = 1; i <= S.length(); i++){
    string tmp = S.substr(0, i);
    if (st.find(tmp) == st.end()){
      st.insert(tmp);
      mx = max(mx, maxUnique(S.substr(i), st) + 1);
      st.erase(tmp);
    }
  }
  return mx;
}
 
 
int maxUniqueSplit(string S){
  set<string> st;
  return maxUnique(S, st);
}
 
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    cout<<maxUniqueSplit(s)<<endl;
  }
  return 0;
}