#include <vector>

// Local imports
#include "../../src/cpp/functions.h"


// Demo test case 
TEST_CASE("Vector sum is computed correctly", "[vector]") 
{
    try 
    {
        std::vector<int>* numbers = new std::vector<int>;
        numbers->push_back(1);
        numbers->push_back(2);
        numbers->push_back(3);
        REQUIRE(sum_vector(numbers) == 6);
    }
    catch (std::bad_alloc)
    {
        // Do nothing, just skip previous test
    }
    REQUIRE(1 + 1 == 2);
}
