#include<bits/stdc++.h>
using namespace std;
int t,a,b;
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b;
        if(a>b)swap(a,b);
        int k=a-(b-a);
        if(k>=0&&k%3==0)cout<<"YES";
        else cout<<"NO";
    }
}
