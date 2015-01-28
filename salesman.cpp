// salesman.cpp: Gerardo Camarena Gomez
// Description: Find the most profitable job offer based on weekly sales

//Option 1: Straight salary of $600 per week;
//Option 2: A salary of $7.00 per hour plus a 10% commission on sales;
//Option 3: No salary, but 20% commissions and $20 for each pair of shoes sold

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int get_Hours(){
	int weekly_Hours;
	cout << "Enter the total hours you worked this week:";
	if (!(cin >> weekly_Hours)){
		cout << "Enter a number only" << endl;
	}
	else {
		return weekly_Hours;
	}
}
int get_Sales(){
	int weekly_Sale;
	cout << "Enter your weekly sales:";
	if (!(cin >> weekly_Sale)){
		cout << "Enter a number only" << endl; 
	}
	else {
		return weekly_Sale;
	}
}
int get_Shoes(){
	int weekly_Shoes;
	cout << "Enter your weekly shoe sales:";
	if (!(cin >> weekly_Shoes)){
		cout << "Enter a number only" << endl; 
	}
	else {
		return weekly_Shoes;
	}
}

int profit_1(){
	int profit_method1;
	profit_method1 = 600;
	cout << "Profit from option 1 is:" << profit_method1 << "dollars per week" << endl;
}

int profit_2(int weekly_Hours, int weekly_Sale){
	int profit_method2;
	profit_method2 = (7 * weekly_Hours) + (.1 * weekly_Sale);
	cout << "Profit from option 2 is:" << profit_method2 << "dollars per week" << endl;
}

int profit_3(int weekly_Sale, int weekly_Shoes){
	int profit_method3;
	profit_method3 = (.2 * weekly_Sale) + (20 * weekly_Shoes);
	cout << "Profit from option 3 is:" << profit_method3 << "dollars per week" << endl;

}


int main(){
	int WeeklyHours;
	int WeeklySales;
	int WeeklyShoes;

	WeeklyHours = get_Hours();
	WeeklySales = get_Sales();
	WeeklyShoes = get_Shoes();
	profit_1();
	profit_2(WeeklyHours, WeeklySales);
	profit_3(WeeklySales, WeeklyShoes);
}
