#include <iostream>

using namespace std;


/* Task 1
	void printNum(int N, int K, char S = 'S') {
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < K; ++j) {
				cout << S;
			}
			cout << "\n";
		}
	}
*/

/* Task 2 
	int factorial(int num) {
		int total = 1;

		for (int i = 1; i <= num; ++i) {
			total *= i;
		}
		return total;
}
*/



/* Task 3 

	void getNum(int num) {
		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				cout << num << " isn't prime number.\n";
				return;
			}
		}
		cout << num << " is prime number. \n";
	}
*/

/* Task 4 

	int Num(int num) {
		int result = 1;
		for (int i = 0; i < 3; i++) {
			result *= num;
		}
		return result;
	}
*/

/* Task 5 

	void twoNums(int num1, int num2) {
		if (num1 > num2) {
			cout << num1 << " bigger then " << num2 << "\n";
		}
		else if (num1 == num2) {
			cout << "Numbers are the same.\n";
		}
		else if (num2 > num1) {
			cout << num2 << " bigger then " << num1 << "\n";
		}
		else {
			cout << "Error.\n";
		}
	}
*/

/* Task 6 

	bool printNum(int num) {
		if (num > 0) {
			return true;
		}
		else if (num == 0) {
			return false;
		}
		else if (num < 0) {
			return false;
		}

		else {
			cout << "Error.\n";
		}
	}
*/

/* Task 7 


	void Array(int arr[],int size) {
		int min = arr[0];
		int max = arr[0];
		int minIndex = 0;
		int maxIndex = 0;


		for (int i = 1; i < size; i++) {
			if (arr[i] < min) {
				min = arr[i];
				minIndex = i;
			}

			if (arr[i] > max)
			{
				max = arr[i];
				maxIndex = i;
			}
		}
		cout << "Min: " << min << endl;
		cout << "Min index: " << minIndex << endl;
		cout << "Max: " << max << endl;
		cout << "Max index: " << maxIndex << endl;
	}
*/

/* Task 8 

void Array(int arr[], int size) {
	for (int i = 0; i < size / 2; ++i) {
		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}
*/

/* Task 9 */

int primeNumber(int arr[], int size) {
	int count = 0;

	for (int i = 0; i < size; ++i) {
		bool prime = true;

		for (int j = 2; j < arr[i]; ++j) {
			if (arr[i] % j == 0) {
				prime = false;
				break;
			}
		}
		if (prime)
		{
			count++;
		}
	}
	return count;
}




int main()
{
	/* Task 1 
		printNum(5, 10, 'S');
	*/
	/* Task 2 
		cout << factorial(5);
	*/
	/* Task 3 
		getNum(7);
	*/
	/* Task 4
		cout << Num(5);
	*/
	/* Task 5 
		twoNums(7, 4);
		twoNums(3, 4);
		twoNums(4, 4);
	*/
	/* Task 6 
	cout << printNum(4) << endl;
	cout << printNum(0) << endl;
	cout << printNum(-10) << endl;
	cout << printNum(8) << endl;
	*/
	/* Task 7 
		int arr[5] = { -4, 0, 9, 11, 3 };
		Array(arr, 5);
	*/
	/* Task 8 

	int arr[5] = { 6, 0, -9, 3, 52 };
	for (int i = 0; i < 5; ++i) {
		cout << arr[i] << " ";
		
	}
	cout << "\n";
	Array(arr, 5);
	for (int i = 0; i < 5; ++i){
		cout << arr[i] << " ";
	}

	*/
	/* Task 9 */

		int arr[6] = { 2, 4, 5, 7, 8, 9 };

		cout << primeNumber(arr, 6) << endl;
		cout << primeNumber(arr, 1) << endl;
		cout << primeNumber(arr, 4) << endl;
		cout << primeNumber(arr, 3) << endl;
		



}

