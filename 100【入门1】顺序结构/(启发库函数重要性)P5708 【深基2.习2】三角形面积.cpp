#include <iostream>
#include<stdio.h>
#include <cmath>

using namespace std;

int main() {
	double a,b,c, p, s;
	cin >> a >> b >> c;
	p = (a+b+c)*1.0 / 2;
	s = sqrt( p*(p-a)*(p-b)*(p-c) );
	printf("%.1lf", s);
	return 0;
}

