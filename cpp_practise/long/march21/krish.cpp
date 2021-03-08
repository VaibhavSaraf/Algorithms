#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 100000007
const int MAX_CHAR = 26;

bool check(ll freq[], ll k)
{
    for (int i = 0; i < MAX_CHAR; i++)
        if (freq[i] && freq[i] != k)
            return false;
    return true;
}

ll solve(string s, int n)
{
    ll res = 0;
    for (int i = 0; s[i]; i++)
    {

        ll freq[MAX_CHAR] = {0};

        for (ll j = i; s[j]; j++)
        {

            ll index = s[j] - 'a';
            freq[index]++;

            if (freq[index] > 2)
                break;
            else if (freq[index] == 2 &&
                     check(freq, 2) == true)
                res++;
        }
    }
    return res % MOD;
}

int main()
{

    string s = "abba";
    int k = 2;
    cout << solve(s, s.length()) << endl;

    s = "aabccbbcaa";
    k = 2;
    cout << solve(s, s.length()) << endl;
}
