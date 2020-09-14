#include <iostream>
#include <chrono>
#include <vector>
#include <numeric>
 
int main()
{
    const std::vector<double> v(10'000'007, 0.5);
 
        const auto t1 = std::chrono::high_resolution_clock::now();
        const double result = std::reduce( v.cbegin(), v.cend());
        const auto t2 = std::chrono::high_resolution_clock::now();
        const std::chrono::duration<double, std::milli> ms = t2 - t1;
        std::cout << "std::reduce result "
                  << result << " took " << ms.count() << " ms\n";
}
