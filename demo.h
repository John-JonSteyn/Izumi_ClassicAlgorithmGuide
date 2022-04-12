#pragma once
#include <bits/stdc++.h>

void ExplainEToTheNth();

void ExplainCollatz(){

	// overview
	std::cout << "Named after the mathematician Lothar Collatz, the conjecture is established on the idea that we could repeat 2 operations to turn any positive integer into 1." << std::endl;
	std::cout << "Since its establishment in 1937, this statement has been found to be true for all tested values." << std::endl;
	std::cin.get();

	// algorithm
	std::cout << "The first operation is stated as the following: if n is an even number we half its value." << std::endl;
	std::cout << "The second operation states that if n is an odd number, we multiply it by 3 and increment it by one." << std::endl;
	std::cin.get();
	std::cout << "We will now test this theory, and record how many iterations or \'steps\' we took until our end value is equal to one." << std::endl;
	std::cin.get();

	// var
	int n, original, steps;
	steps = 1;
	std::cout << "Please enter a number larger than one:";
	std::cin >> n;
	std::cout << std::endl;
	original = n;

	// wrong input
	while (n <= 1) {
		std::cout << "This number is not larger than 1. Please enter an integer larger than one: ";
		std::cin >> n;
		std::cout << std::endl << std::endl;
	}

	std::cout << "The value you have selected is " << n << std::endl << std::endl;
	while(n != 1){
		// even
		if(n %2 == 0){
			std::cout << "Step " << steps << ": " << n << " is an even number, since " << n << " mod 2 = 0" << std::endl;
			std::cout << "As such, we half the value; n / 2" << std::endl;
			n = n / 2;
			std::cout << "Our value is now equal to " << n << "." << std::endl << std::endl;
			steps++;
			std::cin.get();
		}
		// not even
		else{
			std::cout << "Step " << steps << ": " << n << " is not an even number, since " << n << " mod 2 != 0" << std::endl;
			std::cout << "As such, we multiply the value with three and increment it by one; (n * 3) + 1" << std::endl;
			n = (n * 3) + 1;
			std::cout << "n is now equal to " << n << std::endl;
			steps++;
			std::cin.get();
		}
	}
	// result
	std::cout << "The number of steps required for " << original << " to reach the value of one with these two operations is " << steps << std::endl;
	std::cin.get();
	std::cout << "It might've taken a few iterations, but we did arrive at 1 - which supports Collatz's Conjecture." << std::endl;
	std::cin.get();
}

void ExplainFibonacci(){

	// overview
	std::cout << "The Fobonacci sequence is named after Leonardo Bonacci of Pisa, the son of Bonacci - or in Italian: \'filius Bonacci\'." << std::endl;
	std::cout << "Although Leonardo was the one to expose Europe to the Fibonacci sequence, it was first described in Indian mathematics." << std::endl;
	std::cin.get();

	// algorithm
	std::cout << "The sequence may sound highly sophisticated, but is quite elementary." << std::endl;
	std::cout << "Each number in the sequence is the sum of the previous two numbers." << std::endl;
	std::cout << "It is customary to start with 0 and 1. We will repeat this sequence 12 times with our example." << std::endl;
	std::cin.get();
	
	// var
	int a = 0, b = 1, counter = 1, temp;

	// sequence
	std::cout << "Number " << counter << " in our sequence is " << a << std::endl;
	counter++;
	while (counter != (12)) {
		temp = b;
		b = a + b;
		a = temp;
		std::cout << "Number " << counter << " in our sequence is " << b << ". If we add " << a << " to " << b << " we will have our next number."  << std::endl;
		counter++;
		std::cin.get();
	}
}


