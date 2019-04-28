#include<iostream>
using namespace std;
int main(){
    string rishu;
    cin>>rishu;
    int n=rishu.length();
    for(int i=0;i<n;i++){
        if(97<=rishu[i] && rishu[i]<=122){
            rishu[i]=rishu[i]-32;
        }
        else
        rishu[i]=rishu[i]+32;
    }
   for(int i=0;i<n;i++){
    cout<<rishu[i];
}
}
