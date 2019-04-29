#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=n;
	for(int i=1;i<n;i++)
	{
		a=a-i;
		if(a<=0)
		{
			cout<<"Patlu";
			return 0;
		}
		a=a-2*i;
		if(a<=0)
		{
			cout<<"Motu";
			return 0;
		}
	}
}
