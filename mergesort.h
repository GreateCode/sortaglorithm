#ifndef MERGESORT_H
#define MERGESORT_H
#include"stdafx.h"
int b[MAX] = { 0 };

void  merge1(int a[], int left, int right);
void  mergesort(int a[], int low,int high)
{
	if (low < high)
	{
		
		int mid = (low + high) / 2;
	//	cout << "mergesort(" << low << "\t"  << mid << "\t"  << high <<")"<< endl;
		mergesort(a, low, mid);                      //�ȷ� ����    Ҫ���ݹ� �����ϵ�f11 һ��һ�����٣�
		mergesort(a, mid + 1, high);
		merge1(a, low, high);
	}
	
}

void  merge1(int a[], int left, int right)
{
	int mid = (left + right) / 2;
	int i = left, j = mid + 1, k = 0;
	while ((i<=(mid))&&j<=right)
	{
		if (a[i] < a[j])                   //���a[i]��ͽ�a[i]�ŵ�b����ȥ �������һ��
		{
			b[k++] = a[i++];
		}
		else
		{
			b[k++] = a[j++];
		}
	}
	while (i<=mid)     //ʣ��ľ͸��Ƶ�b��
	{
		b[k++] = a[i++];
    }
	while (j<=right)
	{
		b[k++] = a[j++];
	}
	for (i = left, k = 0; i <= right; i++, k++)
	{
		a[i] = b[k];
	}
}

#endif