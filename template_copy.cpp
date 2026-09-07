#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 998244353

ll binpow(ll xf, ll xs) {
    ll res = 1;
    xf = xf % mod;                     
    while (xs > 0) {
        if (xs & 1) {
            res = (res * xf) % mod;   
        }
        xf = (xf * xf) % mod;           
        xs >>= 1;
    }
    return res;
}

struct mixhash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}