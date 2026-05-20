#include "stdafx.h"
//#include "targetver.h"
#include <iostream>
using namespace std;

int suba(){
	cout<<"ーーーーーーーーーーーーーーーーーーーーーーーーーーー"<<endl;
	return 1;
}
int ad(){
 cout<<"+";
	 return 1;
}

int main(){	
	int a;
	do 
	{
	suba();ad();
	cout<<"退出输入10"<<endl;ad();
	cout<<"更新说明1"<<endl;ad();
	cout<<"帮助2"<<endl;ad();
	cout<<"版本 aqua Zeno (class10)"<<endl;ad();
	cout<<endl;
	cin>>a;
	switch(a)
	{

	case 1:
		suba();ad();
		cout<<a<<endl;ad();
		cout<<"aqua 2024.6.9 20:25"<<endl;ad();
		cout<<"项目重启，使用C++编写"<<endl;ad();
		cout<<endl;
		continue;
	case 2:
		suba();ad();
		cout<<a<<endl;ad();
		cout<<"			关于		"<<endl;ad();
		cout<<"ygzymmkdrj,class10 last-aqua 只是我的一个想法。"<<endl;ad();
		cout<<"ygzymmkdrj,class10 last-aqua 目前未知用途。"<<endl;ad();
		cout<<endl<<"AWEknl";ad();/*
	case 3:		continue;
	case 4:		continue;
	case 5:		continue;
	case 6:		continue;
	case 7:		continue;
	case 8:		continue;
	case 9:		continue;
	default :
	cout<<"exit";*/
;}
	}
	while (a<10);
	return 0;
}
//AWEknl ygzymmkdrj,class10 last-aqua line 57