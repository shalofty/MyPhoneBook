// Importing iostream and fstream
#include <iostream>
#include <fstream>

// Importing 3rd party JSON library from https://json.nlohmann.me/
#include <json.hpp>
using json = nlohmann::json;

using namespace std;

// MyPhonebook Class
class MyPhoneBook {
public:
    std::string phoneNum;
    std::string contactName;
};

// Find Contact Function
void findContact() {
    // Testing function
    MyPhoneBook person;
    std::cout << "Enter name:";
    std::cin >> person.contactName;
}

// Add Contact Function
void addContact() {
    // Testing function
    // Creation of person object from MyPhoneBook class
    MyPhoneBook person;

    // Entering new contact name & saving to variable
    std::cout << "Enter new contact name:\n";
    std::cin >> person.contactName;
    std::string newContact = person.contactName;

    // Entering new contact number & saving to variable
    std::cout << "Enter new number (without spaces):\n";
    std::cin >> person.phoneNum;
    std::string newNum = person.phoneNum;

    // Creation of json object
    json contact = {newContact, newNum};
    // Writing to file
    std::ofstream file("db.json");
    file << std::setw(4) << contact << std::endl;
    file.close();
    // The problem here is that every new entry overwrites the previous entry


    std::cout << newContact << std::endl;
    std::cout << newNum << std::endl;
}

// Delete Contact Function
void delContact() {
    // Testing function
    std::cout << "delContact function works\n" << std::endl;
}

// Main Function
int main() {
    // encapsulating main() logic within a while loop to create CLI menu
    int menu = 0;
    while (menu < 1) {
        // Output to user
        std::cout << "Hello, Shalofty!" << std::endl;
        std::cout << "How can I help you today?\n" << std::endl;
        std::cout << "1) Find contact\n"
                     "2) Add contact\n"
                     "3) Delete contact\n"
                     "4) Exit\n" << std::endl;
        // Prompt for user input
        std::string userInput;
        std::cin >> userInput;
        std::cout << userInput << std::endl;

        if (userInput == "1"){
            findContact();
        } else if (userInput == "2") {
            addContact();
        } else if (userInput == "3") {
            delContact();
        } else if (userInput == "4") {
            menu += 1;
        }
    }
    return 0;
}
