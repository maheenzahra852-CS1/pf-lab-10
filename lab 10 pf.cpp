#include<iostream> 
using namespace std;
int main(){
	int a;
	cout<<"Enter the size of array"<<endl;
	cin>>a;
	char alpha[a];
	for(int i=0;i<a;i++)
	{
		cout<<"Enter an alphabet"<<i<<endl;
		cin>>alpha[i];
	}
	for(int i=0;i<a;i++){
		cout<<"Alphaet are"<<alpha[i]<<endl;
	}
	return 0;
}