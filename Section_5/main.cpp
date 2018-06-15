#include <iostream>


/*************************************************************************************
 * Number of Escorts: 2
 * Price per Escort: $60
 * Cost: $120.00
 * Tax: $18.00
 * =====================================
 * Total Estimate: $138.00
 * This estimate is valid for 30 days.
 * 
 * Pseudocode
 * Prompt the user to enter the number of rooms
 * display price per room
 * 
 * display cost (number of rooms * price per room)
 * display tax (number of rooms * price per room *  tax rate)
 * Display total estimate (number of rooms * price per room) + (number of rooms * price per room *  tax rate)
 * Display estimate expiration time
 *
 *************************************************************************************/
 




int main()
{
	std::cout << "Hello Welcome to Stones Pleasure Palace" << std::endl
	<< "How many Escorts do you need for your party?" << std::endl;

	int numberOfRegularEscorts {0};
	std::cin >> numberOfRegularEscorts;
	std::cout << std::endl;
	
	std::cout << "and How many of our Premium Escorts?" << std::endl;;
	int numberOfPremiumEscorts {0};
	std::cin >> numberOfPremiumEscorts;
	std::cout << std::endl;
	
	const double costPerRegularEscort {60.00};
	const double costPerPremiumEscort {120.00};
	
	double costOfRegularEscorts {costPerRegularEscort * numberOfRegularEscorts};
	double costOfPremiumEscorts {costPerPremiumEscort * numberOfPremiumEscorts};
	
	double totalCost {costOfPremiumEscorts + costOfRegularEscorts};
	const double taxRate {0.15};
	double salesTax {(costOfRegularEscorts * taxRate) + (costOfPremiumEscorts * taxRate)};
	const int expirationTime {30};
	
	std::cout 
	<< "Escorts: " << numberOfRegularEscorts << std::endl
	<< "Premium Escorts: " << numberOfRegularEscorts << std::endl
	<< "Cost per Escort: $" << costPerRegularEscort << std::endl 
	<< "Cost per Premium Escort: $" << costPerPremiumEscort << std::endl 
	<< "total cost: $" << totalCost << "\ntax: $" << salesTax << std::endl
	<< "==============================================" << std::endl
	<< "and a grand total of $" << totalCost + salesTax << std::endl;
	
		std::cout << "This offer will expire in " << expirationTime << " days." << std::endl;
		
		system("pause");
	
	return 0;
}
