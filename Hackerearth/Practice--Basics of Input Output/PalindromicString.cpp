#include<iostream>
#include<string>
using namespace std;
int main(){
 string no;
 cin>>no;
 int k=0;
 int n=no.length();
 for(int i=0;i<n/2;i++){
     if(no[i]!=no[n-1-i]){
         k=1;
         break;
     }
 }
 if(k==1)
 cout<<"NO";
 else
 cout<<"YES";
}
