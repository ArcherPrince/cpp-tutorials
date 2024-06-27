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

	int m_EmpNum; // 记录职工人数
	Worker** m_EmpArray; // 职工数组指针

	void Add_Emp(); // 添加职工

	~WorkerManager();
};