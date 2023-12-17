#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 10; 
const int NUM_SUBJECTS = 3; 

struct Student {
    string name;
    int rollno;
    string subjects[NUM_SUBJECTS];
    float marks[NUM_SUBJECTS];
    float average;
    float total;
    string result;
};

int main() {
    int numStudents = 0;
    Student students[MAX_STUDENTS];

    int choice;
    do {
        
        cout << "MENU" << endl;
        cout << "1. Add student details" << endl;
        cout << "2. Display student details" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (numStudents >= MAX_STUDENTS) {
                    cout << "Maximum number of students reached!" << endl;
                } else {
                    cout << "Enter details for student #" << numStudents+1 << endl;
                    cout << "Name: ";
                    cin >> students[numStudents].name;
                    cout << "Roll no: ";
                    cin >> students[numStudents].rollno;

                    students[numStudents].total = 0;
                    for (int j = 0; j < NUM_SUBJECTS; j++) {
                        cout << "Enter subject #" << j+1 << " name: ";
                        cin >> students[numStudents].subjects[j];
                        cout << "Enter marks for subject #" << j+1 << ": ";
                        cin >> students[numStudents].marks[j];
                        students[numStudents].total += students[numStudents].marks[j];
                    }

                   
                    students[numStudents].average = students[numStudents].total / NUM_SUBJECTS;
                    if (students[numStudents].average >= 60) {
                        students[numStudents].result = "Pass";
                    } else {
                        students[numStudents].result = "Fail";
                    }

                    numStudents++;
                    cout << endl;
                }
                break;

            case 2:
                if (numStudents == 0) {
                    cout << "No student details found!" << endl << endl;
                } else {
                    
                    cout << "Student details:" << endl;
                    for (int i = 0; i < numStudents; i++) {
                        cout << "Student #" << i+1 << endl;
                        cout << "Name: " << students[i].name << endl;
                        cout << "Roll no: " << students[i].rollno << endl;
                        for (int j = 0; j < NUM_SUBJECTS; j++) {
                            cout << students[i].subjects[j] << " marks: " << students[i].marks[j] << endl;
                        }
                        cout << "Total marks: " << students[i].total << endl;
                        cout << "Average marks: " << students[i].average << endl;
                        cout << "Result: " << students[i].result << endl << endl;
                    }
                }
                break;

            case 0:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
                break;
        }

    } while (choice !=0);
}

