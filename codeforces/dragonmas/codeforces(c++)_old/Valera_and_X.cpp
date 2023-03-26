#include<bits/stdc++.h>
using namespace std;
int n,i,j;
char a;
set<char> s,c;
int main(){
    for(cin>>n;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a,j==i||j==n-i-1?s.insert(a):c.insert(a);
        cout<<(s.size()==1&&c.size()==1&&s!=c?"YES":"NO");
}
