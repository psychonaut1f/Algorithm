#pragma region HEAD
#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/dbg.h"
#else
#define dbg(...) 142857
#endif
struct __fastIO { __fastIO() { cin.tie(nullptr); ios::sync_with_stdio(false); }; } ___fastIO;
using int32 = int32_t; using int64 = long long; using int128 = __int128; using uint32 = unsigned; using uint64 = unsigned long long; using float64 = long double;
template <class T1> istream &operator>>(istream &cin, vector<T1> &a) { for (auto &x : a) cin >> x; return cin; }
template <class T1> istream &operator>>(istream &cin, valarray<T1> &a) { for (auto &x : a) cin >> x; return cin; }
template <class T1> basic_string<T1> operator*(const basic_string<T1> &s, int m) { auto r = s; m *= s.size(); r.resize(m); for (int i = s.size(); i < m; i++) r[i] = r[i - s.size()]; return r; }
istream &operator>>(istream &cin, int128 &x) { x = 0; static string s; cin >> s; for (char c : s) x = x * 10 + (c - '0'); return cin; }
ostream &operator<<(ostream &cout, int128 x) { static char s[60]; int tp = 1; s[0] = '0' + char(x % 10); while (x /= 10) s[tp++] = '0' + char(x % 10); while (tp--) cout << s[tp]; return cout; }
template <class T1, class T2> ostream &operator<<(ostream &cout, const pair<T1, T2> &a) { return cout << a.first << ' ' << a.second; }
template <class T1, class T2> ostream &operator<<(ostream &cout, const vector<pair<T1, T2>> &a) { for (auto &x : a) cout << x << '\n'; return cout; }
template <class T1> ostream &operator<<(ostream &cout, vector<T1> a) { int n = int(a.size()); if (!n) return cout; cout << a[0]; for (int i = 1; i < n; i++) cout << ' ' << a[i]; return cout; }
template <class T1> ostream &operator<<(ostream &cout, const valarray<T1> &a) { int n = int(a.size()); if (!n) return cout; cout << a[0]; for (int i = 1; i < n; i++) cout << ' ' << a[i]; return cout; }
template <class T1> ostream &operator<<(ostream &cout, const vector<valarray<T1>> &a) { int n = int(a.size()); if (!n) return cout; cout << a[0]; for (int i = 1; i < n; i++) cout << '\n' << a[i]; return cout; }
template <class T1> ostream &operator<<(ostream &cout, const vector<vector<T1>> &a) { int n = int(a.size()); if (!n) return cout; cout << a[0]; for (int i = 1; i < n; i++) cout << '\n' << a[i]; return cout; }
#define endl '\n'
#define print(...) cout << format(__VA_ARGS__)
#define println(...) cout << format(__VA_ARGS__) << '\n'
#pragma endregion HEAD




// -------------------------------------------------------------------

auto main() -> int32 {
   
   
   
   return 0;
}
// -------------------------------------------------------------------

/*

*/