//imp function used in this ques

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int freq=count(arr.begin(),arr.end(),1);
    arr.erase(arr.begin()+freq);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}