//  A. Recycling Bottles

#include<bits/stdc++.h>

using namespace std;
double discal(double ai, double aj, double ri, double rj)
{
    return sqrt(pow(ai-ri,2)+pow(aj-rj,2));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double ai,aj,bi,bj,ri,rj;
    cin>>ai>>aj>>bi>>bj>>ri>>rj;
    int n;
    cin>>n;
    vector<pair<double,double>>bottles(n);
    for (int i=0; i<n; i++)cin>>bottles[i].first>>bottles[i].second;
    vector<bool>visited(n,false);
    int mia=-1;
    double ms=DBL_MAX, ma;
    double ans=0;
    for (int i=0; i<n; i++)
    {
        double d_r=discal(bottles[i].first,bottles[i].second,ri,rj);
        double d_a=discal(bottles[i].first,bottles[i].second,ai,aj);
        if (d_a-d_r<ms){mia=i;ms=d_a-d_r; ma=d_a;}
    }
    ans+=ma;
    visited[mia]=true;
    // cout<<mia<<endl;
    ms=DBL_MAX;
    for (int i=0; i<n; i++)
    {
        if (visited[i]==true)continue;
        double d_r=discal(bottles[i].first,bottles[i].second,ri,rj);
        double d_b=discal(bottles[i].first,bottles[i].second,bi,bj);
        if (d_b-d_r<ms){mia=i;ms=d_b-d_r; ma=d_b;}
    }
    ans+=ma;
    visited[mia]=true;
    // cout<<mia<<endl;
    for (int i=0; i<n; i++)
    {
        if (visited[i]==true)ans+=discal(bottles[i].first,bottles[i].second,ri,rj);
        else ans+=2*discal(bottles[i].first,bottles[i].second,ri,rj);
    }
    //****************************************
    //****************************************
    vector<bool>visited2(n,false);
    mia=-1;
    double ms2=DBL_MAX,ma2;
    double ans2=0;
    for (int i=0; i<n; i++)
    {
        double d_r=discal(bottles[i].first,bottles[i].second,ri,rj);
        double d_b=discal(bottles[i].first,bottles[i].second,bi,bj);
        if (d_b-d_r<ms2){mia=i;ms2=d_b-d_r; ma2=d_b;}
    }
    ans2+=ma2;
    visited2[mia]=true;
    ms2=DBL_MAX;
    for (int i=0; i<n; i++)
    {
        if (visited2[i]==true)continue;
        double d_r=discal(bottles[i].first,bottles[i].second,ri,rj);
        double d_a=discal(bottles[i].first,bottles[i].second,ai,aj);
        if (d_a-d_r<ms2){mia=i;ms2=d_a-d_r; ma2=d_a;}
    }
    ans2+=ma2;
    visited2[mia]=true;
    for (int i=0; i<n; i++)
    {
        if (visited2[i]==true)ans2+=discal(bottles[i].first,bottles[i].second,ri,rj);
        else ans2+=2*discal(bottles[i].first,bottles[i].second,ri,rj);
    }
    //*********************************
    //*********************************
    vector<bool>visited3(n,false);
    int mia3=-1;
    double ms3=DBL_MAX, ma3;
    double ans3=0;
    ms3=DBL_MAX;
    for (int i=0; i<n; i++)
    {
        if (visited3[i]==true)continue;
        double d_r=discal(bottles[i].first,bottles[i].second,ri,rj);
        double d_b=discal(bottles[i].first,bottles[i].second,bi,bj);
        if (d_b-d_r<ms3){mia3=i;ms3=d_b-d_r; ma3=d_b;}
    }
    ans3+=ma3;
    visited3[mia3]=true;
    // cout<<mia3<<endl;
    for (int i=0; i<n; i++)
    {
        if (visited3[i]==true)ans3+=discal(bottles[i].first,bottles[i].second,ri,rj);
        else ans3+=2*discal(bottles[i].first,bottles[i].second,ri,rj);
    }
    //************************************
    //************************************

    vector<bool>visited4(n,false);
    int mia4=-1;
    double ms4=DBL_MAX, ma4;
    double ans4=0;
    for (int i=0; i<n; i++)
    {
        double d_r=discal(bottles[i].first,bottles[i].second,ri,rj);
        double d_a=discal(bottles[i].first,bottles[i].second,ai,aj);
        if (d_a-d_r<ms4){mia4=i;ms4=d_a-d_r; ma4=d_a;}
    }
    ans4+=ma4;
    visited4[mia4]=true;
    for (int i=0; i<n; i++)
    {
        if (visited4[i]==true)ans4+=discal(bottles[i].first,bottles[i].second,ri,rj);
        else ans4+=2*discal(bottles[i].first,bottles[i].second,ri,rj);
    }
    //**************************************
    //**************************************
    cout<<fixed<<setprecision(12)<<min(ans,min(ans2,min(ans3,ans4)));
    return 0;
}