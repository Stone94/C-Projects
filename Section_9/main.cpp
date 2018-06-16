// NESTED IF STATEMENT LECTURE 7


#include <iostream>

using namespace std;

void EnterGrade(){
  int score {};
  cout << "Enter your score on the exam (0-100): ";
  cin >> score;

  char letter_grade{};
  if (score >= 0 && score <= 100){
    if (score >= 90){
          letter_grade = 'A';
          cout << "You got an " << letter_grade << endl;
      } else if (score >= 80){
          letter_grade = 'B';
          cout << "You got an " << letter_grade << endl;
      } else if (score >= 70){
          letter_grade = 'C';
          cout << "You got an " << letter_grade << endl;
      } else if (score >= 60){
          letter_grade = 'D';
          cout << "You got an " << letter_grade << endl;
      } else {
          letter_grade = 'F';
          cout << "You got an " << letter_grade << endl;
    }
  } else {
    cout << "Sorry, " << score << " is not in range." << endl;
      EnterGrade();
  }

  if (letter_grade == 'F'){
    cout << "Maybe you should try porn instead :/" << endl;
  } else if (letter_grade == 'A'){
      cout << " You have a really bright future ahead of you!" << endl;
  } else {
      cout << "You need to study harder!" << endl;
  }

  EnterGrade();
}


int main()
{
  EnterGrade(); //TODO Break Loop

  return 0;
}
