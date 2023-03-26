#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,n,s=0;

    cin>>x;

    while(x--)
    {
        cin>>n;

        s=(s+n)%2+1;

        cout<<s<< "\n";
    }
}
