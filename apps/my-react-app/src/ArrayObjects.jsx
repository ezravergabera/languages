import React, {useState} from 'react';

const ArrayObjects = () => {

    const [cars, setCars] = useState([]);
    const [carYear, setCarYear] = useState(new Date().getFullYear());
    const [carMake, setCarMake] = useState("");
    const [carModel, setCarModel] = useState("");
    const [currIndex, setCurrIndex] = useState(-1);

    function handleAddCar(){
        const newCar = {year: carYear, 
                        make: carMake, 
                        model: carModel}
        setCars(c => [...c, newCar]);
        
        setCarYear(new Date().getFullYear());
        setCarMake("");
        setCarModel("");
    }

    function handleCurrIndex(i){
        setCurrIndex(i);
    }

    function handleRemoveCar(){
        setCars(c => c.filter((_, i) => i !== currIndex))

        setCurrIndex(-1);
    }

    function handleYearChange(e){
        setCarYear(e.target.value);
    }

    function handleMakeChange(e){
        setCarMake(e.target.value);
    }

    function handleModelChange(e){
        setCarModel(e.target.value);
    }

    return (
        <div>
            <h2>List of Car Objects</h2>
            <ul>
                {cars.map((car, index) => 
                <li key={index} onClick={() => handleCurrIndex(index)}>
                    {car.year} {car.make} {car.model}
                </li>)}
            </ul>
            <input type="number" value={carYear} onChange={handleYearChange}></input><br/>
            <input type="text" value={carMake} onChange={handleMakeChange} 
                                placeholder='Enter car make'></input><br/>
            <input type="text" value={carModel} onChange={handleModelChange}
                                placeholder='Enter car model'></input><br/>
            <button onClick={handleAddCar}>Add Car</button>
            <button onClick={handleRemoveCar}>Remove Car</button>
        </div>
    )
}

export default ArrayObjects
