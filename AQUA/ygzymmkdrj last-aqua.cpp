#include "stdafx.h"
#pragma warning(disable: 4996)
#pragma warning(disable: 4651)
using namespace std;
int ab, d;
float a, b, c, x1, x2, discriminant, realPart, imaginaryPart, zhox, zhoy;
char* dt;
time_t now;
int suba()
{
	for (int i = 0; i < 40; i++)
	{
		cout << "ー";
	}
	cout << "EXPORT:";
	cout << ab << endl;
	return 1;
}
int ad()
{
	cout << "｜";
	return 1;
}

int Enter()
{
	cout << "ENTER:";
	return 1;
}
int jikan()
{
	now = time(0);
	dt = ctime(&now);
	return 1;
}
int main()
{
	cout << "ygzymmkdrj,aqua8" << endl;
	ofstream out;
	ofstream file;
	string file_name = "reply.txt";
	jikan();
	file.open("reply.txt", ios::app | ios::in);
	file << "START OF TIME by Execute Documents:";
	file << dt << endl;
	cout << "启动时间：" << dt << endl;
	while (ab < 10)
	{
		ab = 0;
		suba();
		cout << "	「Ｍ　Ａ　Ｉ　Ｎ」" << endl; ad();
		cout << "退出10" << endl; ad();
		cout << "更新说明1" << endl; ad();
		cout << "关于2" << endl; ad();
		cout << "计算器3" << endl; ad();
		cout << "清空日志文件4" << endl; ad();
		cout << "清空控制台内容5" << endl; ad();
		cout << "二次方程6" << endl; ad();
		cout << "版本 aqua " << endl; ad();
		Enter();
		cin >> ab;
		switch (ab)
		{
		case 1:
			suba(); ad();
			cout << "			更新说明　　	" << endl; ad();
			cout << "ygzymmkdrj,class10 last-aqua1 2024.6.9 20:25" << endl; ad();
			cout << "项目重启，使用C++编写" << endl; ad();
			cout << "aqua2 2024.6.10 12:00" << endl; ad();
			cout << "添加计算器，启动时间，输入输出" << endl; ad();
			cout << "aqua3 2024.6.23 23:26" << endl; ad();
			cout << "简要完善了计算器功能，添加日志文件" << endl; ad();
			cout << "aqua4 2024.6.24 20:46" << endl; ad();
			cout << "添加清空日志文件" << endl; ad(); cout << endl; ad(); cout << "---下一页---" << endl; ad();
			system("pause"); ad(); cout << endl; ad();
			cout << "aqua5 2024.6.25 9:46" << endl; ad();
			cout << "修复BUG#1,优化代码" << endl; ad();
			cout << "aqua6 2024.6.25 19:10" << endl; ad();
			cout << "添加项目图，完善页面" << endl; ad();
			cout << "aqua7 2024.6.26 20:10" << endl; ad();
			cout << "添加清空控制台，节约内存" << endl; ad();
			cout << "aqua8 024.7.16 13:14" << endl; ad();
			cout << "添加二次方程，下一页，优化代码" << endl; ad();
			cout << "		ＢＵＧ		" << endl; ad();
			cout << "BUG#1：当输入不是数字时，会不间断地重复MAIN页面." << endl; ad();
			cout << endl;
			file << "TYPE:1	START OF TIME:";
			jikan();
			file << dt << endl;
			continue;
		case 2:
			suba(); ad();
			cout << "			关于		" << endl; ad();
			cout << "ygzymmkdrj,class10 last-aqua 只是我的一个想法。" << endl; ad();
			cout << "ygzymmkdrj,class10 last-aqua 目前未知用途。" << endl;
			ad(); cout << endl; ad(); cout << "---下一页---" << endl; ad();
			system("pause"); ad(); cout << endl; ad();
			cout << "By；AWEknl and..." << endl << endl;
			cout << "█╳████╳████╳█╳█╳███████████╳██╳╳╳████╳██"<<endl;
			cout << "█╳██╳█╳╳╳██╳█╳█╳█╳█╳██╳█╳████╳╳╳╳██╳█╳╳█" << endl;
			cout << "██████╳╳██╳╳███╳█╳█╳██╳█╳███╳╳╳██████╳╳█" << endl;
			cout << "╳╳█╳╳█╳██╳╳╳╳╳█╳█╳█╳██╳█╳████╳╳█╳███╳╳╳█" << endl;
			cout << "██████╳████╳███╳█╳█╳██╳█╳██╳██╳████╳█╳██" << endl;
			cout << "							ＡＱＵＡ　Ｐｒｏｊｅｃｔ" << endl;
			file << "TYPE:2	START OF TIME:";
			jikan();
			file << dt << endl;
			continue;
		case 3:
			file << "TYPE:3	START OF TIME:";
			jikan();
			file << dt << endl;
			suba(); ad();
			cout << "			计算器			" << endl; ad();
			cout << "请输入第一个数:";
			cin >> b; ad();
			cout << "请输入第二个数:";
			cin >> c; ad();
			cout << "+(加1) -(减2) *(乘3) /(除4) **(乘方5)[乘方使用第一个数] :";
			cin >> d; ad();
			switch (d)
			{
			case 1:
				cout << "result:";
				cout << c + b << endl;
				continue;
			case 2:
				cout << "result:";
				cout << c - b << endl;
				continue;
			case 3:
				cout << "result:";
				cout << c*b << endl;
				continue;
			case 4:
				cout << "result:";
				cout << c / b << endl;
				continue;
			case 5:
				cout << "result:";
				cout << b*b << endl;
				continue;
			default:
				cout << "No result" << endl;
			}
			continue;
		case 4:
			suba(); ad();
			cout << "正在清空" << endl; ad();
			out.open("reply.txt", ios::trunc);
			cout << "完成" << endl;
			continue;
		case 5:
			system("cls");
			cout << "ygzymmkdrj,aqua" << endl;
			jikan();
			cout << "启动时间：" << dt << endl;
			file << "found in cache:	" << dt << endl;
			continue;
		case 6:
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
			discriminant = b*b - 4 * a*c;
			if (discriminant > 0) {
				x1 = (-b + sqrt(discriminant)) / (2 * a);
				x2 = (-b - sqrt(discriminant)) / (2 * a); ad();
				cout << "实根不同" << endl; ad();
				cout << "x1 = " << x1 << endl; ad();
				cout << "x2 = " << x2 << endl;
			}
			else if (discriminant == 0) {
				cout << "实根相同：" << endl; ad();
				x1 = (-b + sqrt(discriminant)) / (2 * a); ad();
				cout << "x1 = x2 =" << x1 << endl;
			}
			else if (discriminant < 0) {
				realPart = -b / (2 * a);
				imaginaryPart = sqrt(-discriminant) / (2 * a); ad();
				cout << "虚根：" << endl; ad();
				cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl; ad();
				cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
			}
			else
			{
				cout << "No result" << endl;
				continue;
			}
			ad();
			cout << "该二次方程的顶点坐标为" << endl; ad();
			zhox = -b / 2 * a;
			zhoy = (4 * a*c - b*b) / 4 * a;
			cout << zhox << "," << zhoy << endl;
			continue;
		case 7:		continue;
		case 8:		continue;
		case 9:		continue;
		default:
			cout << "exit";
			file << "EXIT:	";
			jikan();
			file << dt << endl;
			break;
		}
		break;
	}
	file.close();
	cout << endl;
	system("pause");
	system("cls");
	system("exit");
	return 0;
}

//AWEknl ygzymmkdrj,class10 last-aqua line 222