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
	cout << "*************  0.�˳���������  *************" << endl;
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
	cout << "������Ҫ���ӵ�ְ����������" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		// ������Ա��
		if (this->m_EmpArray != NULL) // ������������
		{
			// �Ƚ�ԭ�����ݱ���

		}
		else // 
		{

		}

	}
	else
	{
		cout << "�����ˣ���������ֱ������0��" << endl;
	}
}

WorkerManager::~WorkerManager()
{

}