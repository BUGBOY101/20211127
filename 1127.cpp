#define	_CRT_SECURE_NO_WARNINGS 1

//hdoj2504 A?=B

#include<iostream>
#include<string>
char a[1000000], b[1000000];
using namespace std;
int main() {
	char* p1, * p2, * pa, * pb;
	
	while (cin >> a >> b) {
		p1 = strchr(a, '.');
		pa = a + strlen(a) - 1;
		p2 = strchr(b, '.');
		pb = b + strlen(b) - 1;
		if(pa > p1 && p1 != NULL) {
			while (*pa == '0')
				*pa-- = 0;
		}
		if (pb > p2 && p2 != NULL) {
			while (*pb == '0')
				*pb-- = 0;
		}
		if (*pa == '.') {
			*pa = 0;
		}
		if (*pb == '.')
			*pb = 0;
		pa = a;
		pb = b;
		while(*pa == '0')
			pa++;
		while(*pb == '0')
			pb++;
		if (strcmp(pa, pb) == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}

//#include <stdio.h>
//#include <string.h>
//#define N 100000
//char a[N] = { 0 }, b[N] = { 0 };
//int main(void)
//{
//	while (scanf("%s%s", &a, &b) != EOF)
//	{
//		char* p1 = strchr(a, '.');//p1指向小数点的位置,若没找到小数点，则返回NULL
//		char* p2 = strchr(b, '.');
//		char* pa = a + strlen(a) - 1;
//		char* pb = b + strlen(b) - 1;
//		if (pa > p1 && p1 != NULL)
//		{
//			while (*pa == '0')
//				*pa-- = 0;
//		}
//		if (pb > p2 && p2 != NULL)
//		{
//			while (*pb == '0')
//				*pb-- = 0;//*p++	先取*p的值，在使p+1;
//		}
//		if (*pa == '.')
//			*pa = 0;
//		if (*pb == '.')
//			*pb = 0;
//		pa = a;
//		pb = b;
//		while (*pa == '0')
//			pa++;
//		while (*pb == '0')
//			pb++;
//		if (strcmp(pa, pb) == 0)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int a = 20;
//	//000000000000000000000000000000010100
//	//0x00 00 00 14
//	//大端，数据的低位保存在内存的高地址，而数据的高位保存在内存的低地址
//	//小端存储模式，数据的低位保存在数据的低地址
//	return 0;
//}
//整数
//1.有符号数（最高位为符号位）-正数-原码反码补码相同-负数-反码（源码符号位不变，数值为按位取反）补码=反码+1
//2.无符号数

//#include<stdio.h>
//int main() {
//	1 - 1;
//	//1+(-1);
//	//0000000000000000000000000000000000000001-1原码
//	//0111111111111111111111111111111111111111-1补码
//	//1000000000000000000000000000000000000001- -1原码
//	//1111111111111111111111111111111111111111- -1补码
//
//	//0000000000000000000000000000000000000000	1+(-1)补码相加
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int a = 10;//整数在内存中存储二进制序列的补码
//	double b = 10.0;
//}