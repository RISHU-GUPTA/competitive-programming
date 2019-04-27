#include<iostream>
using namespace std;
int main(){
    int n,no;
    int arr[100001];
cin>>n;
for(int i=0;i<n;i++){
    cin>>no;
    arr[no]++;
}
int q;
cin>>q;
while(q--){
    int no2;
    cin>>no2;
    if(arr[no2]>0)
        cout<<arr[no2]<<endl;
    else
        cout<<"NOT PRESENT"<<endl;
    }
}
