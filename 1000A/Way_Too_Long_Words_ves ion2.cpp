#include <iostream>
#include<string>
using namespace std;

int main() {
	 int t;
	 cin>>t;

	 while(t--){
		 string s;
		 cin>>s;
		int x=s.length();
		if(x<=10){
			cout<<s<<endl;
		}
		else
		{
			cout<<s[0]<<x-2<<s[x-1]<<endl;

		}




	 }
	return 0;
}
