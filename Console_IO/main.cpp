//----------------------------------------------------
// Learn C++ with Qt Tutorial:
// Console output and input
//
// (c) 2014, www.alternative-computer-programming.com
//----------------------------------------------------

// Object class and function library includes
#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

// Used object namespaces
using namespace std;

// Main program
int main(int argc, char *argv[])
{
    //--- Initializations ---
    QCoreApplication a(argc, argv);
    char    myoutput [60];
    int     stringlength,
            x = 4,
            y = 10,
            c1 = 'A',
            c2 = 'B',
            c3 = 'C',
            nl = '\n';
    string  username,
            nickname;
    char    favchar1,
            favchar2,
            favchar3;
    string  myinput;
    float   price = 0;
    int     amount = 0;


    //--- Output demonstration ---

    // string output with C function
    printf("Hello, World!\n");
    // string output with C++ stream functions
    cout << "Hello Universe!" << endl << endl;

    // formatted output
    stringlength = sprintf(myoutput, "%d plus %d equals %d", x, y, x+y);
    printf ("[%s] is a string that is %d characters long.\n\n", myoutput, stringlength);

    // single character output
    putc(c1, stdout);
    putc(c2, stdout);
    putc(c3, stdout);
    putc(nl, stdout);

    //--- Input demonstration ---

    // string input
    cout << endl << "Please enter your username: ";
    getline(cin, username);
    cout << "Hello " << username << endl;
    cout << "What is your nickname? ";
    cin >> nickname;
    cout << endl << "So, " << username << " is called " << nickname << "?" << endl;
    cout << "Ok..." << endl;

    // single character input
    cout << endl << "What is your favorite character? ";
    cin >> favchar1;
    fflush(stdin);
    cout << "And what is your second favorite character? ";
    favchar2 = getc(stdin);
    fflush(stdin);
    cout << "And the third favorite character? ";
    favchar3 = getchar();
    cout << endl << "Your favorite characters are " << favchar1;
    cout << ", " << favchar2 << " and " << favchar3 << endl;

    // stringstream example
    fflush(stdin);
    cout << endl << "Sell your apples..." << endl;
    cout << "Please enter your price per apple: ";
    getline(cin, myinput);
    stringstream(myinput) >> price;
    cout << "How many apples do you want to sell? ";
    getline(cin, myinput);
    stringstream(myinput) >> amount;
    cout << "If you sell all of them, you will earn: " << price*amount << endl;

    // end of application
    cout << endl << "That's it!" << endl;
    return a.exec();
}
