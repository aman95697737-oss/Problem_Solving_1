#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int salary=0;
        int m;
        cin>>m;
        int arr[m];
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            salary=salary+x;

        }
        cout<<salary<<endl;
    }
}