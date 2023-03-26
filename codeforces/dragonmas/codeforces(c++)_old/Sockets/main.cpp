#include<bits/stdc++.h>
using namespace std;
int n,m,i,k,s;
int no_of_filter(){
    cin>>n>>m>>k;
    if(k>=m)return 0;
    vector<int>v(n);
    for(i=0;i<n;i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    for(i=0;i<n;i++){
        if(k==0){
            s--;
            s+=v[i];
            if(s>=m)break;
        }
        else{
            if(k>=1)k--,s+=k+v[i];
            if(s>=m)break;
            else s-=k;
        }
    }
    return s>=m?i+1:-1;
}
int main(){
    cout<<no_of_filter();
}
