//��������һ���ļ��� ����������������n������ֵ��֮���ٵ��������㷨�����ļ���������ֽ�������
//֮���������µ��ļ���������֮������ֵ��������ɵ��ļ���

#ifndef _FILE_H
#define _FILE_H
#include"stdafx.h"
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<fstream>
#include"qksort.h"
#include"heapsort.h"
#include"bubblesort.h"
#include"binarysort.h"
#include"shellsort.h"
#include"straighinsert.h"
#include"mergesort.h"
//#define  MAX  20000

using namespace std;
int a[MAX];
int file()
{
	ofstream outfile("notorder.txt", ios::out);
	if (!outfile)
	{
		cerr << "open error" << endl;
		exit(1);
	}
	srand((unsigned)time(NULL));
	for (int i = 0; i < MAX; i++)
	{
		outfile << rand()%MAX << "\t";
	}
	outfile.close();
	//--------------------input file----------------------------//
	ifstream infile("notorder.txt", ios::in | ios::_Nocreate);
	if (!infile)
	{
		cerr << "open error" << endl;
		exit(1);
	}
	for (int i = 0; i < MAX; i++)
	{
		infile >> a[i];
	}





	//����20000����������� ���Ը��������㷨���� ÿ���㷨����5��ȡ��ƽ���� �õ��������
	// ϣ������>=������>���ֲ�������>ֱ�Ӳ�������>ֱ�Ӳ�������>ð������
	mergesort(a, 0, MAX - 1);          //�鲢����          0.713s
	//shellsort(a, MAX);      //ϣ������                        0.312s
	//binarysort(a, MAX);    //���ֲ�������              0.634s
	//insertsort(a, MAX);     //ֱ�Ӳ�������              0.755s
	//qksort(a, 0, MAX);   //���ÿ��������㷨��       0.359s
	//bubblesort(a, MAX);  //����ð������              4.195s
	//heapsort(a, MAX - 1);   //������                      0.325s





	infile.close();
	
	//--------------------------------------------------------//
	ofstream  out("order.txt", ios::out);
	if (!out)
	{
		cerr << "open error" << endl;
		exit(1);
	}
	for (int i = 0; i < MAX; i++)
	{
		out << a[i] << "\t";
	}
	out.close();
	return 0;
}
#endif