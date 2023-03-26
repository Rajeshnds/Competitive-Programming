#include<bits/stdc++.h>
using namespace std;
long long min_operation(int n,int a[]){
    long long s=0;
    for(int i=n-1;i>0;i--){
        if(a[i]<a[i-1])s+=a[i-1]-a[i];
    }
    return s;
}
int main(){
    int t,n;
    for(cin>>t;t--;){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<min_operation(n,a)<<endl;
    }

}
