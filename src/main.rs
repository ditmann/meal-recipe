mod grocery;
mod recipe;
use grocery::Grocery;
use recipe::Recipe;
use serde::Serialize;
use std::fs::File;
use std::io::BufWriter;
use std::net::Shutdown::Write;
use serde_json::json;

fn main() {
    println!("Hello, world!");

    let meat = Grocery::new(String::from("Meat"), 200);

    let milk = Grocery::new(String::from("Milk"), 200);

    let vec = vec![milk, meat];

    let recipe = Recipe::new(String::from("Milk and Meat food"), vec);

    println!("{:#?}", recipe);

    write_to_file(&recipe)

}
fn write_to_file(recipe: &Recipe) {

    let data = json!({
        "project": recipe.name,
        "tags": ["rust", "backend", "fast"]
    });

    let file = File::create("recipe.json").unwrap();
    let writer = BufWriter::new(file);

    serde_json::to_writer(writer, &data).unwrap();
}
