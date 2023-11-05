#include <iostream>
#include <string>
using namespace std;

void bubbleSort(int * arr, int len){
	for(int i = 0; i < len -1 ; i++){
		for(int j = 0; j < len -1 -i; j++){
			if(arr[j] > arr[j+1]){
				int tem = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tem;
			}
		}
	}
}

void printArr(int arr[], int len){
	for(int i = 0; i< len; i++){
		cout << arr[i] << endl;
	}
}

int main(){
	int arr[] = {3,4,2,1,6,7,6,5,8,10,9,13,11,12};
	int len = sizeof(arr)/sizeof(int);
	cout << "Before" << endl;
	printArr(arr,len);
	bubbleSort(arr,len);
	cout << "After" << endl;
	printArr(arr,len);

return 0;

}