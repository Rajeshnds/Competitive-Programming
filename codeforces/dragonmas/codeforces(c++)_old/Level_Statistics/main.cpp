#include<bits/stdc++.h>
using namespace std;
void clear_level(int n){
    int f=1,a=0,b=0,c,d;
    for(int i=0;i<n;i++){
        cin>>c>>d;
        if(c<d||c<a||d<b||c-a<d-b)f=0;
        a=c;b=d;
    }
    cout<<(f?"YES":"NO")<<endl;
}
int main(){
    int t,n;
    for(cin>>t;t--;){
        cin>>n;
        clear_level(n);
    }
}
