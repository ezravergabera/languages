import json
from pydantic import BaseModel
from fastapi import FastAPI, HTTPException, Response

app = FastAPI()

class Pet(BaseModel):
    id: str
    name: str
    breed: str

pets: dict[str, Pet] = {}

with open("dogs.json", encoding="utf8") as file:
    dogs_raw = json.load(file)
    for dog_raw in dogs_raw:
        pet = Pet(**dog_raw)
        pets[pet.id] = pet

@app.get("/")
def read_root() -> Response:
    return Response("The server is running.")

@app.get("/pets/{pet_id}", response_model=Pet)
def read_item(pet_id: str) -> Pet:
    if pet_id not in pets:
        raise HTTPException(status_code=404, detail="Pet not found.")
    return pets[pet_id]
