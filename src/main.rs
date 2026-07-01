mod grocery;
mod recipe;
use grocery::Grocery;
use recipe::Recipe;
use std::fs::File;
use serde_json::json;

fn main() {
    println!("Hello, world!");

    let meat = Grocery::new(String::from("Meat"), 200);

    let milk = Grocery::new(String::from("Milk"), 200);

    let vec = vec![milk, meat];

    let recipe = Recipe::new(String::from("Milk_Meat"), vec);

    println!("{:#?}", recipe);

    recipe.to_json();

    let recipe2 = make_recipe_from_json(r".\Milk_Meat");

    println!("{:#?}", recipe2);
}


fn make_recipe_from_json(file_name: &str) -> Recipe{
    let json = std::fs::read_to_string(file_name).unwrap();
    serde_json::from_str::<(Recipe)>(&json).unwrap()
}
