mod groceri;
mod recipe;
use groceri::Groceri;
use recipe::Recipe;

fn main() {
    println!("Hello, world!");

    let meat = Groceri::new(String::from("Meat"), 200);

    let milk = Groceri::new(String::from("Milk"), 200);

    let vec = vec![milk, meat];

    let recipe = Recipe::new(String::from("Milk and Meat food"), vec);

    println!("{:#?}", recipe);


}
