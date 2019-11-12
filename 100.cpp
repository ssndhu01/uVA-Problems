#include <iostream>
using namespace std;

int main() {
	unsigned long long int i,temp, m,n,max,count;
	while(cin>>m >>n){
	    max = 0;
	    if (m>=n){
	        for (i=n;i<=m;i++){
	            count = 1;
	            temp = i;
	            while(temp>1){
	                if (temp & 1)
	                    temp = temp * 3 + 1;
	                else
	                    temp /= 2;
	               count++;
	            }
	            if (count > max)
	                max  = count;
	        }
	    }
	    else{
	        for (i=n;i>=m;i--){
	            count = 1;
	            temp = i;
	            while(temp>1){
	                if (temp & 1)
	                    temp = temp * 3 + 1;
	                else
	                    temp /= 2;
	               count++;
	            }
	            if (count > max)
	                max  = count;
	        }   
	        
	    }
	    cout<<m<<" "<<n<<" "<<max<<"\n";
	}
	return 0;
}
