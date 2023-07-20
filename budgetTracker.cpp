#include <iostream>

int main(){

    std::string purchase;
    float amount, totalSpent, amountDenominator;
    int repeat, categoryChoice;
    
    //categories
    int food, alcohol, entertainment, necessity;    //category [4]
    float foodAmount, alcoholAmount, entertainmentAmount, necessityAmount;
    float foodPercentage, alcoholPercentage, entertainmentPercentage, necessityPercentage;

    amountDenominator = 0.00;
    foodAmount = 0.00;
    alcoholAmount = 0.00;
    entertainmentAmount = 0.00;
    necessityAmount = 0.00;
    foodPercentage = 0.00;
    alcoholPercentage = 0.00;
    entertainmentPercentage = 0.00;
    necessityPercentage = 0.00;

    do
    {
        std::cout << "\nWhat did you buy?  ";
        std::cin >> purchase;   //this is going to store shit later so i think array
        std::cout << "\nHow much was it? ";
        std::cin >> amount;
        std::cout << "What Category Is This?\n|1.Food| 2.Alcohol | 3.Entertainment | 4.Necessity |: ";
        std::cin >> categoryChoice;

        if (categoryChoice == 1)
        {
            food += 1;
            foodAmount += amount;
            std::cout << "Food = " << foodAmount;
            amountDenominator += amount;

        }
        else if (categoryChoice == 2)
        {
            alcohol += 1;
            alcoholAmount += amount;
            std::cout << "Alcohol = " << alcoholAmount;
            amountDenominator += amount;

        }
        else if (categoryChoice == 3)
        {
            entertainment += 1;
            entertainmentAmount += amount;
            std::cout << "Entertainment = " << entertainmentAmount;
            amountDenominator += amount;

        }
        else if (categoryChoice == 4)
        {
            necessity += 1;
            necessityAmount += amount;
            std::cout << "Necessity = " << necessityAmount;  
            amountDenominator += amount;      
        }

    } while (categoryChoice != 5);

    foodPercentage = foodAmount/amountDenominator;
    alcoholPercentage = alcoholAmount/amountDenominator;
    entertainmentPercentage = entertainmentAmount/amountDenominator;
    necessityPercentage = necessityAmount/amountDenominator;

    std::cout << "\nYou Spent\n$" << foodAmount << " on Food in " << food << " Purcase(s), utilizing " << foodPercentage << "% of your budget \n";
    std::cout << "\nYou Spent\n$" << alcoholAmount << " on Alcohol in. " << alcohol << " Purchase(s), utilizing " << alcoholPercentage << "% of your budget \n";
    std::cout << "\nYou Spent\n$" << entertainmentAmount << " on Entertainment in " << entertainment << " Purchase(s), " << entertainmentPercentage << "% of your budget \n";
    std::cout << "\nYou Spent\n$" << necessityAmount << " on Necessities in " << necessity << " Purchase(s), " << necessityPercentage << "% of your budget \n";


    // amountDenominator = amount + amountDenominator;
    // totalSpent = amount / amountDenominator;
    // std::cout << "\n" << totalSpent << "% has been spent on [category]";

    // std::cout << "Percentage Spent: " <<  totalSpent << "%";

    std::cout << std::endl;
    return 0;

}