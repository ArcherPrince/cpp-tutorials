#include "employee.h"

Employee::Employee(int id, string name, int dID)
{
	this->m_ID = id;
	this->m_name = name;
	this->m_DepID = dID;
}

void Employee::showInfo()
{
	cout << "ְ����ţ�" << this->m_ID
		<< "\tְ��������" << this->m_name
		<< "\t���ڸ�λ��" << this->getDepName()
		<< "\t��λְ����ɾ�����������" << endl;
}

string Employee::getDepName()
{
	return string("��ͨԱ��");
}