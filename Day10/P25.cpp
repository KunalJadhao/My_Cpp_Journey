#include <iostream>
#include <unordered_map>
#include <string>

class Ingredient {
public:
    std::string name;
    double calories;

    // Constructor to initialize name and calories
    Ingredient(std::string n, double cal) : name(n), calories(cal) {}

    // Display the ingredient's information
    void display() const {
        std::cout << "Ingredient: " << name << ", Calories: " << calories << std::endl;
    }
};

int main() {
    // Create an unordered map to store ingredients with their names as keys
    std::unordered_map<std::string, Ingredient> ingredients;

    // Inserting ingredients into the map using the 'name' as the key
    ingredients["Sugar"] = Ingredient("Sugar", 387.0);
    ingredients["Salt"] = Ingredient("Salt", 0.0);
    ingredients["Olive Oil"] = Ingredient("Olive Oil", 884.0);
    ingredients["Flour"] = Ingredient("Flour", 364.0);

    // Accessing and displaying the ingredients from the map
    for (const auto& entry : ingredients) {
        entry.second.display();
    }

    return 0;
}
