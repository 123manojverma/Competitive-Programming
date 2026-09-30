#include<bits/stdc++.h>
using namespace std;

int main(){
    int a1,a2,a3,b1,b2,b3,c1,c2,c3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>c1>>c2>>c3;
    int a=a1+2*a2+a3;
    int b=b1+2*b2+b3;
    int c=c1+2*c2+c3;
    if(a>=b && a>=c){
        cout<<1<<endl;
    }else if(b>=c && b>=a){
        cout<<2<<endl;
    }else{
        cout<<3<<endl;
    }
}