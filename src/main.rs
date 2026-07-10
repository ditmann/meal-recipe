mod grocery;
mod recipe;
mod File_manager;
mod controller;

use std::fs;
use grocery::Grocery;
use recipe::Recipe;
use crate::File_manager::read_files;

//for iced gui
use iced::widget::{button, column, text, Column};
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


pub fn main() -> iced::Result {
    iced::run( Counter::update, Counter::view)
}

#[derive(Debug, Clone, Copy)]
pub enum Message {
    Increment,
    Decrement,
}

#[derive(Default)]
struct Counter {
    value: i64,
}

impl Counter {
    fn update(&mut self, message: Message) {
        match message {
            Message::Increment => self.value += 1,
            Message::Decrement => self.value -= 1,
        }
    }
    fn view(&self) -> iced::Element<Message> {
        column![
            button("+").on_press(Message::Increment),
            text(self.value.to_string()),
            button("-").on_press(Message::Decrement),
        ]
            .padding(20)
            .into()
    }
}