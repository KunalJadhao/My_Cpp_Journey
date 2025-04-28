//Recipe Nutrition Calculator

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm> // For std::sort

using namespace std;

// Enumeration for nutrient types
enum class NutrientType {
    CALORIES,
    PROTEIN,
    FAT,
    CARBOHYDRATES
};

// Structure for an ingredient
struct Ingredient {
    string name; // Name of the ingredient
    double quantity; // Quantity of the ingredient
    NutrientType nutrientType; // Type of nutrient
    double nutrientValue; // Nutritional value per unit of the ingredient

    // Constructor for Ingredient
    Ingredient(string n, double q, NutrientType nt, double nv)
        : name(n), quantity(q), nutrientType(nt), nutrientValue(nv) {}
};

//Base class for Recipe
class Recipe{
    protected:
    string recipeName; //Name of the recipe
    vector<Ingredient>ingredients; //Vector to store ingredients

    public:

    //constructor for recipe
    Recipe(string name) : recipeName(name){}

    //Function to add in ingredient 
    void addIngredient(const Ingredient& ingredient){
        ingredients.push_back(ingredient);
    }
}