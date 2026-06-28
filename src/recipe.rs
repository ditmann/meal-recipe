use crate::grocery::Grocery;
#[derive(Debug)]
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

}
