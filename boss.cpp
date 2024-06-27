#include "boss.h"

Boss::Boss(int id, string name, int dId)
{
	this->m_ID = id;
	this->m_name = name;
	this->m_DepID = dId;
}

void Boss::showInfo()
{
	cout << "职工编号：" << this->m_ID
		<< "\t职工姓名：" << this->m_name
		<< "\t所在岗位：" << this->getDepName()
		<< "\t岗位职责：管理公司一切事务" << endl;
}

string Boss::getDepName()
{
	return string("总裁");
}