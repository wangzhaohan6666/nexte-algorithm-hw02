
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<long long> a(n+1), pre(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        pre[i] = pre[i-1] + a[i];
    }
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l-1] << '\n';
    }
    return 0;
}
