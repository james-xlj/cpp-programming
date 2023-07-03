#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
	freopen("a.txt","r",stdin);
	freopen("b.txt","w",stdout);
	int a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
