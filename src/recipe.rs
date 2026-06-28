use crate::groceri::Groceri;
#[derive(Debug)]
pub struct Recipe {
    name: String,
    ingredients: Vec<Groceri>,
}

impl Recipe {
    pub fn new(name: String, ingredients: Vec<Groceri>) -> Self {
        Self {
            name,
            ingredients
        }
    }

}
