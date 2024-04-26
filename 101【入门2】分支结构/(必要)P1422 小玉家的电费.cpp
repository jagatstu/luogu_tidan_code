#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	double p=0;
	if (n <= 150) p = 0.4463*n;
	else if(n <= 400){
		p = 0.4463*150 + 0.4663*(n-150);
	}else{
		p = 0.4463*150 + 0.4663*(400-150) + 0.5663*(n-400);
	}
	printf("%.1lf", p);
	return 0;
}