#include <iostream.h>
void compare(int a, int b, int d, int e)
{
    if (a != d)
    {
        if (a > d)
        {
            std::cout << "DRAGON\n";
            return;
        }
        else
        {
            std::cout << "SLOTH\n";
            return;
        }
    }
    else if (b != e)
    {
        if (b > e)
        {
            std::cout << "DRAGON\n";
            return;
        }
        else
        {
            std::cout << "SLOTH\n";
            return;
        }
    }
    else
    std::cout<<"TIE\n";
}
int main()
{
    int T, DSA1, TOC1, DM1;
    int DSA2, TOC2, DM2;
    std::cin >> T;
    for (int i = 0; i < T; i++)
    {
        std::cin >> DSA1 >> TOC1 >> DM1;
        std::cin >> DSA2 >> TOC2 >> DM2;
        if (DSA1 + TOC1 + DM1 > DSA2 + TOC2 + DM2)
            std::cout << "DRAGON\n";
        else if (DSA1 + TOC1 + DM1 < DSA2 + TOC2 + DM2)
            std::cout << "SLOTH\n";
        else if (DSA1 + TOC1 + DM1 == DSA2 + TOC2 + DM2)
        {
            compare(DSA1, TOC1, DSA2, TOC2);
        }
        else //if (DSA1 == DSA2 && TOC1 == TOC2 && DM1 == DM2)
            std::cout << "TIE\n";
    }
    return 0;
}