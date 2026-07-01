use serde::{Deserialize, Serialize};

#[derive(Deserialize, Serialize, Debug)]
pub struct Grocery {
    name: String,
    calories_per_100g: i32,
}

impl Grocery {
    pub fn new(name: String, calories_per_100g: i32) -> Self {
        Self {
            name,
            calories_per_100g,
        }
    }
}