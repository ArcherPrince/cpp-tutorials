#include "manager.h"

Manager::Manager(int id, string name, int dId)
{
	this->m_ID = id;
	this->m_name = name;
	this->m_DepID = dId;
}

void Manager::showInfo()
{
	cout << "ְ����ţ�" << this->m_ID
		<< "\tְ��������" << this->m_name
		<< "\t���ڸ�λ��" << this->getDepName()
		<< "\t��λְ������ϰ彻�������񣬲��·���Ա��" << endl;
}

string Manager::getDepName()
{
	return string("����");
}