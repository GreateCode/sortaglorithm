#ifndef STRAIGHINSET_H
#define STRAIGHINSET_H

void insertsort(int a[],int n)
{
	int tmp;                       //tmp�Ǳ�����ŵ�����
	for (int i = 0; i < n; i++)
	{ 
		int j = i - 1;
		tmp = a[i];
		while (tmp<a[j]&&j>=0)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = tmp;
	}
	
}
#endif