#include<iostream>
#include<iomanip> 
using namespace std;

int main(){
	double loan, interest, payment, total;
	int year = 1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << endl;
	
	while(true) {
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << (interest * loan) / 100;
		total = (interest * loan) / 100 + loan;
		cout << setw(13) << left << total;
		if (total < payment) payment = total;
		cout << setw(13) << left << payment;
		loan = total - payment;
		cout << setw(13) << left << loan;
		cout << endl;
		year++;
		if (loan <= 0) break;
	}
	return 0;
}