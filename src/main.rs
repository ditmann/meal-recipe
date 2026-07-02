mod grocery;
mod recipe;
use grocery::Grocery;
use recipe::Recipe;


fn make_recipe_from_json(file_name: &str) -> Recipe{
    let json = std::fs::read_to_string(file_name).unwrap();
    serde_json::from_str::<Recipe>(&json).unwrap()
}

fn main() {
    let mut meat = Grocery::new(String::from("Meat"), 200);
    let mut milk = Grocery::new(String::from("Milk"), 150);
    let mut greens = Grocery::new(String::from("salat"),2);

    meat.set_grams(49);
    milk.set_grams(50);
    greens.set_grams(500);


    let vec = vec![milk, meat];
    let mut recipe = Recipe::new(String::from("Milk_Meat"), vec);

    recipe.add_ingredient(greens);

    println!("{:#?}", recipe);

    recipe.to_json();

    let recipe2 = make_recipe_from_json(r"C:\koding\meal-recipe\recipes\Milk_Meat");

    println!("{:#?}", recipe2);
}



