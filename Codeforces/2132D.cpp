#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define pb push_back

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

ll dp[16][2];

long long binexp(long long base, long long exp, long long mod = LLONG_MAX)
{
    base %= mod;
    long long res = 1;
    while (exp > 0)
    {
        if (exp & 1)
        {
            res = res * base % mod;
        }
        base = base * base % mod;
        exp >>= 1;
    }
    return res;
}

ll count(string x, ll n, ll limit)
{
    if (limit == 0)
    {
        return binexp(10, n);
    }
    if (n == 0)
    {
        return 1;
    }
    ll numbers = 0;
    ll ub = x[x.size() - n] - '0';
    for (ll i = 0; i <= ub; i++)
    {
        numbers += count(x, n - 1, limit & (i == ub));
    }
    return numbers;
}

ll sum_of_sum_of_digits(string x, ll n, ll limit)
{
    if (n == 0)
    {
        return 0;
    }
    if (dp[n][limit] != -1)
    {
        return dp[n][limit];
    }
    ll final_sum = 0;
    ll ub = limit ? x[x.size() - n] - '0' : 9;
    for (ll i = 0; i <= ub; i++)
    {
        final_sum += i * count(x, n - 1, limit * (i == ub)) + sum_of_sum_of_digits(x, n - 1, limit && (i == ub));
    }
    return dp[n][limit] = final_sum;
}

void sol()
{
    memset(dp, -1, sizeof(dp));
    ll k;
    cin >> k;
    ll len = 1;
    ll x = k;
    ll current = 9;
    while (x > 0)
    {
        x -= len * current;
        len++;
        current *= 10;
    }
    len--;
    current = 9;
    ll total = 0;
    for (ll i = 1; i < len; i++)
    {
        total += i * current;
        current *= 10;
    }
    k = k - total - 1;
    ll jump = k / len;
    ll shift = k % len;
    ll start = 1;
    for (ll i = 0; i < len - 1; i++)
    {
        start *= 10;
    }
    ll final_number;
    if (start != 1)
    {
        final_number = start + jump;
    }
    else
    {
        final_number = jump + 1;
    }
    string final_number_string = to_string(final_number - 1);
    ll ans = sum_of_sum_of_digits(final_number_string, final_number_string.size(), 1);
    final_number_string = to_string(final_number);
    for(int i = 0; i <= shift; i++) {
        ans += final_number_string[i] - '0';
    }
    cout << ans << endl;
}

int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
        sol();
    return 0;
}