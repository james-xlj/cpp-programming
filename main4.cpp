#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
//	int a;
//	a=120;
//	cout<<a<<endl;
//	a=a+5;
//	cout<<a<<endl;
//	a=a+5;
//	cout<<a;
//	
//	int i;
//	i=0;
//	i=i+1;
//	i=i+2;
//	i=i+3;
//	i=i+4;
//	cout<<i;

//	int z;
//	z=1;
//	z=z*2;
//	z*=2;
//	z*=2;
//	z=z*2;
//	z=z*2;
//	cout<<z;
	
//	int t;
//	t=30;
//	t=t/2-1
//	t/=2;
//	t-=1;
//	t=t/2-1
//	cout<<t;

//	int s;
//	s=12;
//	s/=2;
//	s/=2;
//	cout<<s;
	
//	int a,b,t;
//	a=4;
//	b=5;
//	swap(a,b);
//	cout<<a<<b;	
//	
	int a,b,t,c;
	a=5;
	b=a-2;
	t=b*3;
	c=t+a*10+b*100;
	cout<<c;
	return 0;
}











//变量自增（变量在自身基础上加1）   i=i+1   i++      ++i
//                                     不等于i=i++   不等于 i=++i 
//i++先使用，后增加  和  ++i，先增加后使用; 

//#include<iostream>
//using namespace std;
//int main(){
//    int i;
//    i=10;
//    cout<<i<<endl;
//    cout<<i++<<endl;
//    cout<<++i<<endl;
//    return 0;
// }

//#include<iostream>
//using namespace std;
//int main(){
//    int h;
// h=2; 
// h=h++;   
// cout<<h<<endl;  
// h=h+1;   
// cout<<h; 
//    return 0;
//}  
//
////a=b++   先b赋值给a，再b+1 
////1、先将b赋值给一个临时变量temp=b;
////2、b自增b=b+1
////3、将临时变量temp的值传给a 
////所以：
//#include<iostream>
//using namespace std;
//int main(){
//    int h;
// h=2; 
// h=h++;   //先将h的值传给临时变量temp，然后h自增1.最后将temp的值传给变量h   h为2 
//    //h++,在内部h++先把h的值放到一个内存地址中，然后h+1 
// cout<<h<<endl;  
// h=h+1;     //用h+1时h取的是内存地址中的值，也就是+1之前的值2； 
// cout<<h; 
//    return 0;
//}  
//
//
////b=++a   先b+1，再 b赋值给a
////1、a自增(a = a + 1;)
////2、将a的值，传给b(b = a;) 

