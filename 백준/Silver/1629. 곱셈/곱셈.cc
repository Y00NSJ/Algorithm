#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll bpow(ll a, ll b, ll n) {
  if (b == 1) return a % n;

  ll val = bpow(a, b/2, n);
  val = val * val % n; // b가 7이면 val = a^6 mod m
  if (b % 2 == 0) return val;
  return val * a % n;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c;
  cin >> a >> b >> c;

  cout << bpow(a, b, c);
}