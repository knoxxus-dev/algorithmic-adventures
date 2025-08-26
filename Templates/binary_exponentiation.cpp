long long binexp(long long base, long long exp, long long mod)
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
