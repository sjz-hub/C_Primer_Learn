#include <iostream>

int main(){
	int i = 0, &r = i;
	const int ci = i, &cr = ci;
	auto a = r;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;

	a = 42;
	b = 42;
	c = 42;
	*d = 42;
	e = &a;

	return 0;	

}
