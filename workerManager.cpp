#include "workerManager.hpp"

WorkerManager::WorkerManager()
{
	this->m_EmpNum = 0;
	this->m_EmpArray = NULL;
}

void WorkerManager::ShowMenu()
{
	cout << "********************************************" << endl;
	cout << "*********  欢迎使用职工管理系统！ **********" << endl;
	cout << "*************  0.退出管理程序  *************" << endl;
	cout << "*************  1.增加职工信息  *************" << endl;
	cout << "*************  2.显示职工信息  *************" << endl;
	cout << "*************  3.删除离职职工  *************" << endl;
	cout << "*************  4.修改职工信息  *************" << endl;
	cout << "*************  5.查找职工信息  *************" << endl;
	cout << "*************  6.按照编号排序  *************" << endl;
	cout << "*************  7.清空所有文档  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem() 
{
	cout << "已退出，欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

void WorkerManager::Add_Emp()
{
	cout << "请输入要添加的职工的数量：" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		int newSize = this->m_EmpNum + addNum;
		Worker **newSpace = new Worker* [newSize]; // 用于存放新的职工数组
		// 添加新员工
		if (this->m_EmpArray != NULL) // 本来就有数据
		{
			// 先将原有数据保存
			for (int i = 0; i < this->m_EmpNum; ++i)
			{
				newSpace[i] = this->m_EmpArray[i];
			}

		}
		// 直接添加
		int id;
		string name;
		int deptId = 0;
		for (int i = 0; i < addNum; i++)
		{
			Worker* worker = NULL;
			cout << "请输入" << i + 1 << "号员工的ID：" << endl;
			cin >> id;
			cout << "请输入" << i + 1 << "号员工的姓名：" << endl;
			cin >> name;
			cout << "请选择" << i + 1 << "号员工的职位：" << endl;
			cout << "0:老板，1：经理，2：普通职员" << endl;
			int select;
			cin >> select;
			switch (select)
			{
			case 0:
				worker = new Boss(id, name, select);
				break;
			case 1:
				worker = new Manager(id, name, select);
				break;
			case 2:
				worker = new Employee(id, name, select);
				break;
			default:
				cout << "错误代码！" << endl;
				break;
			}
			newSpace[this->m_EmpNum + i] = worker;
		}
		delete[] this->m_EmpArray;
		this->m_EmpArray = newSpace;
		this->m_EmpNum = newSize;
		cout << "成功添加" << addNum << "名新员工。" << endl;
	}
	else
	{
		cout << "出错了！输入的数字必须大于0！" << endl;
	}
	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
	}
}