#include <iostream>
#include <vector>
#include <algorithm>
#include <boost/lambda/lambda.hpp>

using namespace std;

void printVector(vector<int>  vectorOfNumbers) {
	for(auto number : vectorOfNumbers) {
		cout << number << " ";
	}
	cout << endl;
}

int main () {
	
	// 1. Loop over an vector using for loop.
	vector<int> vectorOfNumbers = {1, 2, 3, 4};
	//
	//for (int i = 0; i < vectorOfNumbers.size(); i++) {
	//	cout << vectorOfNumbers[i] << " ";
	//}
	//cout << endl;
	
	// 2. Loop over a vector using for each.
	vectorOfNumbers.push_back(1000);

	//for (auto number : vectorOfNumbers) {
	//	cout << number << " ";
	//}
	//cout << endl;

	// 3. Loop over an vector using for_each, with this way, we can specify the chunk we want.
	for_each(vectorOfNumbers.begin(), vectorOfNumbers.end(), cout << boost::lambda::_1 << " ");
	cout << endl;

	//for_each( vectorOfNumbers.begin() + 1, vectorOfNumbers.end(), [](int number) { cout << number << " "; });
	//cout << endl;

	//vectorOfNumbers.pop_back();

	//for_each( vectorOfNumbers.begin(), vectorOfNumbers.end(), [](int number) { cout << number << " "; });
	//cout << endl;

	//cout << vectorOfNumbers.front() << endl;
	//cout << vectorOfNumbers.at(0) << endl;
	//
	//try {
	//	vectorOfNumbers.at(100);
	//} catch ( std::out_of_range& ex ) {
	//	cerr << ex.what() << endl;
	//}

}
