#include <iostream>
#include "workerManager.hpp"
#include "employee.h"
#include "boss.h"
#include "manager.h"
using namespace std;

void test01()
{
	Worker* worker = NULL;

	worker = new Employee(1, "����", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(0, "����", 0);
	worker->showInfo();
	delete worker;

	worker = new Manager(3, "����", 3);
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
		cout << "��������Ĳ�����" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: // �˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1: // ���ְ��
			wm.Add_Emp();
			break;
		case 2: // ��ʾְ��
			break;
		case 3: // ɾ��ְ��
			break;
		case 4: // �޸�ְ��
			break;
		case 5: // ����ְ��
			break;
		case 6: // ����ְ��
			break;
		case 7: // ����ļ�
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}