#include<bits/stdc++.h>
using namespace std;

int n,m,s;

int main() {

    cin>>n>>m;

    while(m>0) {

        s=s*10+(m%10);

        m/=10;

    }

    cout<<s+n;
}
