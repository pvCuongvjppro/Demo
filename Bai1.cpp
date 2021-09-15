#include<iostream>
using namespace std;

void tinh(int n){
	cout<<"nhap n: "; cin>>n;
	int i, sum=0;
	for(i=0;i<=n;i++){
		sum += i;
	}
	cout<<"Tong cac so la: "<<sum<<endl;
}
int main(){
	int n;
	
	tinh(n);
}

