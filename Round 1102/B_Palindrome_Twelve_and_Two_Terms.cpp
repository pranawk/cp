//  B. Palindrome, Twelve and Two Terms

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long n;
        cin>>n;
        if (n== 10) {
              cout << -1 << endl;
              continue;
        }
        int r = n % 12;
        long long a;
        if (r <= 9)a=r;
        else if (r == 10)a = 22;
        else {
            a = 11;}
         long long b = n - a;
        cout<<a<<" "<<b<< endl;
    }
    return 0;
}