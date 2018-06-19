#include <iostream>
#include <vector>
#include <iomanip>

int main(){
/*int scores [] { 100, 90, 97 };
std::vector <int> vScores{ 200, 180, 194 };

for (auto score : scores)
  std::cout << score << std::endl;

std::cout << std::endl;

for (int vScore : vScores)
  std::cout << vScore << std::endl;

std::cout << std::endl;

for (auto c : "Spectacular!")
  std::cout << c << std::endl; */
//
// int scores[]{10,20,30};
//
// for (int score:scores)
// std::cout << score << std::endl;
//
// std::cout << std::endl;
//
// std::vector <double> temperatures { 89.9, 69.7,96.9, 108.2 };
// double average_temp{};
// double total{};
//
// for (auto temp:temperatures)
//     total+=temp;
//
//   if (temperatures.size() != 0)
//   average_temp = total / temperatures.size();
//   std::cout << std::fixed << std::setprecision(1);
//   std::cout << "Average Temperature is: " << average_temp << std::endl;
//
// std::cout << std::endl;
//
// for (auto val: {1,2,3,4,5})
// std::cout << val << std::endl;

// for (auto c: "This is a test")
//   if (c != ' ')
//     std::cout << c;

 for (auto c: "This is a test")
   if (c == ' ')
    std::cout << "\t";
    else
      std::cout << c;

std::cout << std::endl;
return 0;
}
