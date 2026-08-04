#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long gcd=__gcd(arr[0],arr[1]);
        for(int i=2;i<n;i++){
            gcd=__gcd(gcd,arr[i]);
        }
        if(gcd!=1){
            cout<<n<<endl;
            continue;
        }
        vector<long long>pref(n,0),suf(n,0);
        pref[0]=arr[0];
        for(int i=1;i<n;i++){
            pref[i]=__gcd(pref[i-1],arr[i]);
        }
        suf[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=__gcd(suf[i+1],arr[i]);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            int l=i>0?pref[i-1]:0;
            int r=i<n-1?suf[i+1]:0;
            gcd=__gcd(l,r);
            if(gcd!=1){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }   
}