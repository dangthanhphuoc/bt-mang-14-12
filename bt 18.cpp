#include <iostream>
using namespace std;
int main (){
	int arr[5];
	for (int i=0;i<=4;i++){
		cout << "Nhap cac phan tu cua mang arr ["<< i+1<<"]: ";
		cin >> arr [i] ;
	}
	int vi_tri_max;
	int max_arr=arr[0];
	for (int i=0;i<=4;i++){
		if (arr[i]%2==0&&arr[i]>max_arr){
			max_arr=arr[i];
		}
	}
	if (max_arr%2==0){
	cout<< "\nGT chan LN la: "<<max_arr;
	cout << "\nCac vi tri max: ";
	for (int i=0;i<=4;i++){
		if (arr[i]==max_arr){
			vi_tri_max=i+1;
			cout << vi_tri_max<<" ";
		}
	}
	}
	else {
		cout << "khong co gia tri chan";
	}
}
