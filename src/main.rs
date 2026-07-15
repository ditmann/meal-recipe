mod grocery;
mod recipe;
mod file_manager;
pub mod iced_controller;

use std::fs;
use iced::Fill;
use grocery::Grocery;
use recipe::Recipe;
use crate::file_manager::read_files;

//for iced gui
use iced::widget::{button, column, container, text, Column,};
use crate::iced_controller::{IceGUI};

pub fn main() -> iced::Result {
    iced::run(
        IceGUI::update,
        IceGUI::view,
    )
}