void ExplainSieveOfEratosthenes(){

	// overview
	std::cout << "Sieve of Eratosthenes is an ancient greek algorithm aimed to find all prime numbers within a given limit." << std::endl;
	std::cout << "A prime number is an integer larger than 1, that is not the product of two smaller natural numbers." << std::endl;
	std::cin.get();

	//algorithm Basics
	std::cout << "The algorithm is a simple, yet effective one." << std::endl;
	std::cout << "Starting with the first prime number, 2, we'll remove every 2nd number within our limit." << std::endl;
	std::cout << "Doing so, we've removed all numbers of which 2 is a prime number." << std::endl;
	std::cin.get();
	
	std::cout << "The same logic is followed with the next number." << std::endl;
	std::cout << "In this case, the number three. We'll remove every third number within out limit." << std::endl;
	std::cout << "Doing so, we've removed all numbers of which 3 is a prime number." << std::endl;
	std::cin.get();

	int n;
	std::cout << "Let us begin by selecting a limit, please enter one now:";
	std::cin >> n;
	std::cout << std::endl;
	while (n < 2) {
		std::cout << "This number is not larger than 1. Please enter an integer larger than one: ";
		std::cin >> n;
	}
	bool prime[n];
	std::cout << "Now we'll create a boolean array as long as our limit, and initialise all entries as true." << std::endl;
	std::cin.get();
	memset(prime, true, sizeof(prime));
	
	for (int p = 2; ((p*p) <= n); p++)
    {
        if (prime[p] == true)
        {
            // Update all multiples of p
			std::cout << p << " is a prime number, and now we mark all multiples of " << p << " it as non-primes." << std::endl;
			std::cin.get();
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
	
	std::cout << "As such our prime numbers witin our limit are the following:";
    for (int p=2; p<=n; p++){
		//if p is a prime
		if (prime[p])
          std::cout << " " << p;
	}
	std::cout << std::endl;
	std::cin.get();
	std::cout << std::endl << "And so, we detemine all primes within a limit using Sieve of Eratosthenes." << std::endl;
	std::cin.get();
}

void ExplainSortingMergePlusBubble(){
	// overview
	std::cout << "In Computer Science, sorting algorithms are utilised to \'sort\' elements into order, whether alphabetical, numerical or otherwise." << std::endl;
	std::cout << "We will demonstrate the logic behind both Merge Sort and Bubble sorting - two of the most common sorting algorithms." << std::endl;
	std::cin.get();
	
	// bubble
	std::cout << "Since Bubble Sorting is simpler, we will demonstrate it first." << std::endl;
	std::cin.get();
	std::cout << "We will need a series of elements (referred to as an array) to sort through. For the purposes of this program we will sort through 8 integers - in ascending order." << std::endl;
	std::cin.get();
	int bubble[8];
	// usually we would initialise i as 0, this is an exception for ease output
	for (int i=1; i <= 8; i++){ 
		std::cout << "Please enter number " << i << ": ";
		std::cin >> bubble[(i-1)];
	}

	std::cout << std::endl << "In short, we will compare each number to the number next to it, and if they are in the wrong order we will swap them." << std::endl;
	std::cout << std::endl << "We will then evaluate the next number, whether we swapped it or not, to the number next to it and repeat the process." << std::endl;
	std::cin.get();
	std::cout << "We will have to do this multiple times, since if we only do this once, and the smallest number is last, we would only have moved it to the position second from last." << std::endl;
	std::cout << "We will need to repeat this process 1 less time than our amount of elements to ensure that all elements are reliably sorted." << std::endl;
	std::cin.get();
	std::cout << "It should be noted, however, that the largest number will be moved to the final postition with merely 1 iteration." << std::endl;
	std::cout << "Because of this, we can disregard the last position each time we repeat the process." << std::endl;
	std::cout << "This sorting method found its name due to the sorted elements being \'bubbled\' toward the rear." << std::endl;
	std::cin.get();

	// sorting
	int temp;
	for (int j = 8 - 1; j > 0; j--) {

		//show array
		std::cout << std::endl << "Our array is now: ";
		
		for (int l = 0; l < 8; l++) {
        std::cout<<bubble[l]<<" ";
		}
		
		std::cout << std::endl;
		std::cin.get();
		if (j != 7) std::cout << "We will now only inspect the first " << (j+1) << " elements, since the rest are already sorted." << std::endl;
		std::cin.get();
		
		for (int k = 0; k < j; k++) {
			
			// elements swap
			if (bubble[k] > bubble[k + 1]) {
				std::cout << "Because " << bubble[k] << " is larger than " << bubble[k+1] << " we will swap them.";
				std::cin.get();
				temp = bubble[k];
				bubble[k] = bubble[k+1];
				bubble[k+1] = temp;
				std::cout << std::endl << "With these elements swapped, our new array is:";
				
				for (int l = 0; l < 8; l++) {
					std::cout<<bubble[l]<<" ";
					}
				std::cout << std::endl;
				std::cin.get();
			}
		}
		
		// draw line for easier readibility
		std::cout << std::endl;
		for (int i = 0; i < 80; i++){
			std::cout << "_";
		}
		std::cout << std::endl;

	}

	std::cout << "Now we have our sorted array: ";
	for (int m = 0; m < 8; m++) {
        std::cout<<bubble[m]<<" ";
    }
	std::cout << std::endl;
	std::cin.get();
	

	// merge

}