#include <iostream>
using namespace std;
int main (){
	int arr [5];
	for (int i=0;i<=4;i++){
		cout << "Nhap cac phan tu cua mang arr ["<< i<<"]: ";
		cin >> arr [i] ;
	}
	cout << endl;
	cout << "Xuat cac phan tu cua mang "<< endl;
	for (int i=0;i<=4;i++){
		cout << arr [i]<<" ";
	}
	// Dao nguoc mang
	cout << "\nDao nguoc mang"<<endl;
	for (int i=4;i>=0;i--){
		cout << arr [i]<<" ";
	}
	// Tinh tong mang
	int tong_mang=0;
	for (int i=0;i<=4;i++){
		tong_mang+=arr [i];
	} cout << "\nTong cua mang la: "<< tong_mang;
	// Xuat cac phan tu so chan
	cout << "\nXuat cac phan tu la so chan"<<endl;
	for (int i=0;i<=4;i++){
		if (arr[i]%2==0){
			cout << arr [i]<<" ";
		}
	}
	// Xuat cac phan tu la so le
	cout << "\nXuat cac phan tu la so le"<<endl;
	for (int i=0;i<=4;i++){
		if (arr[i]%2!=0){
			cout << arr [i]<<" ";
		}
	}
}
