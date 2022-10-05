#include <iostream>
using namespace std;

int main() {
	long int t,n;
	cin>>t;
	for(long long int i=0;i<t;++i)
	{cin>>n;
      if(n<4)
         cout<<"-1";
      else
      { for(long long int j=n;j>4;--j)
          cout<<j<<" ";
        cout<<"1"<<" "<<"2"<<" "<<"3"<<" "<<"4";
          
      }
      cout<<"\n";
	    
	}
	return 0;
}