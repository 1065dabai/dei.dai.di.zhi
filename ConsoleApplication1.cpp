// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<stdio.h>

void up_and_down(int);

int main()
{
	up_and_down(1);
}

void up_and_down(int n) {
	printf("level %d ,location %p\n", n, &n);
	if (n < 5) up_and_down(n + 1);
	printf("level %d, location %p\n", n, &n);
}