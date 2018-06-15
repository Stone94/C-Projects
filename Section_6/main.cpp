#include <iostream>

/**************************************************************************************************
 *									Challenge Summary											  *
 **************************************************************************************************
 * Write a program that asks the user to enter the following:
 * 
 * An integer representing the number of cents
 * 
 * You may assume that the number of cents entered is greater than or equal to zero
 * 
 * The program should then display how to provide that change to the user.
 * 
 * Here is a sample run:
 * 
 * Enter an amount in cents: 92
 * 
 * You can provide this change as follows:
 * dollars	: 0
 * quarters	: 3
 * dimes	: 1
 * nickels	: 1
 * pennies	: 1
 * 
 * Also think of how you might solve the problem using the modulo operator.
 * 
 **************************************************************************************************/



int main()
{
	int cents {0};
	
	const int hundred_value {10000};
	const int fifty_value 	{5000};
	const int twenty_value 	{2000};
	const int ten_value 	{1000};
	const int five_value 	{500};
	const int toonie_value 	{200};
	const int dollar_value 	{100};
	const int quarter_value {25};
	const int dime_value 	{10};
	const int nickel_value 	{5};

	// Output to the user to enter an integer of cents.
	// THE LONG AND DIRTY
	std::cout << "Enter amount in cents: " << std::endl;
	
	// Input Cents From the user
	std::cin >> cents;
	std::cout << std::endl;
	
	int balance{}, hundreds{}, fifties{}, twenties{}, tens{}, fives{}, toonies{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
	
	hundreds = cents / hundred_value;
	balance  = cents - (hundreds * hundred_value);
	
	fifties  = balance / fifty_value;
	balance -= fifties * fifty_value;
	
	twenties = balance / twenty_value;
	balance -= twenties * twenty_value;
	
	tens 	 = balance / ten_value;
	balance -= tens * ten_value;
	
	fives 	 = balance / five_value;
	balance -= fives * five_value;
	
	toonies  = balance / toonie_value;
	balance -= toonies * toonie_value;
	
	dollars  = balance / dollar_value;
	balance  -= dollars * dollar_value;
	
	quarters = balance / quarter_value;
	balance -= quarters * quarter_value;
	
	dimes 	 = balance / dime_value;
	balance -= dimes * dime_value;
	
	nickels  = balance / nickel_value;
	balance -= nickels * nickel_value;
	
	pennies  = balance;
	
	std::cout << "hundreds: " << hundreds << std::endl;
	std::cout << "fifties: " << fifties << std::endl;
	std::cout << "twenties: " << twenties << std::endl;
	std::cout << "tens: " << tens << std::endl;
	std::cout << "fives: " << fives << std::endl;
	std::cout << "toonies: " << toonies << std::endl;
	std::cout << "dollars: " << dollars << std::endl;
	std::cout << "quarters: " << quarters << std::endl;
	std::cout << "dimes: " << dimes << std::endl;
	std::cout << "nickels: " << nickels << std::endl;
	std::cout << "pennies: " << pennies << std::endl;
	std::cout << std::endl;
	
	// USING THE MODULOS OPERATOR
	
	
	balance = hundreds = fifties = twenties = tens = fives = toonies = dollars = quarters = dimes = nickels = pennies = 0; // reset everything to zero
	
	
	hundreds = cents / hundred_value;
	balance  = cents % hundred_value;
	
	fifties  = balance / fifty_value;
	balance %= fifty_value;
	
	twenties = balance / twenty_value;
	balance %= twenty_value;
	
	tens 	 = balance / ten_value;
	balance %= ten_value;
	
	fives 	 = balance / five_value;
	balance %= five_value;
	
	toonies  = balance / toonie_value;
	balance %= toonie_value;
	
	dollars  = balance / dollar_value;
	balance  %= dollar_value;
	
	quarters = balance / quarter_value;
	balance %= quarter_value;
	
	dimes 	 = balance / dime_value;
	balance %= dime_value;
	
	nickels  = balance / nickel_value;
	balance %= nickel_value;
	
	pennies  = balance;
	
	std::cout << "hundreds: " << hundreds << std::endl;
	std::cout << "fifties: " << fifties << std::endl;
	std::cout << "twenties: " << twenties << std::endl;
	std::cout << "tens: " << tens << std::endl;
	std::cout << "fives: " << fives << std::endl;
	std::cout << "toonies: " << toonies << std::endl;
	std::cout << "dollars: " << dollars << std::endl;
	std::cout << "quarters: " << quarters << std::endl;
	std::cout << "dimes: " << dimes << std::endl;
	std::cout << "nickels: " << nickels << std::endl;
	std::cout << "pennies: " << pennies << std::endl;
	
	return 0;
}
