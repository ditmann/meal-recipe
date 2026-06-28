#[derive(Debug)]
pub struct Groceri {
    name: String,
    calories_per_100g: i32,
}

impl Groceri {
    pub fn new(name: String, calories_per_100g: i32) -> Self {
        Self {
            name,
            calories_per_100g,
        }
    }
}