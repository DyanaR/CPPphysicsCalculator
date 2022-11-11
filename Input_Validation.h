#include <ios> 
#include <iostream>  
#include<string> 
#include<sstream> 
using namespace std; 

using namespace std; 

//Function Prototypes
int validateInt(int &); 
double validateDouble(double &); 
char validateChar(char &); 
string validateString(string &);

template <typename T>
T getValidatedInput()
{
    // Get input of type T
    T result;
    cin >> result;

    if (cin.fail() || cin.get() != '\n')
    {
        cin.clear();

        // Clear the input stream using and empty while loop.
        while (cin.get() != '\n')
            ;
        throw ios_base::failure("Invalid input.");
    }

    return result;
}

//Function Definitions
int validateInt(int &intInput)
{
	while (true)
    {
        cout << "Enter an integer: ";

        try
        {
            intInput = getValidatedInput<int>();
        }
        catch (exception e)
        {
            cerr << e.what() << endl;
            continue;
        }

        break;
    }
    
    return intInput; 
}

double validateDouble(double &doubleInput)
{
	while (true)
    {
        cout << "Enter a number with or without decimals: ";

        try
        {
            doubleInput = getValidatedInput<double>();
        }
        catch (exception e)
        {
            cerr << e.what() << ": Invalid input."<< endl;
            continue;
        }

        break;
    }
    
    return doubleInput; 
}

char validateChar(char &charInput)
{ 
    while (true)
    {
        cout << "Enter a single letter (1 digit): ";

        try
        {
            charInput = getValidatedInput<char>();
        }
        catch (exception e)
        {
            cerr << e.what() << ": Invalid input."<< endl;
            continue;
        }

        break;
    }
    
    return charInput; 
}

string validateString(string &stringInput)
{
    while (true)
    {
        cout << "Enter a word (no spaces): ";

        try
        {
            stringInput  = getValidatedInput<string>();
        }
        catch (exception e)
        {
            cerr << e.what() << ": Invalid input."<< endl;
            continue;
        }

        break;
    }
    
    return stringInput; 
}
