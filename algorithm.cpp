// algorithm.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include"swap1.h"
#include"bubblesort.h"
#include"compare.h"
#include<iostream>
#include<stdlib.h>
#include"display.h"
#include"qksort.h"
#include"file.h"
#include"queue.h"
#include"zhedie.h"
#include<time.h>
#include"stack.h"
#include"straighinsert.h"
#include"shellsort.h"
#include"sort.h"
#include"binarysort.h"
#include"reverseword.h"
#include"heapsort.h"
#include"mergesort.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	clock_t  start, finish;
	double  totaltime;
	int a[13] = { 0, 2, 12, 1, 3, 456, 38,131, 1045, 74,9,5,4};
	cout << "before the sort is:" << endl;
	display(a, 13);
	start = clock();


	//qksort(a, 0, 12);
	file();


	finish = clock();
	cout << "after the sort is:" << endl;
	display(a, 13);
	totaltime = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "���㷨���е���ʱ��Ϊ��" << totaltime <<"��"<< endl;


	//int a = (3 >3);
	//cout << a << endl;


























	//  ---------------------�ַ���ԭ�ط�ת--------------------------------//
	/*char a[9] = { 'a', 'b', 'c', 'd', 'e', 'f', 'h', 'i' };
	revese2(a, 9);
	display(a, 9);
	*/   
		return 0;
}

