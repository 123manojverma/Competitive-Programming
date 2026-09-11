#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n);
        ll maxi=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxi=max(a[i],maxi);
        }
        maxi/=2;
        ll odd=0,e1=0,e2=0;
        for(int i=0;i<n;i++){
            if(a[i]%2!=0)odd++;
            else if((maxi-(a[i]/2))%2==0){
                e1++;
            }else{
                e2++;
            }
        }
        cout<<max({odd,e1,e2})<<endl;
    }
}