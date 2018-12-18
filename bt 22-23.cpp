#include <iostream>
using namespace std;
int main (){
	int arr[5];
	for (int i=0;i<=4;i++){
		cout << "Nhap cac phan tu cua mang arr ["<< i+1<<"]: ";
		cin >> arr [i] ;
	}
	cout << "mang truoc sap xep"<<endl;
	for (int i=0;i<=4;i++){
		cout << arr[i]<<"\t";
	}
	// xep tang dan
	cout << "\nmang sau sap xep tang dan"<<endl;
	for (int i=0;i<5;i++){
		for (int j=4;j>i;j--){
			if (arr[j]<arr[j-1]){
				 int xep=arr[j];
				arr[j]=arr[j-1];
				arr [j-1]=xep;	
			}
		}
	cout << arr[i]<<"\t";	
	}
	//xep giam dan
		cout << "\nmang sau sap xep giam dan"<<endl;
	for (int i=0;i<5;i++){
		for (int j=4;j>i;j--){
			if (arr[j]>arr[j-1]){
				 int xep=arr[j];
				arr[j]=arr[j-1];
				arr [j-1]=xep;	
			}
		}
	cout << arr[i]<<"\t";	
	}
}
