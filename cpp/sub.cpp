#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define test(t) \
    int t;      \
    cin >> t;   \
    while (t--)
#define MOD 1000000007
#define MOD1 998244353
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(vec) vec.begin(), vec.end()
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int
char board[8][8];
vector<vector<pair<int, int>>> vp;

bool issafe(int row, int column)
{
    for (int i = row; i >= 0; i--)
    {
        if (board[i][column] == 'Q')
            return false;
    }

    for (int i = row, j = column; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    for (int i = row, j = column; i >= 0 && j < 8; i--, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    for (int i = row; i < 8; i++)
    {
        if (board[i][column] == 'Q')
            return false;
    }

    for (int i = row, j = column; j < 8; j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    for (int i = row, j = column; j >= 0 && i < 8; i++, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    for (int i = row; i < 8; i++)
    {
        if (board[i][column] == 'Q')
            return false;
    }

    return true;
}

void khoj(int row, int column, vector<pair<int, int>> &v)
{
    if (column == 8)
    {
        if (v.size() == 8)
            vp.push_back(v);
        return;
    }

    for (int idx = row; idx < 8; idx++)
    {
        if (issafe(idx, column) && board[idx][column] == '.')
        {
            // cout << idx << column << endl;
            board[idx][column] = 'Q';
            v.push_back(make_pair(idx, column + 1));
            khoj(0, column + 1, v);
            v.pop_back();
            board[idx][column] = '.';
        }
        else if (board[idx][column] == 'Q')
        {
            v.push_back(make_pair(idx, column + 1));
            khoj(0, column + 1, v);
            v.pop_back();
        }
    }
    khoj(0, column + 1, v);
}

void solve()
{
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i + 1 == x && j + 1 == y)
                board[i][j] = 'Q';
            else
                board[i][j] = '-';
        }
    }

    vector<pair<int, int>> v;
    khoj(0, 0, v);
    cout << "SOLN       COLUMN" << endl;
    cout << "  " << "1 2 3 4 5 6 7 8" << endl;
    cout << endl;

    int count = 1;
    for (auto u : vp)
    {
        if (count <= 9)
            cout << ' ';
        cout << count++ << " : ";
        int space = 0;
        for (auto u1 : u)
        {
            if (space != 0)
            {
                cout << ' ';
            }
            cout << u1.first;
            space++;
        }
        cout << endl;
    }
    vp.clear();
}

int main()
{
    op();
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        solve();
        if (i != tc)
            cout << endl;
    }

    return 0;
}