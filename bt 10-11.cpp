#include <iostream>
using namespace std;
int main (){
	int arr [4];
	for (int i=0;i<=4;i++){
		cout << "Nhap cac phan tu cua mang arr ["<< i<<"]: ";
		cin >> arr [i] ;
	}
int max=-10000;
	for (int i=0;i<=4;i++){
		if (max<arr[i]){
			max=arr[i];
		}
	}cout << "Gia tri lon nhat trong mang: "<< max;
int min=10000;
	for (int i=0;i<=4;i++){
		if (min>arr[i]){
			min=arr[i];
		}
	}cout << "\nGia tri nho nhat trong mang: "<< min;
}

