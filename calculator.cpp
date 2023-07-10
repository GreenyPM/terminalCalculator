#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Defining Varriables
    string operation;
    double number1, number2;
    bool runapp = true;

    // get user input
    while (runapp == true)
    {
        cout << "Enter Operation (+,-,*, /, E): ";
        cin >> operation;

        // if else statement checking entered operation
        if (operation == "+")
        {
            cout << "Enter First Number: ";
            cin >> number1;
            if (cin.fail())
            {
                cin.clear();
            }
            cout << "Enter Second Number: ";
            cin >> number2;
            if (cin.fail())
            {
                cin.clear();
            }

            cout << endl;
            cout << "The Value is: " << number1 + number2 << endl;
        }
        else if (operation == "-")
        {
            cout << "Enter First Number: ";
            cin >> number1;
            if (cin.fail())
            {
                cin.clear();
            }
            cout << "Enter Second Number: ";
            cin >> number2;
            if (cin.fail())
            {
                cin.clear();
            }
            cout << endl;
            cout << "The Value is: " << number1 - number2 << endl;
        }
        else if (operation == "*")
        {
            cout << "Enter First Number: ";
            cin >> number1;
            if (cin.fail())
            {
                cin.clear();
            }
            cout << "Enter Second Number: ";
            cin >> number2;
            if (cin.fail())
            {
                cin.clear();
            }
            cout << endl;
            cout << "The Value is: " << number1 * number2 << endl;
        }
        else if (operation == "/")
        {
            cout << "Enter First Number: ";
            cin >> number1;
            if (cin.fail())
            {
                cin.clear();
            }
            cout << "Enter Second Number: ";
            cin >> number2;
            if (cin.fail())
            {
                cin.clear();
            }
            cout << endl;
            cout << "The Value is: " << number1 / number2 << endl;
        }
        else if (operation == "E")
        {
            cout << "Closing Application" << endl;
            runapp == false;
            break;
        }
        else
        {
            cout << "Invalid Response, Try Again" << endl;
        }
    }

    return 0;
}
