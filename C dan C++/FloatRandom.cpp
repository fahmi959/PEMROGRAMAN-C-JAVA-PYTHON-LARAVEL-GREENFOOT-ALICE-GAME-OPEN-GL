#include <iostream>
#include <random>
using namespace std;

float get_random()
{
    static std::default_random_engine e;
    static std::uniform_real_distribution<> dis(1, 2); // rage 0 - 1
    return dis(e);
}

int main()
{
    std::vector<float> nums;
    for (int i{}; i != 5; ++i) // Generate 5 random floats
        nums.emplace_back(get_random());

    for (const auto& i : nums) std::cout << i << " ";
}