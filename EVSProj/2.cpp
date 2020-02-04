//
// Created by Akshat Singh on 02-02-2020.
//
#include <chrono>
#include <cstdio>


using namespace std;

class earthAge
        {
    chrono::duration<double, milli> generateNumbers(unsigned long long int number);

    chrono::duration<double, milli> generateNumbers(unsigned long long int number)
    {
        unsigned long long int counter = 0;
        auto startTimer = chrono::high_resolution_clock::now();
        while(counter <= number)
        {
            counter++;
        }
        printf("Number Reached: %lli\n", counter);
        auto endTimer = chrono::high_resolution_clock::now();
        chrono::duration<double, milli>elapsed = endTimer - startTimer;
        return elapsed;
    }
}
int main()
{
    printf("Time: %f\n", generateNumbers(4560000000) / 1000);
}

extern "C"
{

}
