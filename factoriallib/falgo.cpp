#include "falgo.h"

ll falgo::simple_recursion(ll n) {
    if (n == 0) return 1;
    return n * simple_recursion(n - 1);
}

ll falgo::fact_naive(ll n) {
    if (n <= 1) return 1;

    ll r1 = 1, r2 = 1, r3 = 1, r4 = 1;
    ll i;
    for (i = n; i > 4; i -= 4) {
        r1 *= i;
        r2 *= i - 1;
        r3 *= i - 2;
        r4 *= i - 3;
    }

    ll mult = i == 4 ? 24 : i == 3 ? 6 : i == 2 ? 2 : 1;
    return (r1 * r2) * (r3 * r4) * mult;
}
