//imp concept

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int sum=0;
        int mn=1000000;
        int mx=-1000000;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            sum+=x;
            mn=min(mn,x);
            mx=max(mx,x);
        }
        double avg=(double)sum/m;
        cout<<mn<<" "<<mx<<" "<<sum<<" "<<fixed<<setprecision(1)<<avg<<endl;
    }
    return 0;
}