#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;
using vll = vector<ll>;
using vs = vector<string>;
using vvll = vector<vll>;
#define INF 1e18
#define FOR(i, m, n) for (ll i = m; i < (ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define RFOR(i, m, n) for (ll i = n - 1; i >= (ll)m; --i)
#define RREP(i, n) RFOR(i, 0, n)
#define EACH(i, v) for (auto& i : v)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
#define REVERSE(v) reverse(ALL(v))
#define SORT(v) sort(ALL(v))
#define RSORT(v) sort(RALL(v))
#define SUM(v) accumulate(ALL(v), 0)
#define MAX(v) *max_element(ALL(v))
#define MAXI(v) distance(v.begin(), max_element(ALL(v)))
#define MIN(v) *min_element(ALL(v))
#define MINI(v) distance(v.begin(), min_element(ALL(v)))
template <typename T> void print(const vector<T>& v) {
    REP(i, v.size()) cout << v[i] << (i != (ll)v.size() - 1 ? ' ' : '\n');
}
template <typename T, typename S> void print(const pair<T, S>& p) {
    cout << p.first << ' ' << p.second << '\n';
}
template <typename T> void print(const T& x) { cout << x << '\n'; }
template <class Head, class... Tail>
void print(const Head& head, const Tail&... tail) {
    cout << head << ' ';
    print(tail...);
}
void yesno(bool flag, string yes = "Yes", string no = "No") {
    print((flag ? yes : no));
}
void input() {}
template <class Head, class... Tail> void input(Head& head, Tail&... tail) {
    cin >> head;
    input(tail...);
}
template <class T> bool chmin(T& a, T b) { return a > b && (a = b, true); }
template <class T> bool chmax(T& a, T b) { return a < b && (a = b, true); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(12);

    ll n, ans = 0;
    input(n);
    // vll an(n); REP(i, n) input(an[i]);
    print(ans);
}
