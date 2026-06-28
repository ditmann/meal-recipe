use serde::Serialize;
use crate::grocery::Grocery;


#[derive(Serialize, Debug)]
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

    pub fn to_json(&self) -> String {
        todo!()
    }

    pub fn from_json(&self) -> String {
        todo!()
    }



}
