//  C. Hamburgers

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int nb,ns,nc;
    cin>>nb>>ns>>nc;
    int pb,ps,pc;
    cin>>pb>>ps>>pc;
    long long r;
    cin>>r;
    int cb=0, cs=0, cc=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='B')cb++;
        if(s[i]=='S')cs++;
        if(s[i]=='C')cc++;
    }
    //cout<<cb<<" "<<cs<<" "<<cc<<endl;
    int total_p=(cb*pb+cs*ps+cc*pc);
    long long t_cnt=0;
    while((cb==0 || nb>=cb)&&(cs==0 || ns>=cs)&&(cc==0 || nc>=cc)){
        t_cnt++;
        nb-=cb;
        ns-=cs;
        nc-=cc;
    }
    if(r>=(cs-ns)*ps && (cb!=0||cc!=0) && cs!=0 && nb>=cb && nc>=cc){
        r-=(cs-ns)*ps;
        t_cnt++;
        nb-=cb; nc-=cc;ns=0;
        while(r>=cs*ps && nb>=cb && nc>=cc){
            r-=cs*ps; nb-=cb; nc-=cc;t_cnt++;
        }
    }
    if(r>=(cc-nc)*pc && (cb!=0||cs!=0) && cc!=0 && nb>=cb && ns>=cs){
        r-=(cc-nc)*pc;
        t_cnt++;
        nb-=cb; ns-=cs;nc=0;
        while(r>=cc*pc && nb>=cb && ns>=cs){
            r-=(cc*pc); nb-=cb; ns-=cs;t_cnt++;
        }
    }
    if(r>=(cb-nb)*pb && (cc!=0||cc!=0) && cb!=0 && ns>=cs && nc>=cc){
        r-=(cb-nb)*pb;
        t_cnt++;
        nc-=cc; ns-=cs;nb=0;
        while(r>=cb*pb && nc>=cc && ns>=cs){
            r-=cb*pb; nc-=cc; ns-=cs;t_cnt++;
        }
    }
    if(r>=((cb-nb)*pb+(cs-ns)*ps)  && cb-nb>0 && cs-ns>0&& cc!=0 && nc>=cc){
        r-=((cb-nb)*pb+(cs-ns)*ps);
        t_cnt++;
        nc-=cc;
        nb=0;ns=0;
        while(r>=((cb-nb)*pb+(cs-ns)*ps) && nc>=cc){
            r-=((cb-nb)*pb+(cs-ns)*ps);
            t_cnt++;
            nc-=cc;
        }

    }
    if(r>=((cc-nc)*pc+(cs-ns)*ps) && cc-nc>0 && cs-ns>0 && cb!=0 && nb>=cb){
        r-=((cc-nc)*pc+(cs-ns)*ps);
        t_cnt++;
        nb-=cb;
        nc=0;ns=0;
        while(r>=((cc-nc)*pc+(cs-ns)*ps) && nb>=cb){
            r-=((cc-nc)*pc+(cs-ns)*ps);
            t_cnt++;
            nb-=cb;
        }
    }
    if(r>=((cb-nb)*pb+(cc-nc)*pc) && cc-nc>0 && cb-nb>0&& cs!=0 && ns>=cs){
        r-=((cb-nb)*pb+(cc-nc)*pc);
        t_cnt++;
        ns-=cs;
        nb=0;nc=0;
        while(r>=((cb-nb)*pb+(cc-nc)*pc) && ns>=cs){
            r-=((cb-nb)*pb+(cc-nc)*pc);
            t_cnt++;
            ns-=cs;
        }
    //cout<<t_cnt<<endl<<r<<endl;

    }
    if(cb!=0 && nb!=0 && cb-nb>0){
        if(r>=(cb-nb)*pb +cc*pc + cs*ps){
            r-=(cb-nb)*pb +cc*pc + cs*ps;
            t_cnt++;
        }
    }
    if(cc!=0 && nc!=0&& cc-nc>0){
        if(r>=(cc-nc)*pc +cb*pb + cs*ps){
            r-=(cc-nc)*pc +cb*pb + cs*ps;
            t_cnt++;
        }
    }
    if(cs!=0 && ns!=0&& cs-ns>0){
        if(r>=(cs-ns)*ps +cc*pc + cb*pb){
            r-=(cs-ns)*ps +cc*pc + cb*pb;
            t_cnt++;
        }
    }
    t_cnt+=1ll*(r/(total_p));
    cout<<t_cnt<<endl;
    return 0;
}