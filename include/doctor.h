#include <string>
#include <vector>

class Doctor
{
public:
    Doctor(const std::string &first_name, const std::string &surname, const std::string &speciality)
        : first_name_(first_name), surname_(surname), speciality_(speciality) {}

    std::string GetFirstName() const { return first_name_; }
    std::string GetSurname() const { return surname_; }
    std::string GetSpeciality() const { return speciality_; }
    std::vector<std::string> GetAppointments() const { return appointments_; }

    void SetFirstName(const std::string &first_name) { first_name_ = first_name; }
    void SetSurname(const std::string &surname) { surname_ = surname; }
    void SetSpeciality(const std::string &speciality) { speciality_ = speciality; }
    void SetAppointments(const std::vector<std::string> &appointments) { appointments_ = appointments; }

    void AddAppointment(const std::string &appointment)
    {
        appointments_.push_back(appointment);
    }

private:
    std::string first_name_;
    std::string surname_;
    std::string speciality_;
    std::vector<std::string> appointments_;
};
