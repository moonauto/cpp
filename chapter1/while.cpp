//while.c -- 用whlie实现循环求和

#include<iostream>

using namespace std;

int main(void)
{
	int val, sum;
	
	val = 1;
	sum = 0;
	
	while(val < 11)
	{
		sum += val;
		val++;
	}
	cout << "sum = " << sum << endl;
	
	return 0;	
}


