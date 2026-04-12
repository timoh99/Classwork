#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	  long long arr[7]= {2,3,4,5,6,7,8};
	  float sum =0;
	  long long sumsquared=0;
	  long long sumcubed= 0;
	  if(arr[i]<=arr[i+1]){
	  	int temp = arr[i];
	  	arr[i]=arr[i+1];
	  	int temp = arr[i+1];
	  }
	for(int i=0;i<7;i++){
		cout<<arr[i]<<endl;
		sum+=arr[i];
		sumsquared+=arr[i]*arr[1];
		sumcubed += arr[i]*arr[i]*arr[i];
	}
	
	cout<<"sum:"<<sum<<endl;
	cout<<"sum squared"<<sumsquared<<endl;
	cout<<"sum cubed"<<sumcubed<<endl;
	 int size = sizeof(arr);

    cout << "Array size: " << size << endl;
	return 0;
}