#include<stdio.h>
int main(){
	char x[1001];
	gets(x);
	if(x[0]>96){
		x[0]-=32;
	}
	puts(x);
}