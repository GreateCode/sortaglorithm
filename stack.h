#ifndef _STACK_H
#define _STACK_H

struct item
{
	int  data;                   //�洢����
	item  *next;            //ջ��ָ��
};                                 //ջ�����ݽṹ
class stack1
{
public:
	stack1();
	~stack1();
	void push(int x);
	int  pop();
	int  isempty();
	int  size()  const;
	void  clear();

private:
	item  *top;   //ջ��
};


#endif

