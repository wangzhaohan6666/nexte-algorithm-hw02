include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    // 去重
    auto last = unique(v.begin(), v.end());
    v.erase(last, v.end());

    cout << v.size() << '\n';
    for(size_t i=0;i<v.size();i++)
    {
        if(i>0) cout << " ";
        cout << v[i];
    }
    cout << '\n';
    return 0;
}
