#include<bits/stdc++.h>
using namespace std;
string weird_sort(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                if(b[j+1])swap(a[j],a[j+1]);
                else return "NO";
            }
        }
    }
    return "YES";
}
int main(){
    int t,n,m;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m;
        int a[n],b[n]={0},c;
        for(int i=0;i<n;i++)cin>>a[i];
        while(m--)cin>>c,b[c]++;
        cout<<weird_sort(a,b,n);
    }
}
