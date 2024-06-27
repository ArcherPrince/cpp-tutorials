#include "workerManager.hpp"

WorkerManager::WorkerManager()
{
	this->m_EmpNum = 0;
	this->m_EmpArray = NULL;
}

void WorkerManager::ShowMenu()
{
	cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem() 
{
	cout << "���˳�����ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

void WorkerManager::Add_Emp()
{
	cout << "������Ҫ��ӵ�ְ����������" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		int newSize = this->m_EmpNum + addNum;
		Worker **newSpace = new Worker* [newSize]; // ���ڴ���µ�ְ������
		// �����Ա��
		if (this->m_EmpArray != NULL) // ������������
		{
			// �Ƚ�ԭ�����ݱ���
			for (int i = 0; i < this->m_EmpNum; ++i)
			{
				newSpace[i] = this->m_EmpArray[i];
			}

		}
		// ֱ�����
		int id;
		string name;
		int deptId = 0;
		for (int i = 0; i < addNum; i++)
		{
			Worker* worker = NULL;
			cout << "������" << i + 1 << "��Ա����ID��" << endl;
			cin >> id;
			cout << "������" << i + 1 << "��Ա����������" << endl;
			cin >> name;
			cout << "��ѡ��" << i + 1 << "��Ա����ְλ��" << endl;
			cout << "0:�ϰ壬1������2����ְͨԱ" << endl;
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
				cout << "������룡" << endl;
				break;
			}
			newSpace[this->m_EmpNum + i] = worker;
		}
		delete[] this->m_EmpArray;
		this->m_EmpArray = newSpace;
		this->m_EmpNum = newSize;
		cout << "�ɹ����" << addNum << "����Ա����" << endl;
	}
	else
	{
		cout << "�����ˣ���������ֱ������0��" << endl;
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