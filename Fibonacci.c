#include<stdio.h>

void main(){
	int n;
	scanf("%d",&n);
	int i,ar[n],add[n];
	ar[0]=0;
	ar[1]=1;
	for(i=2; i<n; i++){
		add[i]=ar[i-2]+ar[i-1];
		printf("%d\n", add[i]);
	}
}