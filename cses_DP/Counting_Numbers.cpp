//  Counting Numbers

#include<bits/stdc++.h>

using namespace std;
string aa;
int gn(string a, string b, int ii)
{
    if (ii==aa.size()-1)return 0;
    int pi=aa[ii]-'0';
    int ans=0;
    for (int i=pi; i<=9; i++)
    {
        if (i+'0'==a[ii-1]+'0')ans++;
        char temp=i+'0';
        if (a+temp<=b)gn(a+temp,b,ii+1);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string bb;
    cin>>aa>>bb;
    string a;
    char temp=aa[0];
    a.push_back(temp);
    cout<<gn(a,bb,1);
    return 0;
}
