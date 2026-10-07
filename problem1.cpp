include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int max_len = 0, cur = 0, x;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x == 1)
        {
            cur++;
            if(cur > max_len) max_len = cur;
        }
        else
        {
            cur = 0;
        }
    }
    cout << max_len << '\n';
    return 0;
}
