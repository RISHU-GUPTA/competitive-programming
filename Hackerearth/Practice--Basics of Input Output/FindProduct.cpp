#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i]; 
    }
    long pro=1;
    for(int i=0;i<n;i++){
       pro=(arr[i]*pro)%1000000007; 
       
    }
    cout<<pro;
    

}
