#include<bits/stdc++.h>
using namespace std;
int n,a[200001],k;
string s;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    int d=n-1,i=0;
    while(i<=d){
        if(a[i]>k&&(a[i]<a[d]||a[d]<k))s+='L',k=a[i],i++;
        else if(a[d]>k)s+='R',k=a[d],d--;
        else break;
    }
    cout<<s.size()<<endl<<s;
}
