#ifndef _QUEUE_H
#define _QUEUE_H
#include"stdafx.h"
//#define   MAX  1000
//#include<iostream>
//using namespace  std;

class queue
{
public:
	int initqueue();       //���г�ʼ��
	int pop();                  //���Ӳ���
	int  push(int a);             //��Ӳ���
	int isempty();          //�ж϶����Ƿ�Ϊ��
	int  isfull();              //�ж϶����Ƿ�Ϊ��
private:
	int   data[MAX];
	int  head;
	int  tail;
};



#endif