#include <iostream>
using namespace std;
int main (){
	int arr[5];
	for (int i=0;i<=4;i++){
		cout << "Nhap cac phan tu cua mang arr ["<< i+1<<"]: ";
		cin >> arr [i] ;
	}
	int vi_tri_min;
	int min_arr=arr[0];
	for (int i=0;i<=4;i++){
		if (arr[i]%2==0&&arr[i]<min_arr){
			min_arr=arr[i];
		}
	}
	if (min_arr%2==0){
	cout<< "\nGT chan NN la: "<<min_arr;
	cout << "\nCac vi tri min: ";
	for (int i=0;i<=4;i++){
		if (arr[i]==min_arr){
			vi_tri_min=i+1;
			cout << vi_tri_min<<" ";
		}
	}
	}
	else {
		cout << "khong co gia tri chan";
	}
}
