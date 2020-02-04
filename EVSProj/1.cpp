//
// Created by Akshat Singh on 30-01-2020.
//
#include <chrono>
#include <cstdio>
#include <boost/python.hpp>
using namespace std;

struct earthAge
{

};

unsigned long long int generateNumbers(double time);

unsigned long long int generateNumbers(double time)
{
   unsigned long long int number = 0;
   auto startTimer = chrono::high_resolution_clock::now();
   while(true)
   {
       auto endTimer = chrono::high_resolution_clock::now();
       chrono::duration<double, milli>elapsed = endTimer - startTimer;
       if (elapsed.count() >= time * 1000)
           return number;
       number++;
   }
}

int main()
{
    printf("Number Generated: %lli\n", generateNumbers(45.6));
}
