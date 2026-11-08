//imp concept
#include<bits/stdc++.h>
using namespace std;
int main(){
   
        int sof=0;
        int sol=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }
        sof=arr[0]+arr[1];
        sol=arr[n-1]+arr[n-2];
        cout<<sof<<endl;
        cout<<sol<<endl;    
        
    
    return 0;
}