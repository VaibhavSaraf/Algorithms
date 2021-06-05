#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

void insert(stack<int> &st, int tmp)
{
    if (st.empty() || st.top() >= tmp)
    {
        st.push(tmp);
        return;
    }

    int val = st.top();
    st.pop();
    insert(st, tmp);
    st.push(val);
}

void sortStack(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int tmp = st.top();
    st.pop();
    sortStack(st);
    insert(st, tmp);
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
    sortStack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}