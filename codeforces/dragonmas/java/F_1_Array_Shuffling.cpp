#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int, int> PII;
const int N = 2e5 + 9;
int a[N];
signed main()
{
    int t;
    cin>>t;
    while (t--)
    {
        multiset<int>se;
        int n;
        cin>>n;
        for (int i=1;i<=n;i++)
        {
            cin>>a[i];
            se.insert(a[i]);
        }
        for (int i=1;i<=n;i++)
        {
            auto it =  se.upper_bound(a[i]);
            if (it==se.end()) it = se.begin();
            cout<<*it<<" ";se.erase(it);
        }
        cout<<endl;
    }
}