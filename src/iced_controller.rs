use iced::Fill;
use crate::iced_controller::Status::Welcome;
use iced::wgpu::wgc::command::CommandEncoderError::State;
use iced::widget::{button, column, container, text, Column};
use iced::widget::pane_grid::state;
use crate::File_manager::read_files;
use crate::recipe::Recipe;

#[derive(Debug, Clone, Copy)]
pub enum Status {
    Welcome,
    Refresh,
    Browsing,
    Create,
    Editing,
}

#[derive(Default)]
pub struct IceGUI{
    recipes: Vec<Recipe>,
}

impl IceGUI{
    pub fn new(&mut self){
        self.recipes = read_files().unwrap()
    }

    pub fn view(&self) -> iced::Element<'_, Status>{
        let names_of_recipe: Vec<iced::Element<'_ , Status>> = self.recipes.iter()
            .map(|item| {
                text(item.get_name()).into()
            })
            .collect();

        //data fra databasen
        let info_from_db = Column::with_children(names_of_recipe)
                .spacing(10)
                .padding(20);

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

        }
    }
}

