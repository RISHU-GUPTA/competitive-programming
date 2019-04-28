#include<iostream>
#include<string>
using namespace std;
using namespace std; 
int countCommon(string s1, int n1, string s2, int n2) 
    {  int arr1[26] = { 0 }; 
        int arr2[26] = { 0 }; 
          int i, count = 0; 
        for (i = 0; i < n1; i++) 
            arr1[s1[i] - 'a']++; 
        for (i = 0; i < n2; i++) 
            arr2[s2[i] - 'a']++; 
      for (i = 0; i < 26; i++) 
            count += (min(arr1[i], arr2[i])); 
        return count; 
    } 
int main() 
{ int t;
cin>>t;
    string s1;
    string s2;
    for(int i=0;i<t;i++){
        cin>>s1>>s2;
        int n1 = s1.length(), n2 = s2.length(); 
    cout <<n1+n2-(2*countCommon(s1, n1, s2, n2))<<endl;  
    }
    return 0; 
} 
