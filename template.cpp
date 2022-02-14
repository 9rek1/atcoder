#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;
using vs = vector<string>;
using vb = vector<bool>;
using vvl = vector<vl>;
using vvs = vector<vs>;
using vvb = vector<vb>;
using pl = pair<ll, ll>;
const ll INF = 1e18;
#define PB push_back
#define FOR(i, m, n) for (ll i = m; i < (ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define RFOR(i, m, n) for (ll i = n - 1; i >= (ll)m; --i)
#define RREP(i, n) RFOR(i, 0, n)
#define EACH(e, v) for (auto& e : v)
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
#define CONCAT(a, b) a.insert(a.end(), ALL(b))
void yesno(const bool& flag, const string& yes = "Yes",
           const string& no = "No") {
    cout << (flag ? yes : no) << '\n';
}
template <typename T> void print(const T& e) { cout << e << '\n'; }
template <typename T> void print(const vector<T>& v) {
    for (ll i = 0; i < (ll)v.size(); ++i) {
        cout << v[i];
        cout << (i == (ll)v.size() - 1 ? '\n' : ' ');
    }
}
template <typename T, typename S> void print(const pair<T, S>& p) {
    cout << p.first << ' ' << p.second << '\n';
}
template <class Head, class... Tail>
void print(const Head& head, const Tail&... tail) {
    cout << head << ' ';
    print(tail...);
}
void input() {}
template <class Head, class... Tail> void input(Head& head, Tail&... tail) {
    cin >> head;
    input(tail...);
}
template <typename T> bool chmin(T& a, const T& b) {
    return a > b && (a = b, true);
}
template <typename T> bool chmax(T& a, const T& b) {
    return a < b && (a = b, true);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(12);

    ll n, ans = 0;
    input(n);
    // vl an(n); REP(i, n) input(an[i]);
    print(ans);
}
