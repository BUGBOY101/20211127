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
//		char* p1 = strchr(a, '.');//p1ָ��С�����λ��,��û�ҵ�С���㣬�򷵻�NULL
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
//				*pb-- = 0;//*p++	��ȡ*p��ֵ����ʹp+1;
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
//	//��ˣ����ݵĵ�λ�������ڴ�ĸߵ�ַ�������ݵĸ�λ�������ڴ�ĵ͵�ַ
//	//С�˴洢ģʽ�����ݵĵ�λ���������ݵĵ͵�ַ
//	return 0;
//}
//����
//1.�з����������λΪ����λ��-����-ԭ�뷴�벹����ͬ-����-���루Դ�����λ���䣬��ֵΪ��λȡ��������=����+1
//2.�޷�����

//#include<stdio.h>
//int main() {
//	1 - 1;
//	//1+(-1);
//	//0000000000000000000000000000000000000001-1ԭ��
//	//0111111111111111111111111111111111111111-1����
//	//1000000000000000000000000000000000000001- -1ԭ��
//	//1111111111111111111111111111111111111111- -1����
//
//	//0000000000000000000000000000000000000000	1+(-1)�������
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int a = 10;//�������ڴ��д洢���������еĲ���
//	double b = 10.0;
//}