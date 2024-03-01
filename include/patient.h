#include <string>
#include <vector>

#include "../lib/json.hpp"

#include "doctor.h"

class Patient
{
public:
    Patient(const std::string &doctor, const std::string &first_name, const std::string &surname, int age, const std::string &mobile, const std::string &postcode, const std::vector<std::string> &symptoms)
        : doctor_(doctor), first_name_(first_name), surname_(surname), age_(age), mobile_(mobile), postcode_(postcode), symptoms_(symptoms) {}

    std::string GetFullName() const { return first_name_ + " " + surname_; }
    std::string GetDoctor() const { return doctor_; }
    std::string GetSurname() const { return surname_; }
    std::string GetPostcode() const { return postcode_; }
    std::vector<std::string> GetSymptoms() const { return symptoms_; }

    nlohmann::json ToJson() const
    {
        return nlohmann::json{
            {"doctor", doctor_},
            {"first_name", first_name_},
            {"surname", surname_},
            {"age", age_},
            {"mobile", mobile_},
            {"postcode", postcode_},
            {"symptoms", symptoms_}};
    }

    static Patient FromJson(const nlohmann::json &j)
    {
        return Patient(
            j.at("doctor").get<std::string>(),
            j.at("first_name").get<std::string>(),
            j.at("surname").get<std::string>(),
            j.at("age").get<int>(),
            j.at("mobile").get<std::string>(),
            j.at("postcode").get<std::string>(),
            j.at("symptoms").get<std::vector<std::string>>());
    }

private:
    std::string doctor_;
    std::string first_name_;
    std::string surname_;
    int age_;
    std::string mobile_;
    std::string postcode_;
    std::vector<std::string> symptoms_;
};
