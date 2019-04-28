#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
        int n=arr[i]%12;
        switch(n){
            case 1:
            cout<<arr[i]+11<<" "<<"WS"<<endl;
            break;
            case 2:
            cout<<arr[i]+9<<" "<<"MS"<<endl;
            break;
            case 3:
            cout<<arr[i]+7<<" "<<"AS"<<endl;
            break;
            case 4:
            cout<<arr[i]+5<<" "<<"AS"<<endl;
            break;
            case 5:
            cout<<arr[i]+3<<" "<<"MS"<<endl;
            break;
            case 6:
            cout<<arr[i]+1<<" "<<"WS"<<endl;
            break;
            case 7:
            cout<<arr[i]-1<<" "<<"WS"<<endl;
            break;
            case 8:
            cout<<arr[i]-3<<" "<<"MS"<<endl;
            break;
            case 9:
            cout<<arr[i]-5<<" "<<"AS"<<endl;
            break;
            case 10:
            cout<<arr[i]-7<<" "<<"AS"<<endl;
            break;
            case 11:
            cout<<arr[i]-9<<" "<<"MS"<<endl;
            break;
            default:
            cout<<arr[i]-11<<" "<<"WS"<<endl;
            break;
        }
    }
    
}
