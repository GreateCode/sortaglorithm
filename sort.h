#ifndef SORT_H
#define SORT_H
#include<iostream>
#include"swap1.h"
using  namespace std;

void  sort(int *a,int n)
{
	for (int i = 1; i <= n; i++)
	{
		swap1(a[a[i]],a[i]);
	}
}

// ��һ��n��������ֵΪ1-n������ȵ���������  ʱ�临�Ӷ�Ϊ0��n�� �ռ临�Ӷ�Ϊ0��1��

#endif