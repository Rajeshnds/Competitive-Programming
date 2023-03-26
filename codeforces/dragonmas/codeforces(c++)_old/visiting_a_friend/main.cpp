#include<bits/stdc++.h>
using namespace std;
int n,m,a,b,p,q;
string teleports(){
    cin>>n>>m>>p>>q;n--;if(p!=0)return "NO";
    while(n--){
        cin>>a>>b;
        if(a>q&&q<m)return "NO";
        p=a;q=max(q,b);
    }
    return q>=m?"YES":"NO";
}
int main(){
    cout<<teleports();
}
