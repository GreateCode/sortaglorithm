#ifndef HEAP_SORT_H
#define HEAP_SORT_H
#include"swap1.h"
//���������������ԣ�
//1 �����ļ�ֵ���Ǵ��ڻ���ڣ�С�ڻ���ڣ��κ�һ���ӽڵ�ļ�ֵ��
//2 ÿ������������������������һ������ѣ��������ѻ���С�ѣ�

//-------------------------�ѵĴ洢  ----------------------------------//
// һ�㶼����������ʾ�ѣ�i���ĸ�����±��Ϊ(i �C 1) / 2��
//���������ӽ���±�ֱ�Ϊ2 * i + 1��2 * i + 2�����0����������ӽ���±�ֱ�Ϊ1��2


//int parent(int i)
//{
//	return (i - 1) / 2;
//}
//int rightson(int i)
//{
//	return  2 * i + 2;
//}
//int  leftson(int i)
//{
//	return 2 * i + 1;
//}

void heapadjust(int a[], int s, int m)
{
	int j = s;
	int t = a[j];
	for (int k = 2 * j ; k <= m; k = k * 2 )                   //jΪ���ڵ�  kΪj�����ӽڵ� �Ӻ��ӽڵ㿪ʼ����С����
	{
		if (k == m)                            //����������һ�����ڵ�ֻ��һ�����ӵ������
		{
			if (a[k] < t)                   //������ڵ�Ⱥ��Ӽ����  
			{
				a[j] = a[k];                  //�����ӽڵ��ֵ�ŵ����ڵ���   ���и��ڵ��Ѿ������浽����t��
				j = k;
			}
			else
				break;
		}
		else
		{
			if (a[k] > a[k + 1])                    //������Һ��ӵĻ�  ѡ������������С��ֵ
				k++;
			if (a[k] < t)
			{
				a[j] = a[k];
				j = k;
				//	k = 2 * j + 1;
			}
			else
			{
				break;
			}
		}
	}
	a[j] = t;
}

void heapbuild(int a[],int m)    //�����һ���ڵ�ĸ��׿�ʼ������ 
{
	for (int j = m / 2; j >= 1; j--)  
		heapadjust(a, j, m);
}

void  heapsort(int a[], int m)
{
	heapbuild(a, m);
	for (int i = m ; i >= 1; i--)                    //�����һ���ڵ㿪ʼ �����һ��ֵ�͵�һ��ֵ���� Ȼ�� ���ڣ�1->i-1���Ķ�
	{
		swap1(a[1], a[i]);
		heapadjust(a, 1, i - 1);
	}
}


#endif