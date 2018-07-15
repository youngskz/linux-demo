// usestok1.cpp -- using the Stock class
// compile with stock10.cpp
#include <iostream>
#include "demo_9/stock10.h"

int use_stock10_test()
{
  {
    using std::cout;
    cout << "Using constructors to create new objects\n";
    Stock10 stock1("NanoSmart", 12, 20.0);				// (隐式调用构造函数)
    stock1.show();
    Stock10 stock2 = Stock10 ("Boffo Objects", 2, 2.0);	// (显式调用构造函数)
    stock2.show();

    cout << "Assigning stock1 to stock2:\n";
	// 将一个对象赋值给同类型的另一个对象时，把对象的每个数据成员的内容复制到目标对象中对应的数据成员中
    stock2 = stock1;
    cout << "Listing stock1 and stock2:\n";
    stock1.show();
    stock2.show();

    cout << "Using a constructor to reset an object\n";
	// 当对象已经存在，构造函数将创建临时对象，然后将其内容复制给原来存在的对象
    stock1 = Stock10("Nifty Foods", 10, 50.0);    // temp object
    cout << "Revised stock1:\n";
    stock1.show();
    cout << "Done\n";
  }
	// std::cin.get();
    return 0; 
}
