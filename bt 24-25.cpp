#include <iostream>
#include<math.h>
using namespace std;
int main (){
	int arr[5];
	for (int i=0;i<=4;i++){
		cout << "Nhap cac phan tu cua mang arr ["<< i+1<<"]: ";
		cin >> arr [i] ;
	}
	int vi_tri;
	for (int i=0;i<=4;i++){	
		int kt=1;
		if (arr[i]<=1){
		kt=0;
		}
		else {
		int n;
		for (int n=2;n<=sqrt(arr[i]);n++){
		if (arr[i]%n==0){
			kt=0;
		}
	}			
}
	if (kt==1){
		cout <<arr[i]<<"  "<<endl;
		cout <<"vi tri: "<<i+1<<endl;
	}


}
}
