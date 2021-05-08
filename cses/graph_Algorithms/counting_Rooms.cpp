#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int n, m;

char grid[1001][1001];
bool visited[1001][1001];

bool isValid(int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > m)
        return false;
    if (visited[x][y] == true || grid[x][y] == '#')
        return false;
    return true;
}
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
void dfs(int x, int y)
{
    visited[x][y] = true;
    for (int i = 0; i < 4; i++)
        if (isValid(x + dx[i], y + dy[i]))
        {
            dfs(x + dx[i], y + dy[i]);
        }
}

int main()
{
    // OJ;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> grid[i][j];
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            if (grid[i][j] == '.' && visited[i][j] == false)
                dfs(i, j), cnt++;
    }
    cout << cnt;

    return 0;
}