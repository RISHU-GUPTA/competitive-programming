#include <iostream>
using namespace std;
int main() {
string com;
cin>>com;
int x=0;
int y=0;
int n=com.length();
for(int i=0;i<n;i++){
    switch(com[i]){
        case 'L':
        x=x-1;
        break;
        case 'R':
        x=x+1;
        break;
        case 'U':
        y=y+1;
        break;
        case 'D':
        y=y-1;
    }
}

cout<<x<<" "<<y;
}
