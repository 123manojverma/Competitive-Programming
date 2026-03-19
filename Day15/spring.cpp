#include<bits/stdc++.h>
#include <numeric>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        long long m;
        cin>>a>>b>>c>>m;
        long long lcm1=m/lcm(a,lcm(b,c));
        long long lcm2=m/lcm(a,b);
        long long lcm3=m/lcm(b,c);
        long long lcm4=m/lcm(a,c);
        long long a1=m/a;
        long long b1=m/b;
        long long c1=m/c;
        long long t1=lcm1*2;
        t1+=(lcm2-lcm1)*3+(lcm4-lcm1)*3;
        t1+=(a1-lcm2-lcm4+lcm1)*6;
        long long t2=lcm1*2;
        t2+=(lcm2-lcm1)*3+(lcm3-lcm1)*3;
        t2+=(b1-lcm2-lcm3+lcm1)*6;
        long long t3=lcm1*2;
        t3+=(lcm3-lcm1)*3+(lcm4-lcm1)*3;
        t3+=(c1-lcm3-lcm4+lcm1)*6;
        cout<<t1<<" "<<t2<<" "<<t3<<endl;
    }
}