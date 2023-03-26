#include<bits/stdc++.h>
using namespace std;
int n,m;
void min_max_fare(){
    cin>>n>>m;
    if(n==0&&m>0)cout<<"Impossible";
    else{
        cout<<max(m,n)<<" "<<n+max(m-1,0);
    }
}
int main(){
    min_max_fare();
}
