#ifndef BINARYSORT_H
#define BINARYSORT_H
void  binarysort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int  temp = a[i];                        //temp�����Ҫ���������
		int  low = 0, high = i - 1;
		while (low<=high)
		{
			int mid = (low + high) / 2;
			if (temp <= a[mid])
				high = mid - 1;
			else
				low = mid + 1;                          
		}                                                  //whileѭ�������ҵ�a[i]��Ҫ���뵽����  ���ض���high+1����
		for (int j = i - 1; j >= high + 1; j--)                   //��high+1��j-1��������������ƶ�
		{
			a[j + 1] = a[j];
		}
		a[high + 1] = temp;
		//or   a[j+1]=temp;             the same to up;
	}
}
#endif

//���ֲ�������