#include<bits/stdtr1c++.h>
using namespace std;


int main(){

    int n,q,c=1;
    while(cin>>n>>q){
        if(n==0&&q==0)break;

        cout<<"CASE# "<<c<<":"<<endl;
        c++;
        int t,s;
        vector<int>v;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            v.push_back(t);
        }
        sort(v.begin(),v.end());

        while(q--){
            cin>>s;
            auto it = find(v.begin(), v.end(), s);

            if(it==v.end()){
                cout<<s<<" not found"<<endl;
            }
            else{
                cout<<s<<" found at "<<it-v.begin()+1<<endl;
            }
        }
    }
    
    return 0;
}