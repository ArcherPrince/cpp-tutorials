#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

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