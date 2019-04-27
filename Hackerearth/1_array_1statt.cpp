#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q,no,ct=0;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>no;
        for(int j=0;j<n;j++){
             if(no==arr[j]){
                 ct++;
             }
        }
        if(ct==0){
            cout<<"NOT PRESENT"<<endl;
        }
        else{
            cout<<ct<<endl;
        }
       ct=0;
        }
    return 0;
}
