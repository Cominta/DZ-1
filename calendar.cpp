#include <iostream>

int main()
{
    std::cout << "\n\t\t\t  APRIL 2022\n\n";
    std::cout << "\tmon\ttue\twed\tthu\tfri\tsat\tsun\n";
    std::cout << "\t   \t   \t   \t   \t1  \t2  \t3\n";

    int j = 3;
    while (j <= 30)
    {
        for (int k = 0; k <= 6; k++)
        {
            j++;

            if (j == 31)
                break;

            std::cout << "\t" << j; 
        }

        std::cout << "\n";
    }

    return 0;
}