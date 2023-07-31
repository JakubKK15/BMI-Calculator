#include <iostream>
#include <iomanip>

/**
 * Calculate the Body Mass Index (BMI) given the weight and height.
 * 
 * @param weight The weight of the person in kilograms.
 * @param height The height of the person in meters.
 * @return The calculated BMI.
 */
double calculate_bmi(double weight, double height)
{
    // Calculate BMI using the formula: weight / (height * height)
    return weight / (height * height);
}


/**
 * Returns the description of a person's BMI category based on their BMI value.
 *
 * @param bmi The BMI value of the person.
 * @return The description of the BMI category.
 */
std::string bmi_description(double bmi)
{
    // Check if the person is underweight
    if (bmi < 18.5)
    {
        return "underweight";
    }
    // Check if the person has normal weight
    else if (bmi < 25)
    {
        return "normal weight";
    }
    // Check if the person is overweight
    else if (bmi < 30)
    {
        return "overweight";
    }
    // The person is obese
    else
    {
        return "obese";
    }
}

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

    double bmi = calculate_bmi(weight, height);
    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    std::string description = bmi_description(bmi);

    std::cout << "Your BMI is " << bmi << ", which shows that you are " << description << "." << std::endl;

    return 0;
}
