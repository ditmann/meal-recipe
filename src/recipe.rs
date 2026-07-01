use std::fs::File;
use std::io::BufWriter;
use serde::{Deserialize, Serialize};
use serde_json::json;
use crate::grocery::Grocery;


#[derive(Deserialize, Serialize, Debug)]
pub struct Recipe { 
    name: String,
    ingredients: Vec<Grocery>,
}

impl Recipe {
    pub fn new(name: String, ingredients: Vec<Grocery>) -> Self {
        Self {
            name,
            ingredients
        }
    }

    pub fn add_ingredient(&mut self, ingredient: Grocery){
        self.ingredients.push(ingredient);
    }

    // takes ownership cuz last thing you should do with a recipe is write it down
    pub fn to_json(self){

        let data = json!({
            "name": self.name,
            "ingredients": self.ingredients
        });
        
        let file = File::create(self.name).unwrap();
        let writer = BufWriter::new(file);
        serde_json::to_writer_pretty(writer, &data).unwrap();
        
    }

}
