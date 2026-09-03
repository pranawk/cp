//  A. Petya and Java

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    if (s[0]=='-')
    {
        if ( s.size()<=4)
        {
            long long n=stoll(s);
            if (n>=-128)
            {
                cout<<"byte";
                return 0;
            }
        }
        if (s.size()<=6)
        {
            long long n=stoll(s);
            if (n>=-32768)
            {
                cout<<"short";
                return 0;
            }
        }
        if (s.size()<=11)
        {
            long long n=stoll(s);
            if (n>=-2147483648)
            {
                cout<<"int";
                return 0;
            }
        }
        if (s<="-9223372036854775808" && s.size()<=20){cout<<"long";return 0;}
        if (s.size()<=19){cout<<"long";return 0;}
        cout<<"BigInteger";
    }
    else
    {
        if ( s.size()<=3)
        {
            long long n=stoll(s);
            if (n<=127)
            {
                cout<<"byte";
                return 0;
            }
        }
        if (s.size()<=5)
        {
            long long n=stoll(s);
            if (n<=32767)
            {
                cout<<"short";
                return 0;
            }
        }
        if (s.size()<=10)
        {
            long long n=stoll(s);
            if (n<=2147483647)
            {
                // cout<<n;
                cout<<"int";
                return 0;
            }
        }
        if (s<="9223372036854775807" && s.size()<=19){cout<<"long";return 0;}
        if (s.size()<=18){cout<<"long";return 0;}
        cout<<"BigInteger";
    }
    return 0;
}
