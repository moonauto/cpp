//for循环
#include<iostream>
using namespace std;

int main(void)
{
	int int_val, int_sum;
	
	int_val	= 0;
	int_sum = 0;
	
	for(; cin >> int_val; int_val++)
		int_sum += int_val;
		
	cout << int_sum << endl;
	
	return 0;
}
