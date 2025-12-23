
#include <iostream>
#include <string>
using namespace std;

void calculateGrade(double score, char& grade) {
    if (score >= 80) grade = 'A';
    else if (score >= 70) grade = 'B';
    else if (score >= 60) grade = 'C';
    else if (score >= 50) grade = 'D';
    else grade = 'F';
}

void displayStudentInfo(string name, string id, double score, char grade) {
    cout << "Name: " << name << ", ID: " << id << ", Score: " << score << ", Grade: " << grade << endl;
}

int main()
{
    const int N = 5;
    string names[N], ids[N];
    double scores[N];
    char grades[N];

    for (int i = 0; i < N; ++i) {
        cout << "Enter student name: ";
        getline(cin, names[i]);
        cout << "Enter student ID: ";
        getline(cin, ids[i]);
        cout << "Enter student score: ";
        cin >> scores[i];
        cin.ignore();

        calculateGrade(scores[i], grades[i]);
    }

    for (int i = 0; i < N; ++i) {
        displayStudentInfo(names[i], ids[i], scores[i], grades[i]);
    }

    return 0;
}