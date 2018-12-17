#include <iostream>
using namespace std;
int main (){
	int arr [4];
	for (int i=0;i<=4;i++){
		cout << "Nhap cac phan tu cua mang arr ["<< i<<"]: ";
		cin >> arr [i] ;
	}
	int max=-1000;
	int dem=0;
	for (int i=0;i<=4;i++){
		if (arr[i]==max){
			dem++;
		}
		else if (arr[i]>max){
			max=arr[i];
			dem=1;
		}
		
	}
	cout << "\nso lan xuat hien gia tri lon nhat la: "<<dem;

}
