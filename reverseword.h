// �ַ������á���

#ifndef  REVERSE_WORD_H
#define REVERSE_WORD_H
#include<iostream>
#include"swap1.h"
using namespace std;
//char* reverseword(char *src)
//{
//	char *dest = NULL;
//	int len = strlen(src);
//	dest = (char *)malloc(len);
//	char *d = dest;   //����Ŀ��ָ�벻���ı�  �ô��ͻ�ȥ
//	char  *s = &src[len-1];    //��Դ�ַ��������һλ��ַ��ʼ 
//	while (len--!=0)
//	{
//		*d++ = *s--;
//	}
//	return  dest;
//}



//-------------------��һ�ַ���ԭ�ط�ת----------------------------//
void revese2(char a[], int n)
{
	for (int i = 0, j = n-2; i < j; i++, j--)    //Ϊʲôj=n-2  ��Ϊ�ַ����������һ������Ϊ'\0' Ҫ�����������  ҲҪ�����������
	{
		swap1(a[i],a[j]);
	}
}
#endif