#include "../Header Files/NumberGenerator.h"
#include <ctime>
#include <iostream>
#include <string>
#include <random>

using namespace std;

int NumberGenerator::actionNumberGenerator(){ //Will generate a random number,
    // to judge when an attack or defence will be carried out
    random_device random;
    mt19937 generate(random());
    uniform_int_distribution<> distr(0,1);
    return distr(generate);
}

