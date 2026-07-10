mod grocery;
mod recipe;
mod File_manager;
mod controller;

use std::fs;
use grocery::Grocery;
use recipe::Recipe;
use crate::File_manager::read_files;

// enum to make it easy for the user
enum State {
    Welcome,
    Browsing,
    Create,
    Editing,
}

pub fn welcome(){
    println!(r"
      __...--~~~~~-._   _.-~~~~~--...__
    // MEAL PRO v0.0 `V'   Her kommer  \\
   // Bytter ut boka  |      Menyen!    \\
  //__...--~~~~~~-._  |  _.-~~~~~~--...__\\
 //__.....----~~~~._\ | /_.~~~~----.....__\\
====================\\|//====================
                    `---`")
}


fn main() {
    let mut action = State::Welcome;


    match action {
        State::Welcome => {
            welcome()
        }
        State::Browsing => {}
        State::Create => {}
        State::Editing => {}
    }
    //
    // while true{
    //     match action {
    //         State::Welcome => {
    //
    //         }
    //         State::Browsing => {
    //
    //         }
    //         State::Create => {
    //
    //         }
    //         State::Editing => {
    //
    //         }
    //     }
    // }


    // let mut meat = Grocery::new(String::from("Meat"), 200);
    // let mut milk = Grocery::new(String::from("Milk"), 150);
    // let mut greens = Grocery::new(String::from("salat"),2);
    //
    // meat.set_grams(49);
    // milk.set_grams(50);
    // greens.set_grams(500);
    //
    //
    // let vec = vec![milk, meat];
    // let mut recipe = Recipe::new(String::from("Milk_Meat"), vec);
    //
    //
    // println!("{:#?}", recipe);
    // recipe.add_ingredient(greens);
    //
    // recipe.to_json();
    //
    // let recipe2 = make_recipe_from_json(r"C:\koding\meal-recipe\recipes\Milk_Meat");
    //
    // println!("{:#?}", recipe2);
    //println!("{:#?}", read_files())

}




