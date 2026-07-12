use serde::{Deserialize, Serialize};

#[derive(Deserialize, Serialize, Debug, Clone)]
pub struct Grocery {
    name: String,
    calories_per_100g: i32,
    grams: i32  
}

impl Grocery {
    pub fn new(name: String, calories_per_100g: i32) -> Self {
        Self {
            name,
            calories_per_100g,
            grams: 0,
        }
    }
    
    pub fn get_calories_per_100(&self) -> i32{
        self.calories_per_100g.clone()        
    }
    pub fn get_grams(&self) -> i32{
        self.grams.clone()
    }
    pub fn set_grams(&mut self, grams: i32){
        self.grams = grams
    }
    pub fn get_name(&self) -> String {
        self.name.clone()
    }
    
    
}