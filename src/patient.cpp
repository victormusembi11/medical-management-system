#include <iostream>

#include "patient.h"

int main()
{
    // Create a Patient object
    Patient pat("Dr. Doe", "John", "Smith", 30, "1234567890", "12345", {"cough", "fever"});

    // Convert the Patient object to JSON
    nlohmann::json j = pat.ToJson();
    std::cout << j << std::endl;

    // Create a Patient object from JSON
    Patient pat2 = Patient::FromJson(j);

    return 0;
}
