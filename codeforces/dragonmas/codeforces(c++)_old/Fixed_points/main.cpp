#include<bits/stdc++.h>
using namespace std;
int n,a,k,l,d;
int fixed_points(int n){
    int b[n];
    for(int i=0;i<n;i++)cin>>a,b[a]=i;
    for(int i=0;i<n;i++){
        if(b[i]==i)k++;
        else if(b[b[i]]==i)d=1;
        else l++;
    }
    return k+(d?2:l>2?1:0);
}
int main(){
    cin>>n;cout<<fixed_points(n);
}
