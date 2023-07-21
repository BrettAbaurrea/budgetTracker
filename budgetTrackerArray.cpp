#include <iostream>

int main()
{
    int foodArray[100][3] = {{10, 20}, {30, 70}};
    int foodMoney, foodPercent;
    int i, j, r, c;


    std::cout << "\nHow many are you entering: ";
    std::cin >> i;
    /*
    std::cout << "\nHow many columns: ";
    //j == 3 (gotta be 3 across)
    std::cin >> j;
    */
    std::cout << "\nEnter Elements\n";

    r = 0;
    while (r < i)
    {
        c = 0;
        while (c < 3)
        {
            std::cin >> foodArray[r][c];
            c++;
        }
        r++;
    }
    
    std::cout << "\nPrinting Array\n";
    r = 0;
    while (r < i)
    {
        c = 0;
        while (c < 3)
        {
            std::cout << " " << foodArray[r][c];
            c++;
        }
        std::cout << "\n";
        r++;
    }

    return 0;

}