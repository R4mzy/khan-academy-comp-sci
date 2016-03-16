#include "../res-files/std_lib_facilities.h"
#include <array>


// declare global vars
array<int, 25> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
int prime_desire;

int search_linear () {
	// do a linear search through the array
	for ( int l = 0 ; primes[l] != prime_desire ; l++ ) {
		cout << "Array index " << l << " equals " << primes[l] << ". We want " << prime_desire << ".\n";
	}
	cout << "Linear search done.\n\n";
}


int search_binary (int array, int targetValue) {
	// do a binary search through the array
	int min = 0;
	int max = array.size() - 1;
	int guess;
	
	while (primes[guess] != targetValue) {
		guess = (max + min)/2;
		cout << "\nCurrent min. is " << min << ", current max. is " << max << ", and current guess index is " << guess << ".\n";
		if (primes[guess] === targetValue) {
			return guess;
		} else if (prime[guess] < targetValue) {
			cout << "Too low!\n";
			min = guess + 1;
		} else {
			cout << "Too high!\n";
			max = guess - 1;
		}
		return -1;
	}
	
}

int main() {
	// determine what prime we want and store it
	cout << "\nGive us a prime, then. (Max is 97.)\n\n";
	cin >> prime_desire;
	
	cout << "\nTrying a linear search: \n";
	search_linear();
	
	cout << "\nTrying a binary search: \n";
	search_binary(primes, prime_desire);
	
}



/*		
	// I got the error below when trying these ifs for a fancier linear search. Not sure why...
	// expected primary-expression before '=' token

		if (prime_desire === primes[i]) {
			cout << "Found it! Index " << primes[i] << ".\n\n";
		}
		if (i === 25) {
			cout << "Nope, not found. Ending the linear search.\n\n";
		}
*/