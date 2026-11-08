//imp concept (vs code pe run nhi hoga iski codechef compiler pe run karo)
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x=count(s.begin(),s.end(),'&');
    int y=count(s.begin(),s.end(),'#');
    bool a=(x>0);
    bool b=(y>0);
    bool even=(s.size()%2==0);
    if(a && b && even) {
        cout<<"yes"<<endl;
    }
    else {
        cout<<"no"<<endl;
    }
    return 0;
}