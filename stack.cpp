#include"stdafx.h"
#include"stack.h"
#include<iostream>

using std::cout;
using std::endl;

stack1::stack1(): top(NULL){}       //ʹ�ó�ʼ���б���й��캯����ʼ��   ��Ϊ��ָ�� ��ó�ʼ��   


stack1::~stack1()
{
	item  *dele;
	while (top)
	{
		dele = top;
		top = top->next;
		delete  dele;
	}
}                //��ָ��Ļ�����Ҫ��������������ȥɾ��ָ�� ���������Ұָ��

int stack1::isempty()
{
	if (top == NULL)
		return 1;
	else
		return 0;
}

void stack1::push(int x)
{
	item *a = new item;
	a->data = x;
	a->next = NULL;
	if (isempty())
	{
		top = a;
		top->next = NULL;
	}
	else
	{
		a->next = top;
		top = a;                          //ע��ͷ�巨 ��β�巨������
	}
}

int stack1::pop()
{
	if (isempty())
	{
		cout << "the stack is empty, so instruct deny" << endl;
		return 0;
	}
	else
	{
		
		int x = top->data;
		top = top->next;
		return x;
	}
}

int stack1::size()  const
{
	int length=0;
//	//if (isempty())
//	{
//		return x = 1;   //����Ա����Ϊ����Ա������ʱ�� ����������������ķǳ���Ա �������ִ���
//	}
	item  *tmp = top;
	while (tmp)
	{
		++length;
		tmp = tmp->next;
    }
	return  0;
}


void stack1::clear()
{
	item  *del;
	while (top)
	{
		del = top;
		top = top->next;
		delete  top;
	}
}