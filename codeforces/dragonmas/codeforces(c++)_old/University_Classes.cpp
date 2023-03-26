#include<bits/stdc++.h>
using namespace std;
int n,a[7];
string s[1001];
main(){
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>s[i];
    for(int j=0;j<7;j++){
            if(s[i][j]=='1')a[j]++;
    }
    }
    cout<<*max_element(a,a+7);
}
