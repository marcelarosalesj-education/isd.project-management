#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;



int main(){
	int t;
	double interest; 
	cout << "How long will be the period? ";
	cin >> t;
	double *data = (double*)malloc(t*sizeof(double));
	cout << "What will be the interest for that period? ";
	cin >> interest;
	//
	for(int i=0; i<t ; i++){
		bool next = true;
		cout << " Period " << i << " : ";
		//while( next ){
			double aux;

			cin >> aux;
			data[i] += aux;

			//cout << "Want to continue? (1/0) ";
			//cin >>  next;		
		//}
		
	}

	cout << "Your data is:"<<endl;
	for(int i=0; i<t; i++){
		cout << data[i]<< " "; 
	}
	cout << endl;

	int when;
	cout << "When do you want to calculate the equivalence [ 0 : "<< t-1 << " ]";
	cin >> when;

	double result = 0.0;
	// Move money from the past to the future
	for(int i=0; i<when; i++){
		result += data[i] * pow( 1+interest , abs(when-i) );
	}
	
	// Consider present (no interest affect this value)
	result += data[when];
	
	// Move money from the future to the past
	for(int i=t; i>when; i--){
		result += data[i] * pow( 1+interest , -abs(when-i) );
	}

	cout << fixed << setprecision (2) << "RESULT : " << result<<endl;


	free(data);

	return 0;
}