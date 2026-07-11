use std::iter::Map;
use iced::Fill;
use crate::iced_controller::Status::Welcome;
use iced::widget::{button, column, container, scrollable, text, Column};
use iced::widget::pane_grid::state;
use crate::File_manager::read_files;
use crate::recipe::Recipe;

#[derive(Debug, Clone)]
pub enum Status {
    Welcome,
    Refresh,
    Browsing,
    Create,
    Editing,
    ChoiceMade(String),
}

#[derive(Debug, Default)]
pub struct IceGUI{
    recipes: Vec<Recipe>,
}

impl IceGUI{
    fn new(&mut self){
        self.recipes = read_files().unwrap()
    }

    pub fn view(&self) -> iced::Element<'_, Status>{
        let names_of_recipe: Vec<iced::Element<'_ , Status>> = self.recipes.iter()
            .map(|item| {
                let name = item.get_name();
                button(text(name))
                    .on_press(Status::ChoiceMade(name.clone()))
                .into()
            })
            .collect();

        //data fra databasen
        let info_from_db = scrollable(Column::with_children(names_of_recipe)
                .spacing(10));

        let meny_over_left_column = column![
            button("Refresh").on_press(Status::Welcome),
        ]
            .padding(20);

        let lef_column = column![meny_over_left_column, info_from_db]
            .padding(10);

        container(
            lef_column
        )
            .center_x(Fill)
            .into()
    }

    pub fn update(&mut self, state: Status) {
        match state {
            Status::Welcome => self.new(),
            Status::Refresh => println!("test"),
            Status::Browsing => println!("test"),
            Status::Create => println!("gaming"),
            Status::Editing => println!("gaming"),
            Status::ChoiceMade(meal)=>  {
                println!("you chose: {}", meal);
            }
        }
    }
    fn edit(){

    }
}

