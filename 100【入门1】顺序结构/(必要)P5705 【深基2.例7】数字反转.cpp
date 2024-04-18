#include <iostream>
#include<stdio.h>

using namespace std;

int main() {
	char a,b,c,d;
	//scanf("%c%c%c%c%c", &a,&b,&c,&d,&d);
	scanf("%c%c%c.%c", &a,&b,&c,&d);
	printf("%c.%c%c%c", d,c,b,a);
	return 0;
}

/*
  scanf("输入控制符", 输入参数);
  printf("输出控制符", 输出参数);
  --------速度快于cin,cout-------
  %d：读入一个 32 位有符号整数。
  %u：读入一个 32 位无符号整数。
  %lld：读入一个 64 位有符号整数。
  %llu：读入一个 64 位无符号整数。
  %f：读入一个 float 类型。
  %lf：读入一个 double 类型。
 */
