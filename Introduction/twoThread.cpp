#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

ull even_sum = 0;
ull odd_sum = 0;

void findEvenSum(int start, int end)
{
    for(ull i = start; i <= end; i++)
    {
        if((i%2) == 0)
            even_sum+=i;
    }
}

void findOddSum(int start, int end)
{
    for(ull i = start; i <= end; i++)
    {
        if((i%2) != 0)
            odd_sum+=i;
    }
}

int main()
{
    ull start = 0;
    ull end = 1900000000;

   auto startTime = high_resolution_clock::now();

    std::thread t1(findEvenSum, start, end);
    std::thread t2(findOddSum, start, end);

    t1.join();
    t2.join();

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);

    cout<<"odd sum is "<<odd_sum<<endl;
    cout<<"even sum is "<<even_sum<<endl;
    cout<<"sec: "<<duration.count()/1000000<<endl;
    return 0;
}