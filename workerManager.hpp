#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class WorkerManager
{
public:
	WorkerManager();

	void ShowMenu();

	void ExitSystem();

	int m_EmpNum; // ��¼ְ������
	Worker** m_EmpArray; // ְ������ָ��

	void Add_Emp(); // ���ְ��

	~WorkerManager();
};