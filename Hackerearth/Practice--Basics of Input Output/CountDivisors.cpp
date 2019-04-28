#include<iostream>
using namespace std;
int main(){
    int l,r,m;
    cin>>l>>r>>m;
  int  count=0;
    for(int i=l;i<=r;i++){
        if(i%m==0){
            count++;
        }
    }
    cout<<count;
}
