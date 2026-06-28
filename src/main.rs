mod grocery;
mod recipe;
use grocery::Grocery;
use recipe::Recipe;

fn main() {
    println!("Hello, world!");

    let meat = Grocery::new(String::from("Meat"), 200);

    let milk = Grocery::new(String::from("Milk"), 200);

    let vec = vec![milk, meat];

    let recipe = Recipe::new(String::from("Milk and Meat food"), vec);

    println!("{:#?}", recipe);


}
