#include <iostream>
using namespace std;
int main (){
	int arr [4];
	for (int i=0;i<=4;i++){
		cout << "Nhap cac phan tu cua mang arr ["<< i<<"]: ";
		cin >> arr [i] ;
	}
	// Tinh tong cac phan tu so chan trong mang
	int tong_so_chan=0;
	for (int i=0;i<=4;i++){
		if (arr[i]%2==0){
			tong_so_chan+=arr[i];
		}
	}cout << "\nTong so chan la: "<< tong_so_chan;
	// Tinh tong cac phan tu so le trong mang
	int tong_so_le=0;
	for (int i=0;i<=4;i++){
		if (arr[i]%2!=0){
			tong_so_le+=arr[i];
		}
	}cout << "\nTong so chan la: "<< tong_so_le;
}
