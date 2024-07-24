using namespace std;
#include <unordered_map>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "reallyyy.h"

int main() {

    //creatingownfile as you want more like your namwe
    string filename1;
    cout << "input your name with suffix .txt: ";
    cin >> filename1;
    ofstream file1(filename1);
    if (file1.is_open()) {
        cout << "+" << std::endl;
    }
    else {
        std::cout << "-" << std::endl;
    }
    file1.close();





    string userInput;
    //books<int>test1;
    //cout << "Enter your number:";
    //cin >> test1;
    cout << "Do you want to Download own book or See all?(D/S)";
    cin >> userInput;
    if (userInput == "D") {

        cout << "WELCOME TO DOWNLOAD PAGE!" << endl;
        int choice;

        cout << "Enter 1 for action books,2 for advanture, 3 for horror books -> ";
        cin >> choice;
        void showsuggest();
        {
            cout << "SUGGESTION FOR YOU " << endl;
            cout << "Name of book: 'Green land'" << endl << "Owner name:'Zilola'" << endl << "Phone number is:'909090909090'";

        }

        ofstream first;
        first.open("library1.txt",ios::app);

        switch (choice)
        {
        case 1:
        {

            action great;
            great.actionB();

            break;
        }
        case 2:
        {
            horror great2;
            great2.horrorB();
            break;
        }
        case 3:
        {
            fantasy great3;
            great3.fantasyB();
            break;
        }
        default:
        {
            cout << "No other type";
        }
        }

        ifstream infirst("library1.txt");
        char ch;
        while (infirst.get(ch)) {
            cout << ch;
        }

        // infirst.close();
        // first.close();

        cout << "New info was added" << endl;

    }
    else if (userInput == "S") {
        string userType;
        cout << "Type of books:" << endl;
        cout << "Action:" << endl; cout << "Horror:" << endl; cout << "Fantasy:" << endl;
        cin >> userType;

        if (userType == "Action"||"Horror"||"Fantasy") {
            cout << "Great" << endl;
            std::ifstream file("library1.txt"); // Open the file
            std::string line;
            std::string desiredInfo = "Name of book:";

            if (!file.is_open()) { // Check if the file is open
                std::cerr << "Unable to open file" << std::endl;
                return 1;
            }

            // Read each line from the file
            while (getline(file, line)) {
                // Check if the line contains the exact information
                if (line.find(desiredInfo) != std::string::npos) {
                    std::cout << line << std::endl; // Print the line to the console
                }
            }

            file.close();
            string userInput2;

            cout << "Do you want to see all details about this book?(yess/noo)";
            cin >> userInput2;
            if (userInput2 == "yess") {
                std::ifstream file("library1.txt"); // Open the file
                std::string line;

                if (file.is_open()) { // Check if the file is open
                    while (getline(file, line)) { // Read each line from the file
                        std::cout << line << std::endl; // Print the line to the console
                    }
                    file.close(); // Close the file
                }
                else {
                    std::cerr << "Unable to open file" << std::endl;
                    return 1;
                }
            }
            else {
                cout << "That's all!"<<endl;
            }
        }

        string userInput3;
        cout << "Do you want to contact with owner?(ofcourse/noneed)";cin >> userInput3;
        if (userInput3 == "ofcourse") {
            string input, n;
            bool writingEnabled = false; // Flag to indicate whether writing to file is enabled
            ofstream outFile; // Declare the ofstream object

            cout << "Enter 'owner' or 'Owner' to start writing to other owner of the book: like in the example: \nowner/Owner username.txt: ";

            while (cin >> input) {
                if (input == "owner" or input == "Owner") {
                    cin >> n;
                    // If user enters "owner", start writing to file
                    writingEnabled = true;
                    outFile.open(n, ios::app); // Open the file for writing
                    if (!outFile.is_open()) {
                        std::cerr << "Error: Could not open file for writing!" << std::endl;
                        return 1; // Exit with error code if file cannot be opened
                    }
                    cout << "Writing to file enabled. When communicating, introduce yourself so that the other person is also easier to contact you. Enter text (enter 'exit' to quit):" << std::endl;
                }
                else if (input == "exit") {
                    // If user enters "exit", break out of the loop
                    break;
                }
                else {
                    if (writingEnabled) {
                        // If writing is enabled, write the input to the file
                        outFile << input << "   ";
                    }
                    else {
                        // If writing is not enabled, echo the input to the console
                        cout << "Echo: " << input << std::endl;
                    }
                }
            }

            // Close the file if it was opened
            if (outFile.is_open()) {
                outFile.close();
                cout << "File closed." << std::endl;
            }

            cout << "Program exited." << std::endl;

        }
        else {
            cout << "Byebye than!";
        }

    }

    return 0;
}