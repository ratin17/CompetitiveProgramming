#include<bits/stdtr1c++.h>
using namespace std;

bool check_subSeq(string s,string t){
    int n = s.length(), m = t.length();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s[i] == t[j])i++;
        if(i==n)return true;
        j++;
    }
    return false;
}

int main(){
    string s,t;
    while(cin>>s>>t){
        if(check_subSeq(s,t))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}