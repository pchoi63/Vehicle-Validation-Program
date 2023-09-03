#include "pch.h"
#include "gtest/gtest.h"

// Google Test Unit Tests

//Used for validating License Plate
TEST(VehicleValidationTest, IsValidLicensePlate) {
    //Expecting Valid License Plate
    EXPECT_TRUE(IsValidLicensePlate("ABC1234"));
    EXPECT_TRUE(IsValidLicensePlate("A1B2C3D"));
    //Expecting Non-Valid License Plate
    EXPECT_FALSE(IsValidLicensePlate("XYZ4"));
}

//Used for validating VIN Number
TEST(VehicleValidationTest, IsValidVIN) {
    //Expecting Valid VIN
    EXPECT_TRUE(IsValidVIN("1HGCM82"));
    //Expecting Non-Valid VIN
    EXPECT_FALSE(IsValidVIN("1HGCM82633A40000")); // Invalid length
    EXPECT_FALSE(IsValidVIN("1234567890ABCDEFGH")); // Invalid characters
}

//Used for validating Vehicle's Color
TEST(VehicleValidationTest, IsValidColor) {
    //Valid, in color data
    EXPECT_TRUE(IsValidColor("Red"));
    EXPECT_TRUE(IsValidColor("Blue"));
    //Non- Valid, not in color data
    EXPECT_FALSE(IsValidColor("Purple")); 
}

//Used for validating Vehicle's Make
TEST(VehicleValidationTest, IsValidMake) {
    //Valid, alphabet names
    EXPECT_TRUE(IsValidMake("Toyota"));
    EXPECT_TRUE(IsValidMake("BMW"));
    //Non-Valid, not in alphabet
    EXPECT_FALSE(IsValidMake("1234")); 
}

//Used for validating Vehicle's Year
TEST(VehicleValidationTest, IsValidYear) {
    //Valid, between the given years
    EXPECT_TRUE(IsValidYear("2022"));   
    //Non-Valid, outside the given years
    EXPECT_FALSE(IsValidYear("1890"));
    EXPECT_FALSE(IsValidYear("22000")); 
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}