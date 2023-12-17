#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int num_students, num_subjects;
  int i, j;
  string subjects[10]; 
  float scores[100][10]; 
  char a;
  
  cout << "Enter number of students: ";
  cin >> num_students;
  cout << "Enter number of subjects: ";
  cin >> num_subjects;
  
  cout << "Enter subject names:" << endl;
  for (j = 0; j < num_subjects; j++) {
    cout << "Subject " << j+1 << ": ";
    cin >> subjects[j];
  }

  for (i = 0; i < num_students; i++) {
    cout << "Enter scores for student " << i+1 << ":" << endl;
    for (j = 0; j < num_subjects; j++) {
      cout << subjects[j] << ": ";
      cin >> scores[i][j];
    }
  }

  cout << endl << "Total and average scores for each student:" << endl;
  for (i = 0; i < num_students; i++) {
    float sum = 0;
    for (j = 0; j < num_subjects; j++) {
      sum += scores[i][j];
    }
    float average = sum / num_subjects;
    cout << "Student \n" << i+1 << ": Total = " << sum << "\t Average = " << fixed << setprecision(2) << average << endl;

    if (average >= 50) {
      cout << "Result: Pass" << endl;
    } else {
      cout << "Result: Fail" << endl;
    }
  }

  return 0;
}

