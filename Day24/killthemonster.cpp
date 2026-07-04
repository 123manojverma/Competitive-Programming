#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long hc,dc,hm,dm,k,w,a;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;
        bool flag=false;
        for(int attack=0;attack<=k;attack++){
            long long health = hc + (k - attack) * a;
            long long damage = dc + attack * w;

            long long heroTurns = (hm + damage - 1) / damage;
            long long monsterTurns = (health + dm - 1) / dm;

            if (heroTurns <= monsterTurns) {
                flag = true;
                break;
            }
        }
        cout<<(flag?"YES":"NO")<<endl;
    }
}