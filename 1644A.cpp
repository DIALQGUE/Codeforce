#include <iostream>
#include <string>

int main() 
{
    int testcase;
    std::cin >> testcase;
    while(testcase--) 
    {
        bool key[] = {false, false, false}, passable = true;
        std::string hallway;
        std::cin >> hallway;
        for(int i = 0; i < 6; i++)
        {
            char step = hallway[i];
            if(step == 'r')
                key[0] = true;
            if(step == 'g')
                key[1] = true;
            if(step == 'b')
                key[2] = true;

            if(step == 'R' && !key[0]) 
                passable = false;
            if(step == 'G' && !key[1]) 
                passable = false;
            if(step == 'B' && !key[2])
                passable = false;
        }
        if(passable)
            std::cout << "YES";
        else
            std::cout << "NO";
        std::cout << std::endl;
    }
}