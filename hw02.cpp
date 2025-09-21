#include <iostream>

int main() {
    double mealAmount, tipPercent;
    const double TAX_RATE = 0.0675;

    std::cout << "Enter meal amount: $";
    std::cin >> mealAmount;

    std::cout << "Enter tip percentage (e.g., 15 for 15%): ";
    std::cin >> tipPercent;

    double tax = mealAmount * TAX_RATE;
    double tip = mealAmount * (tipPercent / 100.0);
    double total = mealAmount + tax + tip;

    std::cout << "\n--- Receipt ---\n";
    std::cout << "Meal Amount:   $" << mealAmount << "\n";
    std::cout << "Sales Tax:     $" << tax << "\n";
    std::cout << "Tip:           $" << tip << "\n";
    std::cout << "Total Amount:  $" << total << "\n";

    return 0;
}
