#include "cookies.h"

std::vector<double> get_cookie_ingredients(int cookies)
{
    std::vector<double> ingredients;

    double sugar_per_cookie = 1.5 / 48;
    double butter_per_cookie = 1.0 / 48;
    double flour_per_cookie = 2.75 / 48;

    double sugar = sugar_per_cookie * cookies;
    double butter = butter_per_cookie * cookies;
    double flour = flour_per_cookie * cookies;

    ingredients.push_back(sugar);
    ingredients.push_back(butter);
    ingredients.push_back(flour);

    return ingredients;
}

