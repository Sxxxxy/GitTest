
// GitTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

class order
{
public:
	int num;
};

int main()
{
	order o;
	o.num = 1;

	std::vector<order> v;
	v.emplace_back(o);
	o.num = 2;
	std::cout << o.num<<std::endl;
	std::cout << v[0].num << std::endl;
}

