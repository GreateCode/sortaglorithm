#ifndef STRCPY_H
#define STRCPY_H
#include<string>
#include<assert.h>
char *strcpy1(char *dest, char *src)
{
	assert((dest != NULL) && (src != NULL));
	char *a = dest;     //ָ��a��Ϊ�˱���Ŀ���ָ�� ��ֹĿ��ָ�붪ʧ
	while ((*a != '\0') && (*src != '\0'))
	{
		*a++ = *src++;
	}
	return  dest;
}


////(A)ѭ��д��while (*dst++=*src++);�����Ǵ���ġ�
//
//(B)ѭ��д��while(*src != '\0') *dst++ = *src++;
//
//ѭ���������dst�ַ�����ĩβû����ȷ�ؼ���'\0

//strcpy��memcpy��Ҫ������3���������
//1�����Ƶ����ݲ�ͬ��strcpyֻ�ܸ����ַ�������memcpy���Ը����������ݣ������ַ����顢���͡��ṹ�塢��ȡ�
//2�����Ƶķ�����ͬ��strcpy����Ҫָ�����ȣ��������������ַ��Ĵ�������"\0"�Ž������������������memcpy���Ǹ������3�������������Ƶĳ��ȡ�
//3����;��ͬ��ͨ���ڸ����ַ���ʱ��strcpy������Ҫ����������������ʱ��һ����memcpy
#endif