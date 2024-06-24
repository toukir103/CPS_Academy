#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int mx = 2e5 + 123;
int ar1[mx];
int ar2[mx];

int main()
{
    optimize();

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> ar1[i];
    }

    for (int i = 1; i <= n; i++)
    {
        ar2[i] = ar2[i - 1] + ar1[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        a++, b++;

        cout << ar2[b] - ar2[a - 1] << endl;
    }

    return 0;
}
