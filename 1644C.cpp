#include<iostream>

int main()
{
    int testcase;
    std::cin >> testcase;
    while(testcase--)
    {
        int i, k, max = 0;
        int length, factor, element;
        int quicksum[5005];
        quicksum[0] = 0;

        std::cin >> length >> factor;

        for(int i = 1; i <= length; i++)
        {
            std::cin >> element;
            quicksum[i] = quicksum[i-1] + element;
        }
        
        for(k = 0; k < length; k++)
        {
            for(i = k; i < length; i++)
            {
                int subarray = quicksum[i] - quicksum[i - k];
                max = std::max(subarray + factor * k, max);
            }
            std::cout << max << ' ';
        }
        std::cout << std::endl;

    }
}