#include "../include/PasswordGenerator.h"
#include <iostream>
#include <random>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;

void PasswordGenerator::create_password(Password& password) {
    cout << "Your password will be created." << endl;

    int n = 16; 
    string generated_password;

    // Initialize a random device to generate a random seed.
    // random_device is a source of "true" randomness, typically relying on hardware
    // randomness if available. It provides entropy to initialize the generator.
    random_device rd;

    // Create a Mersenne Twister random number generator (mt19937).
    // mt19937 is a high-quality pseudorandom number generator suitable for a wide range
    // of applications. It requires an initial seed for its state, which we obtain from random_device.
    mt19937 generator(rd());

    // Define a uniform integer distribution over the range [33, 126].
    // uniform_int_distribution ensures that every integer in the specified range is
    // equally likely to be generated. In this case, it covers all printable ASCII characters.
    uniform_int_distribution<int> dist(33, 126);

    for (int i = 0; i < n; i++) {
        generated_password += static_cast<char>(dist(generator));
    }
    password.set_password(generated_password);

    cout << "Your password is: ";
    password.show_password();
}