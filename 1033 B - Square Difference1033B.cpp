void solve()
{
    int a, b;
    cin >> a >> b;
    if(a - b > 1)
    {
        yn(0);
        return;
    }
    int n = a + b;
    for(int i = 2; i * i <= n; ++i)
    {
        if(n % i == 0)
        {
            yn(0);
            return;
        }
    }
    yn(1);
}
