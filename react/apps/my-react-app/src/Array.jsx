import React, {useState} from 'react';

const Array = () => {
    const[foods, setFoods] = useState(["Apple", "Orange", "Banana"]);

    const[currIndex, setCurrIndex] = useState();

    function handleAddFood(){
        const newFood = document.getElementById("foodInput").value;
        document.getElementById("foodInput").value = "";

        setFoods(f => [...f, newFood]);
    }

    function handleCurrIndex(i){
        setCurrIndex(i);
    }

    function handleRemoveFood(){
        setFoods(foods.filter((_, i) => i !== currIndex))
        setCurrIndex(-1);
    }

    return (
        <div>
            <h2>List of Food</h2>
            <ul>
                {foods.map((food, index) =>
                <li key={index} onClick={() => handleCurrIndex(index)}>
                    {food}
                </li>)}
            </ul>
            <input type="text" id="foodInput" placeholder='Enter food name'></input>
            <button onClick={handleAddFood}>Add Food</button>
            <button onClick={handleRemoveFood}>Remove Food</button>
        </div>
    )
}

export default Array
