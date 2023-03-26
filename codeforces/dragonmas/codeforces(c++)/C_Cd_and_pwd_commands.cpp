#include<bits/stdc++.h>
using namespace std;
int n;
string t,u,s="/";
void solve(){
    while(n--){
        cin>>t;
        if(t=="pwd")cout<<s<<endl;
        else{
            cin>>u;
            if(u[0]=='/')s="";
            for(int i=0;i<u.size();i++){
                if(u[i]=='.'){
                    int k=s.rfind("/",s.size()-2);
                    s.erase(k,s.size()-k);
                    i++;
                }
                else s+=u[i];
            }
            s+="/";
        }
    }
}
int main(){
    cin>>n;;
    solve();
}