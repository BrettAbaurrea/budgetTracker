#include <iostream>

int main(){

    std::string purchase;
    float amount, totalSpent, denominator;
    int repeat;

    denominator = 0.00;


    do
    {
        std::cout << "What did you buy?  ";
        std::cin >> purchase;   //this is going to store shit later so i think array
        std::cout << "You bought " << purchase;
        std::cout << "\nHow much was it? ";
        std::cin >> amount;
        std::cout << "You spent: $" << amount;
        std::cout << "\nAdd Another? ";
        std::cin >> repeat;
    }while (repeat == 1);

    denominator = amount + denominator;
    //std::cout << "\nDenominator: " << denominator;
    totalSpent = amount / denominator;
    std::cout << "\nTotal Spent: " << totalSpent;

    // std::cout << "Percentage Spent: " <<  totalSpent << "%";

    std::cout << std::endl;
    return 0;

}