#include<iostream>
using namespace std;
//de qui duoi
int gcd(int m, int n){
	int r;
	if(m<n) return gcd(n,m);
	r=m%n;
	if(r==0)
		return n;
	else
		return gcd(n,r);
}
int main(){
	int m=11,n=2;
	int kq=gcd(m,n);
	cout<<kq;
}

