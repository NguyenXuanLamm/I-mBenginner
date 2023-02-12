#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	double x,A;
	cout<<" Chuong trinh tinh gia tri bieu thuc  A= (x^2+x+1)^n+(x^2-x+1)^n"<<endl;
	cout<<"  nhap x ";cin>>x;
	cout<<" \n nhap n ";cin>>n;
    	A=pow(x*x+x+1,n)+pow(x*x-x+1,n);
	cout<<"Gia tri bieu thuc A la"<<A;
}
