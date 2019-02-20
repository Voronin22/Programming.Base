#include<iostream>
#include <stdio.h>
#define B 1000
using namespace std;

int main(void)
{
	int t, v;
	scanf_s("%d", &t);
	v = (int)(B / t);
	printf("%d", v);
	getchar();
	return 1;
}
