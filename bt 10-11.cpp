#include <iostream>
using namespace std;
int main (){
	int arr [5];
	for (int i=0;i<=4;i++){
		cout << "Nhap cac phan tu cua mang arr ["<< i<<"]: ";
		cin >> arr [i] ;
	}
int max=arr[0];
	for (int i=0;i<=4;i++){
		if (max<arr[i]){
			max=arr[i];
		}
	}cout << "Gia tri lon nhat trong mang: "<< max;
int min=arr[0];
	for (int i=0;i<=4;i++){
		if (min>arr[i]){
			min=arr[i];
		}
	}cout << "\nGia tri nho nhat trong mang: "<< min;
}

