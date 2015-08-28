#include "stdafx.h"
#include"queue.h"
#include<iostream>
using namespace std;
//û�õ�ָ��  �õ�ָ���ʱ��Ҫ���������ǳ����������  ����Ҫ�Լ�д���캯��������������
//Ӧ��дһ����ָ�빹��Ķ���

int queue::push(int a )
{
	if (isfull())
		cerr << "the queue is full,can't push something:" << endl;
	else
	{
		head++;
		data[head] = a;
	}
	return 0;
}
int queue::pop()
{
	int tmp;
	if (isempty())
	{
		cerr << "the queue is empty,can't pop anything" << endl;
		return 0;
	}
	else
	{
		tail++;
		tmp = data[tail];
		return  tmp;
	}
}
int  queue::initqueue()
{
	for (int i = 0; i < MAX; i++)
	{
		data[i] = 0;
	}
	head = 1;
	tail = 0;
	return 0;
}
int queue::isfull()
{
	if (head == MAX)
		return 1;
	else
	{
		return 0;
	}
}

int queue::isempty()
{
	if (head == tail)
		return 1;
	else
	{
		return 0;
	}
}

