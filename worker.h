#pragma once
#include <iostream>
using namespace std;
#include <string>

class Worker // ������
{
public:
	// ���崿�麯�� ���Ը��಻��ʵ����
	virtual void showInfo() = 0;
	virtual string getDepName() = 0;

	int m_ID; // ְ��ID
	string m_name; // ְ������
	int m_DepID; // ���ڲ��ű��
};