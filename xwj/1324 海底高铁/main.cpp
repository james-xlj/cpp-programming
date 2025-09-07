#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const int N=1e5;
int d[N];
int n,k;
int a,b,c;
long long cnt=0,sum=0;
int main(int argc, char** argv) {
	cin>>n>>k;
	if(n<=0||k<=1){
		cout<<0;
		return 0;
	} 
	int prev=0,curr=0;
	for(int i=1;i<=k;i++){
		cin>>curr;
		if (i>1) {
			d[min(prev,curr)]++;
			d[max(prev,curr)]--;
		}
		prev = curr;
	}
//	for(int i=1;i<=k;i++){
//		d[i]+=d[i-1];
//	}
	for(int i=1;i<=n-1;i++){
		sum+=d[i];
		cin>>a>>b>>c;
		cnt += min(b*sum+c, a*sum);
	}
	cout<<cnt;
	return 0;
}