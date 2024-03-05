#include <iostream>
#include <iomanip>
using namespace std;

void inputTemps(int temp[], int n);//输入n个温度
void displayTemps(int temp[], int n);//显示柱状图
void displayPeaks(int temp[], int n);//显示月间温度中的所有峰值
void displayFlat(int temp[], int n);//显示月间持续最久的温度

int main() {
	int temps[15];

	inputTemps(temps, 15);
	displayTemps(temps, 15);
	displayPeaks(temps, 15);
	displayFlat(temps, 15);

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
	for (int i = 1; i <= n; i++) {
		cout << left << setw(10) << i;
		int j = temp[i - 1];
		while (j > 0) {
			cout << "*";
			j--;
		}
		cout << endl;
	}
}

void displayPeaks(int temp[], int n) {
	cout << "显示峰值如下：" << endl;
	int cnt = 0;
	for (int i = 1; i < n-1; i++) {
		if (temp[i] > temp[i + 1] && temp[i] > temp[i - 1]) {
			cout << "Max at day" << " " << i + 1 << " " << "is" << " " << temp[i] << endl;
			cnt++;
		}
	}
	if (cnt == 0)	cout << "没有峰值" << endl;
}

void displayFlat(int temp[], int n) {
	cout << "显示崮的长度如下：" << endl;
	int length = 0;
	for (int i = 0; i < n; i++) {
		if (temp[i] == temp[i + 1]) {
			length++;
		}
	}
	cout << "The length of longest flat is " << length << endl;
}