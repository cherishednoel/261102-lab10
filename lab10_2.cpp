#include<iostream>
using namespace std;

void printO(int row, int colunm){
	if(row <= 0 || colunm <= 0){
		cout << "Invalid input";
		return;
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < colunm; j++){
			cout << "O";
		}
		cout << "\n";
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
