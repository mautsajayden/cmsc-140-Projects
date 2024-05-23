/*
 * Class: CMSC140 CRN
 * Instructor: Farnaz Eivarzi
 * Project<number> 8
 * Description: Program that taes in score and looks for the highest score to the lowest scores and can aslo display from descending order and aslo average
 * Due Date: 7 December 2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: ___Jayden Mautsa_______
*/

#include <iostream>
#include <string>

using namespace std;

void displayArray(int array[], int size);
void selectionSort(int array[], int size);
int findMax(int array[], int size);
int findMin(int array[], int size);
double findAvg(int array[], int size);
void swap(int& a, int& b);

int main()
{
    const int MAXNUM = 50;
    int numScores = 0,
        maximum = 0,
        minimum = 0;

    double average = 0;

    do
    {
        cout << "How many scores do you want to enter ? ";
        cin >> numScores;
        if (numScores < 0)
        {
            cout << "Scores should be >= 1 \n Please try again \n";
        }
    } while (numScores < 0);

    int scores[MAXNUM];
    
    for (int i = 0; i < numScores; i++)
    {
        do
        {
            cout << "Enter score #" << (i + 1) << ": ";
            cin >> scores[i];
            if (scores[i] < 0)
            {
                cout << "Scores must be positive \n Please re-enter Score\n";
            }
        } while (scores[i] < 0);
    }

    displayArray(scores, numScores);

    selectionSort(scores, numScores);

    maximum = findMax(scores, numScores);

    minimum = findMin(scores, numScores);

    average = findAvg(scores, numScores);

    cout << "Scores ordered high to low: ";

    for (int n = 0; n < numScores; n++)
    {
        cout << scores[n] << ' ';
    }
    cout << endl << endl;

    cout << "Highest score: " << maximum << endl << endl
        << "Lowest score: " << minimum << endl << endl
        << "Average of scores: " << average << endl << endl;

    system("pause");

    return 0;
}

void displayArray(int array[], int size)
{
    cout << "Original order scores are: ";

    for (int i = 0; i < size; i++)
        cout << array[i] << ' ';

    cout << endl
        << endl;
}

void selectionSort(int array[], int size)
{
    int exchangeNum = 0, max = 0;

    for (int i = 0; i < (size - 1); i++)
    {
        exchangeNum = i;
        max = array[i];
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] > max)
            {
                max = array[j];
                exchangeNum = j;
            }
        }
        swap(array[exchangeNum], array[i]);
    }
}

int findMax(int array[], int size)
{
    int max = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }

    return max;
}

int findMin(int array[], int size)
{
    int min = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
            min = array[i];
    }

    return min;
}

double findAvg(int array[], int size)
{
    double average = 0;
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += array[i];
    }

    average = (double)(total / size);

    return average;
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}