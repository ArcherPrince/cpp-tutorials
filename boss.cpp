#include "boss.h"

Boss::Boss(int id, string name, int dId)
{
	this->m_ID = id;
	this->m_name = name;
	this->m_DepID = dId;
}

void Boss::showInfo()
{
	cout << "ְ����ţ�" << this->m_ID
		<< "\tְ��������" << this->m_name
		<< "\t���ڸ�λ��" << this->getDepName()
		<< "\t��λְ�𣺹���˾һ������" << endl;
}

string Boss::getDepName()
{
	return string("�ܲ�");
}