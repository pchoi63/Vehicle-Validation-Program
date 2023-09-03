#include "pch.h"
#include <iostream>
#include <regex>

//License plate validation
bool IsValidLicensePlate(const std::string& licensePlate) {
    //Any alphanumeric license plate with 7 or more characters is valid.
    std::regex pattern("[A-Za-z0-9]{7,}");
    return std::regex_match(licensePlate, pattern);
}

// VIN validation
bool IsValidVIN(const std::string& vin) {
    // Any VIN with exactly 17 characters is valid.
    return vin.length() == 17;
}

//Vehicle color validation
bool IsValidColor(const std::string& color) {
    //Any color within the given color data is valid
    static const std::vector<std::string> validColors = { "Red", "Blue", "Green", "White", "Black" };
    return std::find(validColors.begin(), validColors.end(), color) != validColors.end();
}

//Vehicle make validation
bool IsValidMake(const std::string& make) {
    //Any Vehicle wih non empty and alphabet is valid
    return !make.empty() && std::all_of(make.begin(), make.end(), ::isalpha);
}

//Vehicle year validation
bool IsValidYear(const std::string& yearStr) {
    //Any 
    int year = std::stoi(yearStr);
    return year >= 1895 && year <= 2200;
}