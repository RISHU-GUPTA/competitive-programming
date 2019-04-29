#include<iostream>
using namespace std;
int main(){
    int t,n,a=0,b=7;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
      char res=(b-n)>=(n-a)?'A':'B';
      cout<<res<<endl;
        if(res=='B')
        b=n;
        else
        a=n;
    }
}
