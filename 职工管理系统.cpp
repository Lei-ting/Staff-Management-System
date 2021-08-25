#include<iostream>
using namespace std;
#include"workerManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
int main()
{
	////测试代码
	//Worker* worker = NULL;
	//worker = new Employee(1,"张三",1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "李四", 1);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(1, "王五", 1);
	//worker->showInfo();
	//delete worker;
	 
	//实例化管理者对象
	WorkerManager wm;
	int choice = 0;
	while (true)
	{
		//调用展示菜单成员函数
		wm.Show_Menu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;//接受用户的选项
		switch (choice)
		{
		
		case 0://退出系统
			wm.ExitSystem();
			break;
		case 1://增加职工
			wm.Add_Emp();
			wm.save();
			break;
		case 2://显示职工
			wm.Show_Emp();
			break;
		case 3://删除职工
			wm.Del_Emp();
			break;
		//{//测试
		//	int ret = wm.IsExist(1);
		//	if (ret != -1)
		//	{
		//		cout << "职工存在" << endl;
		//	}
		//	else
		//	{
		//		cout << "职工不存在" << endl;
		//	}

		//	break;
		//}
		case 4://修改职工
			wm.Mod_Emp();
			break;
		case 5://查找职工
			wm.Find_Emp();
			break;
		case 6://排序职工
			wm.Sort_Emp();
			break;
		case 7://清空文档
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}
	
	

	system("pause");
	return 0;
}