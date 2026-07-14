use std::io;
use std::fs::{self, DirEntry};
use std::path::{Path, PathBuf};
use serde_json::json;
use crate::grocery::Grocery;
use crate::recipe::Recipe;

pub struct File {
    files: Vec<String>,
}
//her returnerer vi et result som kan være at noe gikk galt i ?
// men hvis ikke skal resultatet være en slik vektor som er av typen pathbuf
pub fn read_files() -> io::Result<Vec<Recipe>>{
    let storage :&Path = Path::new(r"recipes");
    let mut jsons = fs::read_dir(storage)?
        .map(|infolder|infolder.map(|json|json.path()))
        .collect::<Result<Vec<_> , io::Error>>()?;
    jsons.sort();

    let recipes: Vec<Recipe> = jsons.iter()
        .map(|json|make_recipe_from_json(json)).collect();
    Ok((recipes))
}

pub fn make_recipe_from_json(file_name: &PathBuf) -> Recipe{
    let json = std::fs::read_to_string(file_name).unwrap();
    serde_json::from_str::<Recipe>(&json).unwrap()
}
