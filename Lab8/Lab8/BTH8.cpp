#include<iostream>
using namespace std;
#define MAXSIZE 50
/*=================== BT1 =====================
Viết chương trình thực hiện các công việc sau đây:
a) Khai báo một mảng alpha lưu 50 phần tử kiểu double.
b) Gán giá trị của 25 phần tử đầu tiên là bình phương của chỉ số phần tử, 25 phần
tử còn lại có giá trị là lập phương của chỉ số.
c) In các giá trị trong mảng alpha ra màn hình, mỗi dòng gồm 10 phần tử.
*/



void printPower(){
	double alpha[MAXSIZE];
	for (int i = 0; i <= MAXSIZE - 1; i++) {
		if (i < 25) {
			alpha[i] = i * i;
		}
		else {
			alpha[i] = i * i * i;
		}
	}
	for (int i = 0; i <= MAXSIZE - 1; i++) {
		if ((i + 1) % 10 == 0) {
			cout << alpha[i] << endl;
		}
		else {
			cout << alpha[i] << "\t";
		}

	}

}









int main() {
	//Khai bao bien
	int exercise = 0;
	do {
		cout << "Chon bai tap: ";
		cin >> exercise;
		switch (exercise) {
		case 1: 
			printPower();
			break;
		case 0:
			break;
		default:
			cout << "Bai tap khong hop le!\n";
			break;
		}
	} while (exercise != 0);
	
	
	
	
	
	
	system("pause");
	return 0;
}