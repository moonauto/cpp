//while求和
#include<iostream>
using namespace std;

int main(void)
{
	int int_val, int_sum;
	
	int_sum = 0;
	int_val = 0;
	
	while(cin >> int_val)
		int_sum += int_val;
	
	cout << "sum is " << int_sum << endl;
	
	return 0;
}
