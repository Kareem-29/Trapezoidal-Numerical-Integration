#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

float F(float X){
	float F=exp(X)/X;
	return F;
}

int main(){
	float a,b,h,n,sum=0,T,Ex,Er;
	cout<<"Enter the value of a "<<endl;
	cin>>a;
	cout<<"Enter the value of b "<<endl;
	cin>>b;
	n=1000;
	h=(b-a)/n;
	for(float i=a+h;i<b;i+=h){
		sum+=F(i);
	}
	Ex=(h/2)*(F(a)+F(b)+(2*sum));
	
	cout<<"enter the number of elements "<<endl;
	cin>>n;
	cout<<setw(20)<<"n";
	cout<<setw(20)<<"F(X)";
	cout<<setw(20)<<"error"<<endl;
	
	while(n<=100){
	sum=0;
	h=(b-a)/n;
	for(float i=a+h;i<b;i+=h){
		sum+=F(i);
	}
	T=(h/2)*(F(a)+F(b)+(2*sum));
	Er=Ex-T;
	Er=fabs(Er);
	cout<<setw(20)<<n<<setw(20)<<setprecision(5)<<T<<setw(20)<<Er<<endl;
	n+=5;
	}
	
	
}
