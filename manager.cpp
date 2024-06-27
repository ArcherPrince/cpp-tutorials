#include "manager.h"

Manager::Manager(int id, string name, int dId)
{
	this->m_ID = id;
	this->m_name = name;
	this->m_DepID = dId;
}

void Manager::showInfo()
{
	cout << "职工编号：" << this->m_ID
		<< "\t职工姓名：" << this->m_name
		<< "\t所在岗位：" << this->getDepName()
		<< "\t岗位职责：完成老板交给的任务，并下发给员工" << endl;
}

string Manager::getDepName()
{
	return string("经理");
}