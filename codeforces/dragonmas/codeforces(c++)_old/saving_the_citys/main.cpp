#include<bits/stdc++.h>
using namespace std;
int t,a,b;
string s;
int main(){
    for(cin>>t;t--;){
        cin>>a>>b>>s;
        int ans=0,k=1001;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                ans+=min(a,b*k);
                k=0;
            }
            else k++;
        }
        cout<<ans<<endl;
    }
}
