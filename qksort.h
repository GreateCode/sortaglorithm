//����Ҫ�����˿�ʼ�Ƚ�  ���Ǵ�һ�߿�ʼ�Ƚ�
//Ҫ�����ݹ� ���������ݹ�
#ifndef _QKSORT_H
#define _QKSORT_H
#include<iostream>
#include"swap1.h"
#include"display.h"
using namespace std;
// ���ǿ��������һ�ַ���
int qksort(int a[], int left, int right)
{
	if (left > right)
		return 1;                             //��Ϊ����ԭ���������Ͻ����������� return��䲻��Ҫ��ʲô
	int i = left;
	int j = right;
	int temp = a[left];
	while (i != j)
	{
		while (a[j]>=temp&&j>i)
			j--;
		while (a[i]<=temp&&i<j)
		{
			i++;
        }
		swap1(a[i], a[j]);
	
	}
	swap1(a[left], a[i]);

	//if (left == right)
	//	return  1;
	//else
	//{
		qksort(a, left, i - 1);
		qksort(a, i + 1, right);
	//}
	return 0;
	/*qksort(a, left, i - 1);
	qksort(a, i + 1, right);*/ 
	// ���õݹ�  ���ǵݹ��ʱ��û�н���ֵ�� �ͻ���������ռ���ڴ� �� �ݹ�����з���ֵ��
}
//----------------------------------------------------------------------//
//���ǿ�������ڶ��ַ���

//int partition(int a[], int p, int r)
//{
//	int i,j;
//	int x = a[r];
//	for ( i = p - 1, j = p; j < r; j++)
//	{
//		if (a[j] <= x)
//		{
//			i++;
//			swap1(a[i], a[j]);
//		}
//	}
//	swap1(a[i+1], a[r]);
//	return i + 1;
//}
//int qksort(int a[], int p, int r)
//{
//	int q;
//	if (p < r)
//	{
//		q = partition(a, p, r);
//		qksort(a, p, q - 1);
//		qksort(a, q + 1, r);
//	}
//	return 0;
//}
#endif