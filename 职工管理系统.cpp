#include <iostream>
#include "workerManager.hpp"
#include "employee.h"
#include "boss.h"
#include "manager.h"
using namespace std;

void test01()
{
	Worker* worker = NULL;

	worker = new Employee(1, "张三", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(0, "马云", 0);
	worker->showInfo();
	delete worker;

	worker = new Manager(3, "李四", 3);
	worker->showInfo();
	delete worker;
}

int main()
{
	//test01();
	WorkerManager wm;
	int choice;
	while (true)
	{
		wm.ShowMenu();
		cout << "请输入你的操作：" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: // 退出系统
			wm.ExitSystem();
			break;
		case 1: // 添加职工
			wm.Add_Emp();
			break;
		case 2: // 显示职工
			break;
		case 3: // 删除职工
			break;
		case 4: // 修改职工
			break;
		case 5: // 查找职工
			break;
		case 6: // 排序职工
			break;
		case 7: // 清空文件
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}