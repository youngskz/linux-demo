// usestok2.cpp -- using the Stock class
// compile with stock20.cpp
#include <iostream>
#include "demo_9/stock20.h"

const int STKS = 4;

int use_stock20_test()
{{	
// create an array of initialized objects
	// 初始化对象数组的方案是 
	//		1. 用默认的构造函数创建数组元素
	//		2. 花括号中的构造函数将创建临时对象
	//		3. 将临时对象的内容复制到相应的元素中
    Stock20 stocks[STKS] = {
        Stock20("NanoSmart", 12, 20.0),
        Stock20("Boffo Objects", 200, 2.0),
        Stock20("Monolithic Obelisks", 130, 3.25),
        Stock20("Fleep Enterprises", 60, 6.5)
        };

    std::cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; st++)
        stocks[st].show();
// set pointer to first element
    const Stock20 * top = &stocks[0];
    for (st = 1; st < STKS; st++)
        top = &top->topval(stocks[st]);
// now top points to the most valuable holding
    std::cout << "\nMost valuable holding:\n";
	top->show();}
	
    // std::cin.get();
    return 0; 
}
