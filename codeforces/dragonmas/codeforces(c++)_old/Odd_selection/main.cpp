#include<bits/stdc++.h>
using namespace std;
string if_odd(int n,int x){
    int a=0,k=0,l=0;
    for(int i=0;i<n;i++){
        cin>>a;
        a&1?k++:l++;
    }
    if(k==0)return "No";
    else if(k%2==0&&n==x)return "No";
    else if(n==k&&x%2==0)return "No";
    else return "Yes";
}
int main(){
    int t,n,x;
    for(cin>>t;t--;)cin>>n>>x,cout<<if_odd(n,x)<<endl;
}
