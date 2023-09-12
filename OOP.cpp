#include <iostream>
#include <string>

class User {
private:
    std::string firstName;
    std::string lastName;

public:
    User(const std::string& first, const std::string& last)
        : firstName(first), lastName(last) {}

    std::string getInitials() {
        std::string initials;


        if (!firstName.empty()) {
            initials += firstName[0];
            initials += ". ";
        }

    
        if (!lastName.empty()) {
            initials += lastName[0];
            initials += ". ";
        }

        return initials;
    }
};

int main() {
  
    User user1("Dan", "Doschinescu");
    User user2("Mike", "Wazz");

    std::cout << "User 1: " << user1.getInitials() << std::endl;
    std::cout << "User 2: " << user2.getInitials() << std::endl;

    return 0;
}
