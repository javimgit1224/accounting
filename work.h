#pragma once
#ifndef WORK_H
#define WORK_H
#include <iostream>
using namespace std;

class work
{
private:
public:
	void print_menu();
};
void work::print_menu()
{
	cout << "Welcome to Bee Accounting" << endl;
	cout << "***	MENU	***" << endl;
	cout << "1. Report Expense" << endl;
	cout << "2. Create Invoice" << endl; 
}
#endif // WORK_H

