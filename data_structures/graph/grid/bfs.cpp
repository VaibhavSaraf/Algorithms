#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
bool visited[1001][1001];
int dist[1001][1001];

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

void bfs(int srcX, int srcY)
{
    queue<pair<int, int>> q;
    q.push({srcX, srcY});
    visited[srcX][srcY] = true;
    dist[srcX][srcY] = 0;
    while (!q.empty())
    {
        int currX = q.front().first;
        int currY = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            if (isValid(currX + dx[i], currY + dy[i]))
            {
                int newX = currX + dx[i];
                int newY = currY + dy[i];
                dist[newX][newY] = dist[currX][currY] + 1;
                visited[newX][newY] = 1;
                q.push({newX, newY});
            }
        }
    }
}

int main()
{
    OJ; 
    cin >> n >> m; // n=rows, m=cols

    bfs(4, 2);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << dist[i][j] << " ";
        cout << endl;
    }
    return 0;
}