#include<bits/stdc++.h>
using namespace std;
long long a,b,s;
main(){
    cin>>a>>b>>s;
    s=s-abs(a)-abs(b);
    cout<<(s>=0&&s%2==0?"Yes":"No");
}

