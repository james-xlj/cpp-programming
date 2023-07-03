#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
//	int a,b,c,d,a2;
//	cout<<"请输入一个三位数：";
//	cin>>a;
//	b=a/100;
//	c=a%100/10;
//	d=a%10;
//	cout<<c<<d<<b;
	
//	double c,s,b;
//	c=20;
//	s=c*20/100;
//	cin>>b;
//	s+=b;
//	c+=b;
//	cout<<s/c;

//	int a;
//	cin>>a;
//	if(a>=60){
//		cout<<"及格";
//	}
//	
//	char a,b;
//	cin>>a;
//	cin>>b;
//	cout<<int(a)<<"-"<<int(b)<<"="<<a-b;
//
//	int a,b;
//	cin>>a>>b;
//	if(a>b&&a!=0){
//		cout<<a/b;
//	}
//	else{
//		cout<<b/a;
//	} 
//	
	int m;
	cin>>m;
	if(m%2==1&&m>21&&m<=3131){
		cout<<"明明很喜欢";
	}
	else if(m<3131&&m>21||m%2==1){
		cout<<"亮亮很喜欢"; 
	}
	else if((m>3131||m<21)&&m%2!=1){
		cout<<"天天很喜欢"; 
	}
	return 0;
}
