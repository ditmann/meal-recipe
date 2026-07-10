use std::io;
use std::fs::{self, DirEntry};
use std::path::Path;
use serde_json::json;

pub struct File {
    files: Vec<String>,
}
//her returnerer vi et result som kan være at noe gikk galt i ?
// men hvis ikke skal resultatet være en slik vektor som er av typen pathbuf
pub fn read_files() -> io::Result<Vec<std::path::PathBuf>>{
    let storage :&Path = Path::new(r"C:\koding\meal-recipe\recipes");
    let mut jsons = fs::read_dir(storage)?
        .map(|infolder|infolder.map(|json|json.path()))
        .collect::<Result<Vec<_> , io::Error>>()?;
    jsons.sort();

    Ok((jsons))
}