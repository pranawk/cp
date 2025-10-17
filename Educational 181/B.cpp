#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){

      int a, b, k;
          cin >> a >> b >> k;
          int g = std::gcd(a, b);
          int need = max((a + k - 1) / k, (b + k - 1) / k);
          if (g >= need) cout << 1 << endl;
          else cout << 2 << endl;
    }
    return 0;
}
