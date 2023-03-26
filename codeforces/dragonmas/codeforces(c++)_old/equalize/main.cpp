#include<bits/stdc++.h>
using namespace std;
int n,m;
string a,b;
int main(){
    cin>>n>>a>>b;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]&&a[min(n-1,i+1)]!=b[min(n-1,i+1)]&&
                    a[i]!=a[min(n-1,i+1)])
                m++,i++;
            else if(a[i]!=b[i])m++;
        }
        cout<<m;
}
