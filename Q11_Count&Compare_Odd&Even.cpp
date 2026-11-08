//imp concept

#include<bits/stdc++.h>
using namespace std;
int main(){
    int EvenCount=0;
    int OddCount=0;
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2==0) EvenCount++;
        else OddCount++;
    }

    if(EvenCount>OddCount) cout<<"Even"<<endl;
    else if (EvenCount==OddCount) cout<<"Tie"<<endl;
    else cout<<"Odd"<<endl;
}




// Better Approach
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int odd = 0, even = 0;

//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;

//         if (x % 2 == 0)
//             even++;
//         else
//             odd++;
//     }

//     if (odd > even)
//         cout << "Odd";
//     else if (even > odd)
//         cout << "Even";
//     else
//         cout << "Tie";

//     return 0;
// }