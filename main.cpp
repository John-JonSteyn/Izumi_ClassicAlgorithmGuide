/*headers*/
#include <iostream>
#include "demo.h"

void ExplainEToTheNth();

// horisontal rule
void hr(){
	std::cout << std::endl;
	for (int i = 0; i < 150; i++){
		std::cout << "_";
	}
	std::cout << std::endl;
}

/* Izumi */
int main(){

	hr();

	// Intro
	std::cout << std::endl << "Hi, you can call me Izumi. I'm here to explain classic algorithms such as the Fibonacci Sequence, Prime Factorisation, Bubble and Merge Sortation - among others." << std::endl;
	std::cin.get();

	hr();

	// Collatz
	std::cout << std::endl << "Let us begin with \'The Collatz Conjecture\':" << std::endl;
	std::cin.get();
	ExplainCollatz();

	hr();

	// e to the nth
	

	// Fibonacci
	std::cout << std::endl << "Next, we will discuss the Fibonacci sequence." << std::endl;
	std::cin.get();
	ExplainFibonacci();

	hr();

	// Sieve of Eratosthenes
	std::cout << std::endl << "Now, for Sieve of Eratosthenes:" << std::endl;
  	std::cin.get();
	ExplainSieveOfEratosthenes();

	hr();

	//  Sorting: Merge + Bubble
	std::cout << std::endl << "Finally, let us discuss Merge and Bubble Sorting." << std::endl;
	std::cin.get();
   	ExplainSortingMergePlusBubble();

	hr();

	return 0;
}