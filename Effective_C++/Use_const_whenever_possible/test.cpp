#include <iostream>

/*
 * const的一件奇妙事情是，它允许你指定一个语义约束（也就是指定一个“不该被改动”的对象），而编译器会强制实施这项约束。它允许你告诉编译器和其他程序猿某值应该保持不变。只要这（某值保持不变）是事实，你就应该说出来，因为说出来可以获得编译器的相助，确保这条款约束不被违反。
 * 关键字const多才多艺。你可以用它在classes外部修饰global或namespace（见条款2）作用域的常量，或修饰文件、函数、或区块作用域（block scope）中被声明为static的对象。你也可以修饰classes内部的static和non-static成员变量。面对指针，你也可以指出指针自身、指针所指物，或两者都（或都不）是const：

 * char greeting[] = "Hello";
 * char* p = greeting;			//non-const pointer, non-const data
 * const char* p = greeting;		//non-const pointer, const data
 * char* const p = greeting;		//const pointer, non-const data
 * const char* const p = greeting;	//const pointer, const data

 * const 语法虽然变化多端，但并不莫测高深。如果关键字const出现在星号左边，表示被指物是常量；如果const出现在星号右边，表示指针自身是常量；如果出现在星号的两边，表示被指物和指针两者都是常量。

 * 如果被指物是常量，有些程序员会将关键字const写在类型之前，有些人会把它写在类型之后、星号之前。两种写法的意义相同，所以下列两个函数接受的参数类型是一样的：

 * void f1(const Widget* pw);		//f1获得一个指针，指向一个常量的（不变的）Widget对象
 * void f2(Widget const* pw);		//f2也是
 */

void f1(const char* data);
void f2(char const* data);

int main()
{
	// const char origin_data[1024] = "This is a test";
	char origin_data[1024] = "This is a test";
	char tmp_data[1024] = "tmp data";
	f1(origin_data);
	f2(origin_data);
	f1(tmp_data);
	f2(tmp_data);
	const char* p1 = origin_data;
	// p1[0] = 'H';    //wrong, data is const
	p1 = tmp_data;
	std::cout << "p1 data: " << p1 << std::endl;
	char* const p2 = origin_data;
	p2[0] = 'H';
	//p2 = tmp_data;  //wrong, pointer is const
	std::cout << "p2 data: " << p2 << std::endl;
	const char* const p3 = origin_data;
	return 0;
}

void f1(const char* data)
{
	std::cout << "f1() data: " << data << std::endl;
}

void f2(char const* data)
{
	std::cout << "f2() data: " << data << std::endl;
}
