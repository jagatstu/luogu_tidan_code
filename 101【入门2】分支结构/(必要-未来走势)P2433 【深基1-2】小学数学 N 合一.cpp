#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	switch (n) {
		case 1:
			printf("I love Luogu!");break;
		case 2:
			printf("6 4");break;
		case 3:
			printf("3\n12\n2");break;
		case 4: // 大坑  有效数字 ！= 小数位   也就是包括整数部分
			printf("%.3lf", 500.0/3);break;
		case 5:
			printf("%d\n", (260+220)/(12+20));break;
		case 6:
			cout << sqrt(6*6+9*9) << endl;break;
		case 7:
			printf("%d\n%d\n%d\n", 100+10, 110-20, 0);break;
		case 8:{
			double pi = 3.141593;
			int r = 5;
			//printf("%lf\n%lf\n%lf\n", pi*2*r, pi*r*r, 4.0/3.0*pi*r*r*r);
			cout<<pi*10<<endl<<pi*25<<endl<<4.0/3*pi*125<<endl;
			break;
		}			
		case 9:{
			int s = 1;
			for (int day = 4; day>1; day--){
				s = (s+1) * 2;
			}
			cout << s << endl;
			break;
		}
		case 10:
			cout << 9 << endl;break;
		case 11:
			cout<<1.0*100/3;break;
		case 12:
			cout<<(int)('M'-'A')+1<<endl<<(char)(18+'A'-1);break;
		case 13:{
			double pi=3.141593;
			cout<<(int)(pow(4.0/3*pi*(4*4*4+10*10*10),1.0*1/3));break;
		}
		case 14:
			cout<<50<<endl;break;
	}
	return 0;
}
/*
  
 */