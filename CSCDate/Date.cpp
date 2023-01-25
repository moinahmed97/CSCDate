#include "CSCDate.h"
#include <iostream>
#include <string>

using namespace std;

void CSCDate::SetDay(int d) {
	Day = d;
}
int CSCDate::GetDay() {
	return Day;
}


void CSCDate::SetMonth(int m) {
	Month = m;
}
int CSCDate::GetMonth() {
	return Month;
}


void CSCDate::SetYear(int y) {
	Year = y;
}
int CSCDate::GetYear() {
	return Year;
}


string CSCDate::GetMonthName() {
	return MonthName;
}



void CSCDate::printFirstDate() {
	cout << "CSC first date: "   << GetMonth() << '-' << GetDay() << '-' << GetYear() << endl;
    
}
void CSCDate::printUpdateDate() {
    cout << "CSC Updated date: " << GetMonth() << '-' << GetDay() << '-' << GetYear() << endl;

}
void CSCDate::printSecondDate() {
    cout << "CSC second date: " << GetMonthName() << '-' << GetDay() << '-' << GetYear() << endl;
    
}


CSCDate::CSCDate()
{

	SetDay(1);
	SetMonth(1);
	SetYear(1800);

}


CSCDate::CSCDate(int d, int m, int y)
{

	SetDay(d);
	if (d > 31 || d < 1) {
		SetDay(1);
	}
	SetMonth(m);
    switch (m) {
    case 1:
        MonthName = "January";
        break;
    case 2:
        MonthName = "Feburary";
        break;
    case 3:
        MonthName = "March";
        break;
    case 4:
        MonthName = "April";
        break;
    case 5:
        MonthName = "May";
        break;
    case 6:
        MonthName = "June";
        break;
    case 7:
        MonthName = "July";
        break;
    case 8:
        MonthName = "August";
        break;
    case 9:
        MonthName = "September";
        break;
    case 10:
        MonthName = "October";
        break;
    case 11:
        MonthName = "November";
        break;
    case 12:
        MonthName = "December";
        break;
    default:
        SetMonth(1);
        MonthName = "January";
    }
	SetYear(y);
    if (y < 1800 || y > 2022) {
        SetYear(1800);
         }
      
   
}