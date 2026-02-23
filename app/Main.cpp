#include <iostream>
#include <string>
#include <vector>
#include <ingredientDTO.h>

int main()
{

    IngredientDTO meat("gaming2",1,100);
    IngredientDTO spageti("gaming3",1000,100);
    IngredientDTO sausuge("polse",500,100);

    std::vector<IngredientDTO> ingredients = {meat,spageti,sausuge};

    // Loop by value (creates a copy of each element)
    int tempCalories = 0;
    for (IngredientDTO ingredient : ingredients) {
            std::cout << ingredient.getName() << std::endl;
            std::cout << tempCalories << std::endl;
            tempCalories += ingredient.getTotalCalories();
    }


}