#include<bits/stdc++.h>
using namespace std;
int n,j,k,m;
int watered_section(int n){
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++){
        k=1;
        for(int j=i+1;j<n;j++)
            if(v[j]<=v[j-1])k++;
            else break;
        for(int j=i-1;j>=0;j--)
            if(v[j]<=v[j+1])k++;
            else break;
        m=max(m,k);
    }
    return m;
}
int main(){
    cin>>n;cout<<watered_section(n);
}
