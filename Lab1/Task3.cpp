#include <iostream>
#include <list>
// Worked along side Jibril Abdulazeez
using namespace std;

inline int Task3() {
	const int max_trials = 5000;
	int birthdays[50];
	for (int people = 2; people <= 50; people++) {

		int number_of_matches = 0;
		for (int trial = 0; trial <= max_trials; trial++) {

			int match = 0;
			for (int i = 0; i < people; i++) {

				int birthday = (rand() % 365) + 1;
				birthdays[i] = birthday;
				bool result = false;
				for (int j = 0; j < i; j++) {
					if (birthdays[j] == birthdays[i]) {
						match++;
					}
				}
			}
			if (match >= 1)
			{
				number_of_matches++;
			}
		}

		float probability = float(number_of_matches) / float(max_trials);
		cout << "For " << people << " people, the probability of two birthdays is about: " << probability << endl;
	}


	return 0;
}