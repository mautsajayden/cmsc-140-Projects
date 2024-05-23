/*
 * Class: CMSC140 CRN
 * Instructor:Farnaz Eivazi
 * Project<number>3
 * Description:Project caculates grade scores and the produces the final and avergae Scores of the Student's score
 * Due Date:Thursday, September 21,
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: ___Jayden Mautsa___
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	const int NUM_SCORES = 5;

	string name; 

	int syllabusQuiz = 0,
		chapterOnequiz = 0,
		chapterTwoquiz = 0,
		programmingClasswork1 = 0,
		programmingClasswork2= 0,
	    finalScore = 0;

	double averageScore = 0;
	
	cout << "Enter Student's name: ";
	getline(cin, name);
	cout << endl;
	cout << "Enter Syllabus Quiz Score ranging from 0 to 100: ";
	cin >> syllabusQuiz;
	cout << endl;
	cout << "Enter Chapter 1 Quiz Score ranging from 0 to 100: ";
	cin >> chapterOnequiz;
	cout << endl;
	cout << "Enter Chapter 2 Quiz Score ranging from 0 to 100: ";
	cin >> chapterTwoquiz;
	cout << endl;
	cout << "Enter Programming Classwork1 Score ranging from 0 to 100: ";
	cin >> programmingClasswork1;
	cout << endl;
	cout << "Enter Programming Classwork2 Score ranging from 0 to 100: ";
	cin >> programmingClasswork2;
	cout << endl;

	finalScore = syllabusQuiz + chapterOnequiz + chapterTwoquiz + programmingClasswork1 + programmingClasswork2;
	averageScore = (double)finalScore / NUM_SCORES;

	cout << name << ":  Final Score: " << finalScore 
	             << "  Average Score: "<< setprecision(2) << fixed << averageScore;
	cout << endl;

	system("pause");
	return 0;
}