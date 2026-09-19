#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        priority_queue<ll>pq;
        ll sum=0;
        for(int i=0;i<m-1;i++){
            pq.push(a[i]);
            sum+=a[i];
        }
        ll score=LONG_LONG_MIN;
        for(int i=m-1;i<n;i++){
            ll points=(ll) m*a[i]-sum;
            score=max(score,points);
            sum+=a[i];
            pq.push(a[i]);
            sum-=pq.top();
            pq.pop();
        }
        cout<<score<<endl;
    }
    
}