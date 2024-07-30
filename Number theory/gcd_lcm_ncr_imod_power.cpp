ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

ll power(ll base, ll exponent) {
    ll result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
}

int gcdExtended(int a, int b, int* x, int* y) {
    if (a == 0) {
        *x = 0, *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}

ll iMod(ll a, ll m) {
    int x, y;
    int g = gcdExtended(a, m, &x, &y);
    if (g != 1) return 0;
    else {
        ll res = (x % m + m) % m;
        return res;
    }
}

ll nCr(int n, int r) {
    if (r > n) {
        return 0;
    }
    if (r > n - r) {
        r = n - r;
    }
    ll ans = 1;
    for (int i = 1; i <= r; i++) {
        ans *= (n - i + 1);
        ans %= MOD;
        ans *= iMod(i, MOD);
        ans %= MOD;
    }
    return ans;
}
