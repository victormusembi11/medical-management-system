#include <string>
#include <vector>
#include <map>
#include <utility> // for std::pair

class Admin
{
public:
    Admin(const std::string &username, const std::string &password, const std::string &address = "")
        : username_(username), password_(password), address_(address) {}

    std::string GetUsername() const { return username_; }
    std::string GetPassword() const { return password_; }
    std::string GetAddress() const { return address_; }

    void SetUsername(const std::string &username) { username_ = username; }
    void SetPassword(const std::string &password) { password_ = password; }
    void SetAddress(const std::string &address) { address_ = address; }

    bool Login()
    {
        std::cout << "-----Login-----" << std::endl;

        std::string inputUsername;
        std::string inputPassword;

        std::cout << "Enter the username: ";
        std::cin >> inputUsername;
        std::cout << "Enter the password: ";
        std::cin >> inputPassword;

        return inputUsername == username_ && inputPassword == password_;
    }

private:
    std::string username_;
    std::string password_;
    std::string address_;
};
