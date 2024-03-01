#include <iostream>

#include "../include/doctor.h"

int main()
{
    Doctor doc("John", "Doe", "Cardiology");

    // Change the doctor's first name and speciality
    doc.SetFirstName("Jane");
    doc.SetSpeciality("Neurology");

    // Print the updated information
    std::cout << "Doctor's Name: " << doc.GetFirstName() << " " << doc.GetSurname() << "\n";
    std::cout << "Speciality: " << doc.GetSpeciality() << "\n";

    return 0;
}