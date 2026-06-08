#include<bits/stdc++.h>
using namespace std;

long long modInverse(long long a,long long m){
    if(m==1)return 0;
    long long m0=m,y=0,x=1;

    while(a>1){
        long long q=a/m,t=m;
        m=a%m,a=t;
        t=y;
        y=x-q*y;
        x=t;
    }
    if(x<0) x+=m0;
    return x;
}

int main(){
    long long n,p,w,d;
    cin>>n>>p>>w>>d;
    long long x ,y,z;
    long long g=__gcd(w,d);
    if(p%g!=0){
        cout<<-1;
        return 0;
    }
    // he win all the matches
    if(n*w<p){
        cout<<-1;
        return 0;
    }
    p/=g;
    w/=g;
    d/=g;

    // draw
    y=((p%w)*modInverse(d,w))%w;
    x=(p-y*d)/w;
    if(x+y>n){
        cout<<-1;
        return 0;
    }
    if(x<0){
        cout<<-1;
        return 0;
    }
    z=n-(x+y);
    cout<<x<<" "<<y<<" "<<z;
}