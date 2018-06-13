#include <iostream>
#include <cmath>

// 点坐标结构 
struct rect
{
	double x;
	double y;
};

// 极坐标结构
struct polar
{
	double distance;				// 长度
	double angle;					// 角度
};

polar rect_to_polar(rect rcpos);	// 点坐标转换极坐标
void show_Polar(polar dapos);	// 显示极坐标

// 坐标转换极坐标
int atrctfun_test()
{
	using namespace std;

	rect rplace;
	polar pplace;

	cout << "Enter the x and y value: ";

	// 当输入非数值型数据cin返回false，退出while循环
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_Polar(pplace);
		cout << "Next two numbers(q to quit):";
	}

	cout << "Done.\n";
	return 0;
}

polar rect_to_polar(rect rcpos)
{
	polar pret;
	pret.distance = sqrt(rcpos.x * rcpos.x + rcpos.y * rcpos.y);
	pret.angle = atan2(rcpos.y, rcpos.x);
	return pret;
}

void show_Polar(polar dapos)
{
	using std::cout;
	using std::endl;
	
	double rad_to_deg = 180/M_PI;                            // 弧度转角度(弧度 * 180 / π)  角度转弧度(角度 * π / 180)
	cout << "distance = " << dapos.distance << endl;
	cout << "angle = " << dapos.angle * rad_to_deg << endl;
}

