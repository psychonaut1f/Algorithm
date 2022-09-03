// LINK: https://codeforces.com/contest/1454/problem/A
// NAME: A. Special Permutation, Codeforces - Codeforces Round #686 (Div. 3)
// DATE: 2022-09-03 21:01:08, LIMIT: 256 MB, 1000 ms

#include <bits/stdc++.h>

using namespace std;
/*----------------------------------*/
#ifdef github_fengwei2002
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
/*----------------------------------*/



int main() {
    cin.tie(nullptr), ios::sync_with_stdio(false);
    
    int tt = 0; 
    cin >> tt; 
    
    while (tt--) {
        int n = 0; 
        cin >> n; 
        
        vector<int> a(n, 0); 
        for (int i = 0; i < n / 2; i++) a[i] = n - i; 
        
        debug(a); 
        
        for (int i = n / 2; i < n; i++) a[i] = i + 1 - n / 2; 
         
        debug(a);
        
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " \n"[i == a.size() - 1];
        }
    }
    
    return 0;
}


/*

1454A填充数字使得下标和具体位置不同

*/