#include <iostream>
#include <iomanip>


/*
    This program calculates the user's BMI based on their weight and height.
    Keep in mind that this calculator doesn't take into account age or gender.
    The Weight ranges are taken from: https://www.cancer.org/cancer/risk-prevention/diet-physical-activity/body-weight-and-cancer-risk/adult-bmi.html
    for adults 20 years old and older.
*/
int main()
{
    std::cout << "BMI Calculator" << std::endl;
    std::cout << "What's your name?" << std::endl;
    std::string name;
    std::cin >> name;

    std::cout << "Hello, " << name << std::endl;
    std::cout << "What's your weight in kilograms?" << std::endl;
    double weight;
    std::cin >> weight;

    std::cout << "What's your height in centimeters?" << std::endl;
    double height_cm;
    std::cin >> height_cm;

    double height = height_cm / 100.0;

    double bmi = weight / (height * height);
    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    std::string description;

    if (bmi < 18.5)
    {
        description = "underweight";
    } else if (bmi < 25)
    {
        description = "normal weight";
    } else if (bmi < 30)
    {
        description = "overweight";
    } else
    {
        description = "obese";
    }
    
    std::cout << "Your BMI is " << bmi << ", which shows that you are " << description << "." << std::endl;

    return 0;
}
