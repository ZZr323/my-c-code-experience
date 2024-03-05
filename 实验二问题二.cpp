#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int temps[100];
int a[100];
int b[100];
void inputTemps(int temp[], int n);//输入n个温度
void displayTemps(int temp[], int n);//显示柱状图
void showMostcnt(int temp[], int n);//显示次数最多的温度以及次数

int main() {
	int n;
	cin >> n;
	inputTemps(temps, n);
	displayTemps(temps, n);
	showMostcnt(temps, n);
	return 0;
}

void inputTemps(int temp[], int n) {
	cout << "Please input the tempratures:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> temp[i];
	}
	cout << endl;
}

void displayTemps(int temp[], int n) {
	cout << "显示柱状图如下：" << endl;
	for (int i = 0; i < n; i++) {
		int j = abs(temp[i]);
		if (temp[i] >= 0) {
			cout << left << setw(50) << temp[i]<<"|";
			while (j > 0) {
				cout << "*";
				j--;
			}
		}
		if (temp[i] < 0) {
			cout << left << setw(50-j) << temp[i];
			while (j > 0) {
				cout << "*";
				j--;
			}
			cout << "|";
		}
		cout << endl;
	}
}

void showMostcnt(int temp[], int n) {
	for (int i = 0; i < n; i++) {
		if (temp[i] >= 0) {
			a[temp[i]]++;
		}
		else
		{
			b[abs(temp[i])]++;
		}
	}
	int max1 = 0, max2 = 0, m, p;
	for (int j = 0; j < 100; j++) {
		if (a[j] > max1) {
			max1 = a[j];
			m = j;
		}
		if (b[j] > max2) {
			max2 = b[j];
			p = j;
		}
	}
	int max, x, t;
	max = (max1 > max2) ? max1: max2;
	x = (max1 > max2) ? m : p;
	t = (max1 > max2) ? m : p - p * 2;
	cout << "出现次数最多的是" << t << "度," << "出现了" << max << "次";
}