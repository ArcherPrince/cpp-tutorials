#pragma once
#include <iostream>
using namespace std;
#include <string>

class Worker // 抽象类
{
public:
	// 定义纯虚函数 所以该类不能实例化
	virtual void showInfo() = 0;
	virtual string getDepName() = 0;

	int m_ID; // 职工ID
	string m_name; // 职工姓名
	int m_DepID; // 所在部门编号
};