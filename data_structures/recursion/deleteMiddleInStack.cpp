#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

void deleteMiddle(stack<int> &st, int k)
{
    if (st.size() == k + 1)
    {
        cout << st.top() << " deleted\n";
        st.pop();
        return;
    }
    int tmp = st.top();
    st.pop();
    deleteMiddle(st, k);
    st.push(tmp);
}
int main()
{
    OJ;
    int n;
    cin >> n;
    stack<int> st;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    int k = st.size() / 2;
    deleteMiddle(st, k);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}