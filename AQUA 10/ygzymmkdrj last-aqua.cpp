#pragma once
#include "stdafx.h"
using namespace std;
int ab, d1;
float a, b, c, d, e, f, x1, x2, discriminant, realPart, imaginaryPart, zhox, zhoy, x, y, deg;
char* dt;
time_t now;
int suba()
{
	for (int i = 0; i < 40; i++)
	{
		cout << "ー";//输出横线*40
	}
	cout << "EXPORT:";
	cout << ab << endl;
	return ab;
}
int ad()
{
	cout << "｜";//输出竖线
	return 1;
}

int Enter()//输出Enter
{
	cout << "ENTER:";
	return 1;
}
int jikan()//获取当前时间
{
	now = time(0);
	dt = ctime(&now);
	return 1;
}
int main()
{
	cout << "ygzymmkdrj,aqua9" << endl;
	ofstream out; ofstream file;
	string file_name = "reply.txt";//日志文件
	jikan();
	file.open("reply.txt", ios::app | ios::in);
	file << "START OF TIME by Execute Documents:";//打开日志文件
	file << dt << endl;
	cout << "启动时间：" << dt << endl;//输出启动时间
	while (ab < 10)//主循环,直到输入10或9退出.
	{
		ab = 0;//初始化ab
		suba();
		cout << "	「Ｍ　Ａ　Ｉ　Ｎ」" << endl; ad();//输出主菜单
		cout << "退出10 and 9" << endl; ad();
		cout << "更新说明1" << endl; ad();
		cout << "关于2" << endl; ad();
		cout << "计算器3" << endl; ad();
		cout << "清空日志文件4" << endl; ad();
		cout << "清空控制台内容5" << endl; ad();
		cout << "二次方程6" << endl; ad();
		cout << "二次方程组7" << endl; ad();
		cout << "版本信息8" << endl; ad();
		cout << "版本 aqua " << endl; ad();
		Enter();
		cin >> ab;//输入选择
		switch (ab)
		{
		case 1://更新说明
			suba(); ad();
			cout << "			更新说明　　	" << endl; ad();//输出更新说明
			cout << "ygzymmkdrj,class10 last-aqua1 2024.6.9 20:25" << endl; ad();
			cout << "项目重启，使用C++编写" << endl; ad();
			cout << "aqua2 2024.6.10 12:00" << endl; ad();
			cout << "添加计算器，启动时间，输入输出" << endl; ad();
			cout << "aqua3 2024.6.23 23:26" << endl; ad();
			cout << "简要完善了计算器功能，添加日志文件" << endl; ad();
			cout << "aqua4 2024.6.24 20:46" << endl; ad();
			cout << "添加清空日志文件" << endl; ad(); 
			cout << endl; ad(); 
			cout << "---下一页---" << endl; ad();
			system("pause"); ad(); 
			cout << endl; ad();
			cout << "aqua5 2024.6.25 9:46" << endl; ad();
			cout << "修复BUG#1,优化代码" << endl; ad();
			cout << "aqua6 2024.6.25 19:10" << endl; ad();
			cout << "添加项目图，完善页面" << endl; ad();
			cout << "aqua7 2024.6.26 20:10" << endl; ad();
			cout << "添加清空控制台，节约内存" << endl; ad();
			cout << "aqua8 2024.7.16 13:14" << endl; ad();
			cout << "添加二次方程，下一页，优化代码" << endl; ad();
			cout << "aqua9 2024.10.6 19:39" << endl; ad();
			cout << "添加二次方程组" << endl; ad();
			cout << "aqua10 2025.7.16 16:00" << endl; ad();
			cout << "最终简要更新" << endl; ad();
			cout << "		ＢＵＧ		" << endl; ad();
			cout << "BUG#1：当输入不是数字时，会不间断地重复MAIN页面." << endl; ad();
			cout << endl;
			file << "TYPE:1	START OF TIME:";
			jikan();
			file << dt << endl;
			continue;
		case 2://关于
			suba(); ad();
			cout << "			关于		" << endl; ad();//输出关于
			cout << "ygzymmkdrj,class10 last-aqua 只是我的一个想法。" << endl; ad();
			cout << "ygzymmkdrj,class10 last-aqua 目前未知用途。" << endl;
			ad(); cout << endl; ad(); cout << "---下一页---" << endl; ad();
			system("pause"); ad(); cout << endl; ad();
			cout << "By；AWEknl and..." << endl << endl;
			cout << "█╳████╳████╳█╳█╳███████████╳██╳╳╳████╳██" << endl;
			cout << "█╳██╳█╳╳╳██╳█╳█╳█╳█╳██╳█╳████╳╳╳╳██╳█╳╳█" << endl;
			cout << "██████╳╳██╳╳███╳█╳█╳██╳█╳███╳╳╳██████╳╳█" << endl;
			cout << "╳╳█╳╳█╳██╳╳╳╳╳█╳█╳█╳██╳█╳████╳╳█╳███╳╳╳█" << endl;
			cout << "██████╳████╳███╳█╳█╳██╳█╳██╳██╳████╳█╳██" << endl;
			cout << "							　ＡＱＵＡ　１０　Ｐｒｏｊｅｃｔ" << endl;
			file << "TYPE:2	START OF TIME:";
			jikan();
			file << dt << endl;
			continue;
		case 3://计算器
			file << "TYPE:3	START OF TIME:";//记录日志
			jikan();
			file << dt << endl;
			suba(); ad();//输出计算器
			cout << "			计算器			" << endl; ad();
			cout << "请输入第一个数:";
			cin >> b; ad();
			cout << "请输入第二个数:";
			cin >> c; ad();
			cout << "+(加1) -(减2) *(乘3) /(除4) **(乘方5)[乘方使用第一个数] :";
			cin >> d1; ad();
			switch (d1)
			{
			case 1://加法
				cout << "result:";
				cout << c + b << endl;
				continue;
			case 2://减法
				cout << "result:";
				cout << c - b << endl;
				continue;
			case 3://乘法
				cout << "result:";
				cout << c * b << endl;
				continue;
			case 4://除法
				cout << "result:";
				cout << c / b << endl;
				continue;
			case 5://乘方
				cout << "result:";
				cout << b * b << endl;
				continue;
			default://无效输入
				cout << "No result" << endl;
				continue;
			}
			continue;
		case 4://清空日志文件
			suba(); ad();
			cout << "正在清空" << endl; ad();
			out.open("reply.txt", ios::trunc);
			cout << "完成" << endl;
			continue;
		case 5://清空控制台内容
			system("cls");
			cout << "ygzymmkdrj,aqua" << endl;
			jikan();
			cout << "启动时间：" << dt << endl;//输出启动时间
			file << "found in cache:	" << dt << endl;
			continue;
		case 6://二次方程
			file << "TYPE:6	START OF TIME:";
			jikan();
			file << dt << endl;
			suba(); ad();
			cout << "二次方程求解，ax^2+bx+c=0" << endl; ad();
			cout << "请输入 a：";
			cin >> a; ad();
			cout << "请输入 b：";
			cin >> b; ad();
			cout << "请输入 c: ";
			cin >> c;
			discriminant = b * b - 4 * a * c;
			if (discriminant > 0) //如果判别式大于0
			{
				x1 = (-b + sqrt(discriminant)) / (2 * a);
				x2 = (-b - sqrt(discriminant)) / (2 * a); ad();
				cout << "实根不同" << endl; ad();
				cout << "x1 = " << x1 << endl; ad();
				cout << "x2 = " << x2 << endl;
				cout << "sqrt = b * b - 4 * a * c = " << discriminant << endl;
			}
			else if (discriminant == 0) //如果判别式等于0
			{
				cout << "实根相同：" << endl; ad();
				x1 = (-b + sqrt(discriminant)) / (2 * a); ad();
				cout << "x1 = x2 =" << x1 << endl;
				cout << "sqrt = b * b - 4 * a * c = " << discriminant << endl;
			}
			else if (discriminant < 0) //如果判别式小于0
			{
				cout << "实根为虚根" << endl; ad();
				cout << "判别式为负数，无法求出实根" << endl; ad();
				cout << "计算虚根：" << endl; ad();
				discriminant = -discriminant; //将判别式取绝对值
				cout << "sqrt = b * b - 4 * a * c = " << -discriminant << endl;
			}
			else
			{
				cout << "No result" << endl;//如果输入不合法
				continue;
			}
			ad();
			cout << "该二次方程的顶点坐标为" << endl; ad();//输出顶点坐标
			zhox = -b / (2 * a);
			zhoy = (4 * a * c - b * b) / (4 * a);
			cout << zhox << "," << zhoy << endl;
			continue;
		case 7://二次方程组
			file << "TYPE:7	START OF TIME:";
			jikan();
			file << dt << endl;
			suba(); ad();
			cout << "二元一次方程组求解，ax+by=e,cx+dy=f" << endl; ad();
			cout << "请输入 a：";
			cin >> a; ad();
			cout << "请输入 b：";
			cin >> b; ad();
			cout << "请输入 e: ";
			cin >> e; ad();
			cout << "请输入 c: ";
			cin >> c; ad();
			cout << "请输入 d: ";
			cin >> d; ad();
			cout << "请输入 f: ";
			cin >> f; ad();
			if (a * d - b * c == 0)
			{
				cout << "无穷解" << endl; ad();
			}
			else
			{
				deg = a * d - b * c;
				x = (d * e - b * f) / deg;
				y = (a * f - c * e) / deg;//计算x和y的值
				cout << "x为";
				cout << x << endl; ad();
				cout << "y为";
				cout << y << endl; //输出x和y的值
			}
			continue;
		case 8:	//版本信息
			suba(); ad();
			cout << "版本信息 AQUA 10 last	" << endl; ad();
			system("pause");
			continue;
		case 9:	//退出
			suba(); ad();
			cout << "exit" << endl; ad();
			break;
		case 10:	//退出
			suba(); ad();
			cout << "exit" << endl; ad();
			break;
		default://非法输入
			cout << "exit type illegality string" << endl;
			file << "EXIT: type illegality string";
			jikan();
			file << dt << endl;
			break;
		}
		break;
	}
	file.close();
	system("pause");
	system("cls");
	system("exit");
	return 0;
}
//AWEknl ygzymmkdrj,class10 last-aqua line 277
