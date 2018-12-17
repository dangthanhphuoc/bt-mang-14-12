#include <iostream>
using namespace std;
int main (){
	int arr [10];
	for (int i=0;i<=9;i++){
		cout << "Nhap cac phan tu cua mang arr ["<< i<<"]: ";
		cin >> arr [i] ;
	}
	cout << endl;
	cout << "Xuat cac phan tu cua mang "<< endl;
	for (int i=0;i<=9;i++){
		cout << arr [i]<<" ";
	}
}
