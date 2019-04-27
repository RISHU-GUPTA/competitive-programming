#include<iostream>
using namespace std;
int main() {
	int num;
	cin>>num;
	for(int i=2;i<=num;i++){
	    int k=0;
	  for(int j=2;j<=(i/2);j++){
	      if(i%j==0){
	          k=1;
	         break;
	      }
	  }
	  if(k==0 && num!=1){
	      cout<<i<<" ";	  }
	}
}
