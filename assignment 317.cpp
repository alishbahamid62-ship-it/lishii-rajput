#include<iostream>
#include<fstream>
using namespace std;
void inputArray(int arr[],int size)
{
	for(int i=0;i<size;i++){
	cout<<"enter element"<<i+1<<":";
	cin>>arr[i];
}
}
void displayArray(int arr[],int size)
{
	cout<<"array elements are:"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"";
	}
	cout<<endl;
}
int calculateSum(int arr[],int size)
{
	int sum =0;
	for(int i=0;i<size;i++){
	sum+=arr[i];
}
return sum;
}
void writetofile(int arr[],int size){
	ofstream file("data.txt");
	for(int i=0;i<size;i++){
	file<<arr[i]<<" ";
}
file.close();
cout<<"data is save in file"<<endl;
}
void readfromfile(int arr[],int size){
	ifstream file("data.txt");
	for(int i=0;i<size;i++){
	file>>arr[i];
}
 file.close();
cout<<"data read from file"<<endl;
displayArray(arr,size);
}
 int main(){
 const int SIZE=10;
 int arr[SIZE];
 	inputArray(arr,SIZE);
 	cout<<endl;
 	displayArray(arr,SIZE);
 	int sum =calculateSum(arr,SIZE);
 	cout<<"sum ="<<sum<<endl;
 	writetofile(arr,SIZE);
 	cout<<endl;
 	readfromfile(arr,SIZE);
 	return 0;
 }
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 
 
 
 
 
 
 

