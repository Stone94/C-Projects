// Switch STATEMENT

#include <iostream>

using namespace std; // I dont normally use this.

void MainProgram(){
  char letter_grade{};
  char valid_letter_grades[]{'A', 'B', 'C', 'D', 'F'};

  cout << "Enter the letter grade you are hoping to achieve (" << valid_letter_grades << "): ";
  cin >> letter_grade;


  switch (letter_grade){
    case 'A':
    case 'a':
      cout << "You must attain a score of no less than 90, study hard you legend!." << endl;
        break;
    case 'B':
    case 'b':
      cout << "You must attain a score of 80-89, hey, being second-rate isn't that bad." << endl;
        break;
    case 'C':
    case 'c':
      cout << "You must attain a score of 70-79, setting the bar rather low aren't you?" << endl;
        break;
    case 'D':
    case 'd':
      cout << "You must attain a score of 60-69, going for the major under-achiever award eh?." << endl;
        break;
    case 'F':
    case 'f':
    {
      char confirm{};
      cout << "Are you sure(Y/N)?";
      cin >> confirm;

      if (confirm == 'y' || confirm == 'Y')
        cout << "Prostitution is always an option. . . :/" << endl;
      else if (confirm == 'n' || confirm == 'N')
        cout << "Better get to studying than >:)" << endl;
      else
        cout << "ERROR! ERROR!! DELETE! DELETE!!" << endl;
      break;
    }


    default:
      cout << "That is not a valid grade!" << endl;
      MainProgram();
        break;
  }
}

int main(){
  MainProgram();

  return 0;
}
