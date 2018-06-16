//Section 9 if statement

#include <iostream>

int main()
{
  int num{};
  const int min {1};
  const int max {100};

  std::cout << "Enter a number between " << min << " and " << max << ":";
  std::cin >> num;

  if (num >= min){
    std::cout << "\n========== IF STATEMENT ONE =============" << std::endl;
    std::cout << num << " is greater than " << min <<std::endl;

    int diff {num - min};
    std::cout << num << " is " << diff << " greater than " << min << std::endl;
  }

  if (num <= max){
    std::cout << "\n========== IF STATEMENT TWO =============" << std::endl;
    std::cout << num << " is less than " << max << std::endl;

    int diff {max - num};
    std::cout << num << " is " << diff << " less than " << max << std::endl;
  }

  if (num >= min && num <= max){ // BOTH STATEMENTS MUST BE TRUE
    std::cout << "\n========== IF STATEMENT THREE =============" << std::endl;
    std::cout << num << " is in range " << std::endl << "This means statements one and two must be true!" << std::endl;
  }

  if (num == min || num == max){ // EITHER STATEMENT MUST BE TRUE
    std::cout << "\n========== IF STATEMENT FOUR =============" << std::endl;
    std::cout << num << " is right on the boundary " << std::endl;
    std::cout << "This means all four statements displayed, amazing!" << std::endl;
  }
  std::cout << std::endl;
  return 0;
}
