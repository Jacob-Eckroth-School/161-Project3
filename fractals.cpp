#include <iostream>

using namespace std;

void pattern(int,int);

int main(){

	int n =0,col=0;
	cout<<"Enter the max number of stars: ";
	cin >>n;
	cout<<"Enter the column on which the max star line will start on: ";
	cin >>col;
	
	pattern(n,col);

	return 0;



}

void pattern(int n, int col){
	if(n >1){
		pattern(n-2,col+2);
	}
	for(int i = 0; i < col; i++){
	cout << " ";

	}
	for(int j = 0; j < n; j++){
		cout << "* ";
	}
	cout << endl;
	if(n>1){
		pattern(n-2,col+2);
	}




}

