#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{
    int n,x,k=0;
    cin>>n;
    int w[101]={0};
    for(int i=0;i<n;i++)
    {
        cin>>x;
        w[x]++;
    }
    for(int j=0;j<=51;j++)
    {
        int c=0;
        for(int l=1;l<=j;l++)
        {
            c+=min(w[l],w[j-l]);
        }
        k=max(k,c/2);
    }
    cout<<k<<endl;
}

}
