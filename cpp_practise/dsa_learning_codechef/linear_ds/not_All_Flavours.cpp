#include <bits/stdc++.h>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int max = 0;
        set<int> s1;
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            s1.insert(arr[i]);
            for (int j = i + 1; j < n; j++)
            {
                s1.insert(arr[j]);
                if (s1.size() == k)
                {
                    if (max < j - i + 1)
                    {
                        max = j - i + 1;
                    }
                    s1.erase(s1.begin(), s1.end());
                }
            }
        }
        cout << max << "\n";
    }

    return 0;
}