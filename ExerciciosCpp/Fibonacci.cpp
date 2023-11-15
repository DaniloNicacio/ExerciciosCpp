#include <iostream>

int main(int argc, char* argv[])
{
    int proximo = 0, anterior = 0, num;
    
    std::cin >> num;

    while (proximo < num)
    {
        std::cout << proximo << " ";
        proximo = proximo + anterior;
        anterior = proximo - anterior;

        if (proximo == 0)
        {
            proximo = 1;
        }
    }
    return 0;
}