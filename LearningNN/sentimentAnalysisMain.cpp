#include <iostream>
using namespace std;

int main()
{
    // Print the menu options
    cout << "Welcome to the Sentiment Analysis application!" << endl;
    cout << "Please choose from the following options:" << endl;
    cout << "1. Analyze a single sentence" << endl;
    cout << "2. Analyze a text file" << endl;
    cout << "3. Quit" << endl;
    
    string sentence;
    string filePath;

    // Get the user's choice
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    // Handle the user's choice
    switch (choice)
    {
    case 1:
        // Analyze a single sentence
        cout << "Enter the sentence to analyze: ";
        cin >> sentence;
        cout << "Analyzing the sentence...\n";
        break;
    case 2:
        // Analyze a text file
        cout << "Enter the file path: ";
        cin >> filePath;
        cout << "Analyzing the text file...\n";
        break;
    case 3:
        // Quit
        cout << "Quitting...\n";
        break;
    default:
        // Invalid choice
        cout << "Invalid choice! Please try again.\n";
        break;
    }

    return 0;
}
