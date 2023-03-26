#include<bits/stdc++.h>
using namespace std;
int min_operation(int c[],int j,int a[]){
    int m=100001;
    a[c[0]]--;a[c[j-1]]--;
    for(int i=0;i<j;i++)m=min(m,a[c[i]]+1);
    return m;
}
int main(){
    int t,n,b;
    for(cin>>t;t--;){
        cin>>n;
        int e=0,c[n],d[n+1]={0},j=0;
        for(int i=0;i<n;i++){
            cin>>b;
            if(b!=e)c[j++]=b,d[b]++,e=b;
        }
        cout<<min_operation(c,j,d)<<endl;
    }
}
