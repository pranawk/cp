//  A. Min Max Game

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n,temp,c1=0,c0=0;
        cin>>n;
        for (int i=0; i<n; i++){cin>>temp; temp==0 ? c0++ : c1++;}
        cout<<(c1>=c0 ? "Bessie" : "Elsie")<<endl;
    }
    return 0;
}
