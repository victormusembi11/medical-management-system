#include <iostream>

#include "../include/admin.h"

int main()
{
    Admin admin("admin", "password123");

    // Try to login
    if (admin.Login())
    {
        std::cout << "Login successful." << std::endl;
    }
    else
    {
        std::cout << "Login failed." << std::endl;
    }

    return 0;
}