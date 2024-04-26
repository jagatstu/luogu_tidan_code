#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	if (a>b) swap(a,b);
	if (b>c) swap(b,c);
	if (a>b) swap(a,b);
	
	if (a+b <= c) printf("Not triangle\n");
	else {
		if (a*a + b*b == c*c) printf("Right triangle\n");
		else if (a*a + b*b > c*c) printf("Acute triangle\n");
		else if (a*a + b*b < c*c) printf("Obtuse triangle\n");
		if (a == b || b==c||c==a) printf("Isosceles triangle\n");
		if (a == b && b==c) printf("Equilateral triangle\n");
	}
	return 0;
}
