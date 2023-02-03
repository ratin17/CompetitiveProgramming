#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main(){
    vector<int>s;
    int temp;

    for(int i=100;i<150;i=i+4){
        s.push_back(i);
    }
    s.push_back(23);
    s[3]=34;

    s.insert(s.begin()+3,76);

    sort(s.begin(),s.begin()+s.size());

    // s.pop_back();
    // s.pop_back();

    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;

}


