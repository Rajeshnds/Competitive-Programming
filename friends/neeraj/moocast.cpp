#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll e = 1e5 + 10;
bool visited[e];
vector<ll> adjList[e];
ll counter = 0;
int a[300];

ll dist(ll x1, ll y1, ll x2, ll y2)
{
    return ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
}
void prntAlist(vector<ll> arr[], ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        cout << i << " -> ";
        for (ll j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

ll dfs(ll city)
{
    // visited[city] = true;
    a[city]=1;
    counter++;
    for (auto x : adjList[city])
    {
        if (!a[x])
        {   
            dfs(x);
        }
    }
    
}

int main()
{
    freopen("moocast.in","r",stdin);
    freopen("moocast.out","w",stdout);
    ll n;
    cin >> n;
    ll ans = 0;

    vector<pair<pair<ll, ll>, ll>> cows;
    for (ll i = 0; i < n; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        cows.push_back(make_pair(make_pair(a, b), c));
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (dist(cows[i].first.first, cows[i].first.second, cows[j].first.first, cows[j].first.second) <= (cows[i].second * cows[i].second))
                {
                    adjList[i + 1].push_back(j + 1);
                }
            }
        }
    }
    // prntAlist(adjList, n);

    for (ll i = 1; i <= n; i++)
    {
        
        if (!a[i])
        {
            
            dfs(i);
        }
        ans = max(ans, counter);
        counter=0;
        fill(a,a+n+1,0);
        // visited[e] = {false};
    }
    cout << ans << endl;
    return 0;
}
