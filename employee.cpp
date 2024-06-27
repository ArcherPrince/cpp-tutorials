#include "employee.h"

Employee::Employee(int id, string name, int dID)
{
	this->m_ID = id;
	this->m_name = name;
	this->m_DepID = dID;
}

void Employee::showInfo()
{
	cout << "职工编号：" << this->m_ID
		<< "\t职工姓名：" << this->m_name
		<< "\t所在岗位：" << this->getDepName()
		<< "\t岗位职责：完成经理交给的任务" << endl;
}

string Employee::getDepName()
{
	return string("普通员工");
}