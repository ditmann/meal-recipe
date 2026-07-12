use std::iter::Map;
use iced::Fill;
use crate::iced_controller::Status::Welcome;
use iced::widget::{button, column, container, row, scrollable, text, Column, Row, Scrollable};
use iced::widget::pane_grid::state;
use crate::File_manager::read_files;
use crate::grocery::Grocery;
use crate::recipe::Recipe;

#[derive(Debug, Clone)]
pub enum Status {
    Welcome,
    Refresh,
    Browsing,
    Create,
    Editing(String),
    ChoiceMade(String),
}

#[derive(Debug, Default)]
pub struct IceGUI{
    recipes: Vec<Recipe>,
    selected_recipe: Option<Recipe>,
    ingredients: Option<Vec<Grocery>>,
}

impl IceGUI{
    fn new(&mut self){
        self.recipes = read_files().unwrap()
    }

    fn select_recipe(&mut self, name_of_selected_recipe: String){
        self.selected_recipe = Some(self.recipes.iter()
            .find(|recipe| recipe.get_name() == &name_of_selected_recipe).unwrap().clone());

        self.ingredients = self.selected_recipe.clone().unwrap().get_ingredients();
    }

    pub fn view(&self) -> iced::Element<'_, Status>{

        //--------------------left column-----------------------

        let names_of_recipe: Vec<iced::Element<'_ , Status>> = self.recipes.iter()
            .map(|item| {
                let name = item.get_name();
                button(text(name))
                    .on_press(Status::ChoiceMade(name.clone()))
                .into()
            })
            .collect();

        //data from "DB"
        let info_from_db = scrollable(Column::with_children(names_of_recipe)
            .spacing(10)
            .padding(10));

        let meny_over_left_column = column![
            button("Refresh").on_press(Status::Welcome),
        ]
            .spacing(10)
            .padding(10);

        let left_column = column![meny_over_left_column, info_from_db]
            .padding(10);

        //--------------------mid column--------------------

        let name_of_selected_meal:Row<Status> =
            if let Some(recipe) = &self.selected_recipe {
                row![
                    text(
                        recipe.get_name()
                    ),
                    text(format!("Cal: {}", recipe.get_total_calories()))
                ]
                    .spacing(10)
            } else{
                row![text("gaming")]
            };

        let info_form_selected_meal:Scrollable<Status> = scrollable(if let Some(ingredient) = &self.ingredients {
                let grocery_buttons_and_text: Vec<iced::Element<'_ , Status>> = ingredient
                    .iter()
                    .map(|grocery| {
                        column![
                        button(text(grocery.get_name()))
                            .on_press(Status::Editing(grocery.get_name().clone())),
                            text(format!("per 100 grams: {}", grocery.get_calories_per_100())),
                            text(format!("grams: {}", grocery.get_grams()))
                            ]
                            .spacing(10)
                            .into()
                    })
                    .collect();
                Column::with_children(grocery_buttons_and_text)
                    .spacing(10)
            }else {
                column![text("No Ingredients")]
            });

        let mid_column = column![
        name_of_selected_meal , info_form_selected_meal
        ];

        //---------------------Rowing all the columns-----------------------------
        let row_with_all = row![
            left_column,
            mid_column


        ].padding(20);
        //the thing that shows on screen
        container(
            row_with_all
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
            Status::Editing(ingredient) => println!("testing {}", ingredient),
            Status::ChoiceMade(meal) => { self.select_recipe(meal); }
        }
    }
    fn edit(){

    }
}