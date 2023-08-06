#include<iostream>
using namespace std;
int main()
{
	char A,B,C                  ;
	int num_1,num_2,num_3,total ;

	cout << "Enter Character (A,B,C) : " ;
	cin  >> A                            ;
	if      (A=='A')num_1 = 10 ;
	else if (A=='B')num_1 = 20 ;
	else if (A=='C')num_1 = 30 ;
	else num_1 = 0 ;

	cout << "Enter Character (A,B,C) : " ;
	cin  >> B                            ;
	if      (B=='A')num_2 = 10 ;
	else if (B=='B')num_2 = 20 ;
	else if (B=='C')num_2 = 30 ;
	else num_2 = 0 ;

	cout << "Enter Character (A,B,C) : " ;
	cin  >> C                            ;
	if      (C=='A')num_3 = 10 ;
	else if (C=='B')num_3 = 20 ;
	else if (C=='C')num_3 = 30 ;
	else num_3 = 0 ;

	total = num_1+num_2+num_3 ;

	cout << "A : " << num_1 << " B : " << num_2 << " C : " << num_3 << endl ;
	cout << "A+B+C = " << num_1 << "+" << num_2 << "+" << num_3 << " = " << total << endl ; 


	system("pause") ;
	return(0) ;
}
