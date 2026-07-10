use std::fs::File;
use std::io::BufWriter;
use serde::{Deserialize, Serialize};
use serde_json::json;
use crate::grocery::Grocery;


#[derive(Deserialize, Serialize, Debug)]
pub struct Recipe { 
    name: String,
    total_calories: f32,
    ingredients: Vec<Grocery>,
}
impl Recipe {
    pub fn new(name: String, ingredients: Vec<Grocery>) -> Self {
        let mut recipe_no_tot_cal = Self {
            name,
            total_calories : 0f32,
            ingredients
        };
        recipe_no_tot_cal.calculate_total_calories();
        return recipe_no_tot_cal
    }

    fn calculate_total_calories(&mut self){
         let calories_times_grams: i32= self.ingredients
            .iter()
            .map(|grocery|grocery.get_calories_per_100() * grocery.get_grams())
             .sum();
        self.total_calories = (calories_times_grams / 100) as f32
    }

    pub fn add_ingredient(&mut self, ingredient: Grocery){
        self.ingredients.push(ingredient);
        self.calculate_total_calories()
    }

    // takes ownership cuz last thing you should do with a recipe is write it down
    pub fn to_json(self){
        let data = json!({
            "name": self.name,
            "total_calories": self.total_calories,
            "ingredients": self.ingredients,
        });
        let file = File::create(r"recipes\".to_string() + &self.name + ".json").unwrap();
        let writer = BufWriter::new(file);
        serde_json::to_writer_pretty(writer, &data).unwrap();
    }
}
