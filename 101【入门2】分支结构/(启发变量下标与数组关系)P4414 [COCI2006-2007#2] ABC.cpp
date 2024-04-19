#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int arr[5];
char A,B,C;
int main(){
	//scanf("%d%d%d", &arr[0],&arr[1],&arr[2]);
	cin >> arr[0]>>arr[1]>>arr[2];
	//scanf("%c%c%c", &A,&B,&C); // error ***** : input CAB
	//cout << A << B << C << endl;  //output:CA
	cin >> A >> B >> C;
//	if (arr[0] > arr[1]) swap(arr[0], arr[1]);
//	if (arr[1] > arr[2]) swap(arr[1], arr[2]);
//	if (arr[0] > arr[1]) swap(arr[0], arr[1]);
	sort(arr, arr+3);
	printf( "%d %d %d" , arr[A-'A'], arr[B-'A'], arr[C-'A'] );
	return 0;
}
