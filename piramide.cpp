// ****************************************************************************************
//                    Program to draw a pyramid
// ****************************************************************************************
//                       s s *
//                       s * * *
//                       * * * * *
// s = space, k = character ( asterisc )
//
// 1.-'cin' is object from class <iostream> It is used to accept the input from
//  the standard input device i.e. keyboard
// 2.-'cout' is object from class <iostream> It is used to produce output on
//  the standard output device which is usually the display screen.
//
//
// ***************************************************************************************** 
#include <iostream>
using namespace std;
int main()
{
    int i, space, rows, k = 0; // declaring three variables & asigning value 0
    cout << endl; // this statement make a line space
    //the following statement is without( << endl; ) so the prompt appear next to question.
    cout << "Enter the number of rows: ";
    cin >> rows;
        
    // Outer loop for rows 
    for(i = 1; i <= rows; ++i)
    {
        for(space = 1; space <= rows-i; ++space) // Inner loop for space
        {
           cout << "  ";
        }
        while(k !=2 * i-1) // Second inner loop for asterisc
        {
           cout << "* ";
           ++k;
        }
        k = 0;
        cout << "\n"; // go to a new line
    }
    return 0;
}
