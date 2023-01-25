#pragma once

#include <iostream>
#include <string>

using namespace std;

class CSCDate
{
private:
	int Year;
	int Month;
	int Day;
	
public:
    string MonthName;
	void SetDay(int d);
	int GetDay();

	void SetMonth(int m);
	int GetMonth();

	void SetYear(int y);
	int GetYear();

	string GetMonthName();

	void printFirstDate();
	void printUpdateDate();
	void printSecondDate();

	CSCDate();
	CSCDate(int m, int d, int y);






};

