//imp concept
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
    for(int i=n-5;i<n;i++){
        cout<<arr[i];
    if (i!=n) cout<<" ";
    }
}
