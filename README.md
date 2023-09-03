# Vehicle-Validation-Program

## Overview

C++ program with vehicle validation using the Google Test framework for unit testing. 
It includes a `Vehicle` class with methods to validate year, make, VIN, license plate and model information.

It checks those attributes by expecting certain conditions or not expecting.

## Instruction

Please follow these steps:

### Prerequisites

- C++ development environment, perferably Visual Studio
- Google Test framework, installed or added to the project

### Running Tests

To run the unit tests using Google Test:

1. Build the project.

2. Open the Test Explorer.

3. Click the "Run All" button to execute the Google Test cases.


## Test Examples
### Passed Test (No Bug)
All Attributes are correctly given
![20230903_120929](https://github.com/pchoi63/Vehicle-Validation-Program/assets/110645615/552cc9ea-5508-4816-b04f-4329a88dd719)

All Tests passed
![20230903_121527](https://github.com/pchoi63/Vehicle-Validation-Program/assets/110645615/35fe17d2-023f-4a19-9064-b1ee9fec7afa)

### Failed Test (Bug Detected)
Vin does not satisfy the condition (17 Characters)
![20230903_121446](https://github.com/pchoi63/Vehicle-Validation-Program/assets/110645615/3586c910-0e97-4791-99f6-b57fc5158090)

Test Failed, detects the error in the given attribute
![20230903_121412](https://github.com/pchoi63/Vehicle-Validation-Program/assets/110645615/c02a2b6d-899a-4cc7-be65-0ef51e07cef2)


## Contributing

Contributions to this project are welcome. Feel free to open issues, submit pull requests, or provide suggestions for improvements.
