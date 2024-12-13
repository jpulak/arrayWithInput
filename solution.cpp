// program for using arrays to store given inputs

#include <iostream>
#include <iomanip>

// namespace declare 

using namespace std;

// main func

int main() {

    // initialize vars

    const int MAX_GRADES = 120;
    int grades[MAX_GRADES];
    int count = 0;
    int sum = 0;
    int grade;

    // prompt for input

    cout << "Enter the first score or -999 to end input: ";
    cin >> grade;

    // read grades until stop/full

    while (grade != -999 && count < MAX_GRADES) 
    {
        grades[count] = grade;
        sum += grade;
        count++;
        cout << "Enter the next score or -999 to end input: ";
        cin >> grade;
    }

    // check if grades were entered

    if (count == 0) 
    {
        cout << "No scores were entered.\n";
        return 0;
    }

    // average

    double average = static_cast<double>(sum) / count;
    cout << fixed << setprecision(1);
    cout << "The average of the scores is: " << average << ".\n";

    // check below average number

    if (count > 1) 
    {
        cout << "The scores below the average were:";
        bool first = true;
        for (int i = 0; i < count; ++i) 
        {
            if (grades[i] < average) 
            {
                if (first) 
                {
                    cout << " " << grades[i];
                    first = false;
                } 
                else 
                {
                    cout << " " << grades[i];
                }
            }
        }
        cout << " \n"; // Added a space before the newline character
    }
    return 0;
}
