//Tim so phan tu so chan, so le lon nhat cua mang
#include <iostream>
using namespace std;
int  main (){
	int arr [5];
	for (int i=0;i<=4;i++){
		cout << "Nhap cac phan tu cua mang arr ["<< i<<"]: ";
		cin >> arr [i] ;
	}
	// So phan tu so chan lon nhat
	int dem=0;
	for (int i=0;i<=4;i++){
		if (arr[i]%2==0){
		if (int max=arr[i]){
			dem++;
		}
		else if (arr[i]>max){
			max=arr[i];
			dem=1;
		}		
		}
	}
	cout << "So phan tu so chan lon nhat: "<<dem;
	// So phan tu so le lon nhat
	int max_le=arr[0];
	int dem_le=0;
	for (int i=1;i<=4;i++){
		if (arr[i]%2!=0&&arr [i]==max_le){
			dem_le++;
		}
		else if (arr[i]%2!=0&&arr [i]>max_le){
			max_le=arr[i];
			dem_le=1;
		}
	}
	cout << "\nSo phan tu so le lon nhat: "<<dem_le;
}
