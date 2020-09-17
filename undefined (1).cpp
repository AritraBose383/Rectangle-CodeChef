#include <iostream>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if (a==c && b==d || a==b && c==d || a==d && b==c)
	   cout<<"YES\n";
	   
	    else
	    cout<<"NO\n";
	}
	return 0;
}