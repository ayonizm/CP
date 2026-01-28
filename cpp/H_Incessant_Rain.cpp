#include <bits/stdc++.h>
using namespace std;

#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec vector
#define pii pair<int, int>
#define se second
#define fi first
#define pb push_back
#define maxel(v) *max_element(v.begin(), v.end())
#define minel(v) *min_element(v.begin(), v.end())
#define yes cout << "YES\n";
#define no cout << "NO\n";

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const ll mod = 1e9 + 7;
const ll mod2 = 1e9 + 9;
const ll mod3 = 998244353;
const double pi = 3.141592653589793238;
const long double EPS = 1e-9;
const int MAXN = 1e5 * 5;
const int LOGN = __lg(MAXN) + 1;
static const int INF = 0x3f3f3f3f;

struct Node
{
    Node *l, *r;
    int sz, pos, pri, val, mx, mn, best, lz;
} pool[600005];

int pcnt;

int rd()
{
    return (rand() << 16) ^ rand();
}

Node *newNode(int p, int v)
{
    Node *t = &pool[pcnt++];
    t->l = t->r = nullptr;
    t->sz = 1;
    t->pos = p;
    t->pri = rd();
    t->val = t->mx = t->mn = v;
    t->best = 0;
    t->lz = 0;
    return t;
}

inline void apply(Node *t, int v)
{
    if (!t)
        return;
    t->val += v;
    t->mx += v;
    t->mn += v;
    t->lz += v;
}

inline void pull(Node *t)
{
    t->sz = 1;
    t->mx = t->val;
    t->mn = t->val;
    t->best = 0;
    if (t->l)
    {
        t->sz += t->l->sz;
        t->mx = max(t->mx, t->l->mx);
        t->mn = min(t->mn, t->l->mn);
        t->best = max(t->best, t->l->best);
    }
    if (t->l)
        t->best = max(t->best, t->l->mx - t->val);
    int mxL = t->val;
    if (t->l)
        mxL = max(mxL, t->l->mx);
    if (t->r)
    {
        t->sz += t->r->sz;
        t->mx = max(t->mx, t->r->mx);
        t->mn = min(t->mn, t->r->mn);
        t->best = max(t->best, t->r->best);
        t->best = max(t->best, mxL - t->r->mn);
    }
}

inline void push(Node *t)
{
    if (t && t->lz)
    {
        apply(t->l, t->lz);
        apply(t->r, t->lz);
        t->lz = 0;
    }
}

Node *merge(Node *a, Node *b)
{
    if (!a || !b)
        return a ? a : b;
    if (a->pri < b->pri)
    {
        push(a);
        a->r = merge(a->r, b);
        pull(a);
        return a;
    }
    else
    {
        push(b);
        b->l = merge(a, b->l);
        pull(b);
        return b;
    }
}

void split(Node *t, int key, Node *&l, Node *&r)
{
    if (!t)
    {
        l = r = nullptr;
        return;
    }
    push(t);
    if (t->pos < key)
    {
        split(t->r, key, t->r, r);
        l = t;
    }
    else
    {
        split(t->l, key, l, t->l);
        r = t;
    }
    pull(t);
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    pcnt = 0;
    static Node *root[300005];
    static multiset<int> ms;
    static multiset<int>::iterator it[300005];
    ms.clear();

    for (int x = 1; x <= n; x++)
    {
        root[x] = nullptr;
        it[x] = ms.insert(0);
    }

    static vec<int> pos[300005];
    for (int x = 1; x <= n; x++)
        pos[x].clear();
    for (int i = 1; i <= n; i++)
    {
        pos[a[i]].pb(i);
    }

    for (int x = 1; x <= n; x++)
    {
        if (pos[x].empty())
            continue;
        for (int i = 0, sz = pos[x].size(); i < sz; i++)
        {
            int p = pos[x][i];
            int f = p - 2 * (i + 1);
            Node *nd = newNode(p, f);
            root[x] = merge(root[x], nd);
        }
        int M = root[x]->best + 1;
        int k = M >> 1;
        ms.erase(it[x]);
        it[x] = ms.insert(k);
    }

    vector<int> ans;
    ans.reserve(q);

    while (q--)
    {
        int i, xn;
        cin >> i >> xn;
        int xo = a[i];
        if (xo != xn)
        {
            ms.erase(it[xo]);
            Node *l, *m, *r;
            split(root[xo], i, l, m);
            split(m, i + 1, m, r);
            apply(r, +2);
            root[xo] = merge(l, r);
            int M1 = root[xo] ? root[xo]->best + 1 : 0;
            int k1 = M1 >> 1;
            it[xo] = ms.insert(k1);
            ms.erase(it[xn]);
            split(root[xn], i, l, r);
            apply(r, -2);
            int idx = (l ? l->sz : 0) + 1;
            int f2 = i - 2 * idx;
            Node *nd = newNode(i, f2);
            root[xn] = merge(merge(l, nd), r);
            int M2 = root[xn]->best + 1;
            int k2 = M2 >> 1;
            it[xn] = ms.insert(k2);
            a[i] = xn;
        }
        ans.pb(*ms.rbegin());
    }

    for (int v : ans)
        cout << v << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--)
    {
        solve();
    }
    return 0;
}
