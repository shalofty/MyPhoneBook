#include <iostream>
// This is the skeleton of a future cpp project
// It's to be a lightweight contacts database
// I'm working the next 5 days, so I'll be adding bits and pieces here and there


// MyPhonebook Class
class MyPhoneBook {
public:
    int phoneNum{};
    std::string contactName;
};

// Find Contact Function
void findContact() {
    // Testing function
    MyPhoneBook person;
    std::cout << "Enter name:";
    std::cin >> person.contactName;

//    std::cout << "findContact function works\n" << std::endl;
}

// Add Contact Function
void addContact() {
    // Testing function
    MyPhoneBook person;
    std::cout << "Enter new contact name:\n";
    std::cin >> person.contactName;
    std::string newContact = person.contactName;
    std::cout << "Enter new number (without spaces):\n";
    std::cin >> person.phoneNum;
    int newNum = person.phoneNum;

    std::cout << newContact << std::endl;
    std::cout << newNum << std::endl;
    // Need to create a db to store numbers
//    std::cout << "addContact function works\n" << std::endl;
}

// Delete Contact Function
void delContact() {
    // Testing function
    std::cout << "delContact function works\n" << std::endl;
}

// Main Function
int main() {
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
