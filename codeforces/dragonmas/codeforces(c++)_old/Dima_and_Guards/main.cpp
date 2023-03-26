#include<bits/stdc++.h>
using namespace std;
int n,a,i=1,b,c,d;
void ifs_meet(){
    cin>>n;
    for(i=1;i<=4;i++){
        cin>>a>>b>>c>>d;
        if(min(a,b)+min(c,d)<=n){
            cout<<i<<" "<<min(a,b)<<" "<<n-min(a,b);
            break;
        }
    }
    if(i==5)cout<<-1;
}
int main(){
    ifs_meet();
}
