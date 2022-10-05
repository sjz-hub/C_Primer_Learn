#include <iostream>

int main(){
	int i = 10;
	int *p = &i;
	*p = 12;
	int j = 5;
	p = &j;
	return 0;
}
