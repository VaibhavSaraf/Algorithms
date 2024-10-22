#include <bits/stdc++.h>
using namespace std;
int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
int vis[10][10], dist[10][10];
int targetX, targetY;

bool isValid(int x, int y)
{
    if (x < 1 || x > 8 || y < 1 || y > 8)
        return false;

    if (vis[x][y] == 1)
        return false;

    return true;
}

int BFS(int x, int y)
{
    queue<pair<int, int>> q;
    dist[x][y] = 0;
    vis[x][y] = 1;
    q.push({x, y});

    if (x == targetX && y == targetY)
        return dist[x][y];

    while (!q.empty())
    {
        int curr_x = q.front().first;
        int curr_y = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++)
            if (isValid(curr_x + dx[i], curr_y + dy[i]))
            {
                x = curr_x + dx[i];
                y = curr_y + dy[i];

                dist[x][y] = dist[curr_x][curr_y] + 1;
                vis[x][y] = 1;
                q.push({x, y});

                if (x == targetX && y == targetY)
                    return dist[x][y];
            }
    }
}

int getX(char a)
{
    return a - 'a' + 1;
}

int main()
{
    int x, y, q;
    cin >> q;

    while (q--)
    {
        char a, b;

        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
                vis[i][j] = 0;
        }

        cin >> a >> b;
        x = getX(a);
        y = b - '0';

        cin >> a >> b;
        targetX = getX(a);
        targetY = b - '0';

        cout << BFS(x, y) << endl;
    }
}
