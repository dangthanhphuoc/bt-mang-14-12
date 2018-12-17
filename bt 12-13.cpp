#include <iostream>
using namespace std;
int main (){
	int arr [4];
	for (int i=0;i<=4;i++){
		cout << "Nhap cac phan tu cua mang arr ["<< i<<"]: ";
		cin >> arr [i] ;
	}
	// so chan lon nhat trong mang
	int  max_chan=-100000;
	for (int i=0;i<=4;i++){
		if (arr[i]%2==0&arr[i]>max_chan){			
			max_chan=arr[i];
		}		
	}cout << "\nSo chan lon nhat la: "<<max_chan;
	// so le lon nhat trong mang
	int  max_le=-100000;
	for (int i=0;i<=4;i++){
		if (arr[i]%2!=0&arr[i]>max_le){			
			max_le=arr[i];
		}		
	}cout << "\nSo le lon nhat la: "<<max_le;
	// so chan be nhat trong mang
	int  min_chan=100000;
	for (int i=0;i<=4;i++){
		if (arr[i]%2==0&arr[i]<min_chan){			
			min_chan=arr[i];
		}
		}cout << "\nSo chan nho nhat la: "<<min_chan;	
	// so le be  nhat trong mang
	int  min_le=100000;
	for (int i=0;i<=4;i++){
		if (arr[i]%2!=0&arr[i]<min_le){			
			min_le=arr[i];
		}		
} cout << "\nSo le nho nhat la: "<<min_le;
}
