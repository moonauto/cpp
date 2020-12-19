//if 统计在输入中每个值连续出现了多少次
#include<iostream>

int main()
{
	//currVal 是正在统计的数,将读入的新值存入val
	int currVal = 0, val = 0;
	//读取第一个数,并确保确实有数据可以处理
	if (std::cin >> currVal)
		{
		int cnt = 1;		//保存正在处理的当前值的个数
		while (std::cin >> val)//继续键入其他数据
			{
			if (val == currVal)//判断值是否相等
				++cnt;		  //值相等 cnt + 1
			else
				{
				std::cout << currVal << " occurs " 
						  << cnt << " times " << std::endl;
				currVal = val; //记住新的值
				cnt	= 1;		//重置计数器
				}
			}
		//记住打印文件中最后1个值的个数
		std::cout << currVal << " occurs " 
				  << cnt << " times " << std::endl;
		}
		
		return 0;
}
	
