#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>//�������������ͷ�ļ�
using namespace std;//ʹ�ñ�׼�����ռ�
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
#define FILENAME "empFile.txt"
class WorkerManager
{
public:
	WorkerManager();//���캯��

	void Show_Menu();//չʾ�˵�

		void ExitSystem();//�˳�ϵͳ
	
	//��¼ְ������
	int m_EmpNum;

	//��¼ְ������ָ��
	Worker ** m_EmpArray;

	//�����ļ�
	void save();

	//���ְ��
	void Add_Emp();

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
	
	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ͨ��ְ������ж�ְ���Ƿ���ڣ������ڷ���ְ������������λ�ã������ڷ���-1
	int IsExist(int id);


	//ɾ��ְ��
	void Del_Emp();

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	~WorkerManager();//��������
};