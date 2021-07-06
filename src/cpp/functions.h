#include <vector>


int sum_vector(const std::vector<int>* vector_to_sum) 
{
    int sum = 0;
    for (auto& num: *vector_to_sum)
    {
        sum += num;
    }
    return sum; 
}