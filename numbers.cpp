//Name: Nicolas Wong

//Course: CSCI-136

//Instructor: Minh Nguyen

//Assignment: Lab 5C

//tells you prime number after a given number
#include <iostream>

using namespace std;

bool isDivisibleBy(int n, int d);//prototype

bool isPrime(int n)
{

	if (n <= 1){
		return false;
	}

	for (int i = 2; i <= n/2; i++){
		if (isDivisibleBy(n, i)){
			return false;
		}
	}
		return true;
}

int nextPrime(int n);//prototype
	
int main()
{
 
    int n;
    cout << "Enter number: ";
    cin >> n; 
       
    int answer = nextPrime(n);//gives next prime number in chronological order

	cout << answer;

}	

bool isDivisibleBy(int n, int d)
{
        if (d == 0){
            return false;//indivisible
        }
        
        else if (n % d == 0){//tests if remainder is 0
            return true;
        }
	
	return false;
}

int nextPrime(int n)   
{
	//int n;
	//cin >> n;
	
	int nextPrime = n + 1;
	while (!isPrime(nextPrime)){
		nextPrime++;
	}
	return nextPrime;
}
