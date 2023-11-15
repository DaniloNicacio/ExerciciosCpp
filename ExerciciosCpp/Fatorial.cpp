#include <iostream>

int main(int argc, char* argv[])
{
    int num, resultado = 1;
    std::cin >> num;

    for(int i = num; i > 0; i--)
    {
        resultado = resultado * i;
    }
    std::cout << resultado << "\n";
    return 0;
} 
