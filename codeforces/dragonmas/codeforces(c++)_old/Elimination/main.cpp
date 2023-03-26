#include<bits/stdc++.h>
using namespace std;
int t,a,b,c,d;
int cutoff(){
    cin>>a>>b>>c>>d;
    return max(a+min(b,c),c+min(a,d));
}
int main(){
    for(cin>>t;t--;)cout<<cutoff()<<endl;
}
