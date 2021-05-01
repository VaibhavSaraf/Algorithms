#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
bool visited[1001][1001];
int n, m;
bool isValid(int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > m)
        return false;
    if (visited[x][y] == true)
        return false;
    return true;
}

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
void dfs(int x, int y)
{
    visited[x][y] = 1;
    cout << x << " " << y << "\n";
    for (int i = 0; i < 4; i++)
    {
        if (isValid(x + dx[i], y + dy[i]))
            dfs(x + dx[i], y + dy[i]);
    }

    // if (isValid(x - 1, y)) // up
    // {
    //     dfs(x - 1, y);
    // }
    // if (isValid(x, y + 1)) // right
    // {
    //     dfs(x, y + 1);
    // }
    // if (isValid(x + 1, y)) // down
    // {
    //     dfs(x + 1, y);
    // }
    // if (isValid(x, y - 1)) // left
    // {
    //     dfs(x, y - 1);
    // }
}

int main()
{
    OJ;
    cin >> n >> m; // n=rows, m=cols
    // for (int i = 1; i <= n; i++)
    //     for (int j = 1; j <= m; j++)
    //         grid[i][j]=;

    dfs(1, 1);

    return 0;
}