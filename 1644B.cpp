#include<iostream>

int main()
{
    int testcase;
    std::cin >> testcase;
    while(testcase--)
    {
        int test, i, j;
        std::cin >> test;
        for(i = 1; i <= test; i++)
        {
        std::cout << i << ' ';
            for(j = test; j > 0; j--)
            {
                if(j != i)
                    std::cout << j << ' ';
            }
            std::cout << std::endl;
        }
    }
}