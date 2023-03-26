#include<bits/stdc++.h>
using namespace std;
int n,k,q,a[150001];
set<int>s;
int main(){
    int b,c;
    cin>>n>>k>>q;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=q;i++){
        cin>>b>>c;
        if(b==1){
            s.insert((a[c]));
            if(s.size()>k){
                s.erase(s.begin());
            }
        }
        if(b==2){
            if(s.count(a[c]))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
