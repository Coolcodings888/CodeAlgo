//hcf.ccp
#include<bits/stdc++.h>
using namespace std;

int hcf(int a,int b){
	int small,big;
	if(a>=b){
		big=a;
		small = b;
	}else{
		big = b;
		small =a;
	}

	if(big%small==0){return small;}else{
		// int k = hcf(small,big%small);
		// return k;
		 return hcf(small,big%small);
	}
}

int main(){
	cout<<"Enter number of cases:";
	int t;
	cin>>t;

	while(t--){
		cout<<"Enter two numbers:";
		int a,b;
		cin>>a>>b;
        cout<<"here is the hcf of two:"<<hcf(a,b)<<endl;
	}

	return 0;
}