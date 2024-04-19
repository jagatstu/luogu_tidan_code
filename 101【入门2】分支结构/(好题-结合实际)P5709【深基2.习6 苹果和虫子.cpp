#include <iostream> //输入输出头文件
using namespace std;//名字空间
int main(){
	int m,s,t;
	cin>>m>>t>>s;
	if(t==0) { //特判*1
		cout<<0<<endl;
		return 0;
	}
	int a=s/t;
	if(s%t!=0) a++; //特判*2
	if(m-a<0) cout<<0<<endl; //特判*3
	else cout<<m-a<<endl;
	return 0;
}


//long long m,t,s;    //题目没给数据范围，最好要开大点，
//虽然说int好像也行
//int main()//主函数
//{
//	cin>>m>>t>>s;//输入数据
//	cout<<((m-(s%t==0?s/t:s/t+1))>0/*排除是负数的情况*/?(m-(s%t==0?s/t:s/t+1)/*向上取整*/):0)<<endl;
//	return 0;//结束程序
//}