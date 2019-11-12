#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	unsigned long long int a ,b;
	while(t--){
		cin>> a>>b;
		if (a < b)	
			cout <<"<\n";
		else if(a>b)
			cout << ">\n";
		else	
			cout<<"=\n";
	}
	return 0;
}
