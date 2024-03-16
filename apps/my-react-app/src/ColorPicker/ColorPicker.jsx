import React, {useState} from 'react';
import styles from './ColorPicker.module.css';

function ColorPicker(){
    const [color, setColor] = useState("#FFFFFF");

    function handleColorChange(e){
        setColor(e.target.value);
    }

    return (
        <>
            <div className={styles.colorPickerContainer}>
                <h1 className={styles.colorPickerTitle}>Color Picker</h1>
                <div className={styles.colorDisplay} style={{backgroundColor: color}}>
                    <p>Selected Color: {color}</p>
                </div>
                <div className={styles.colorPickerInput}>
                    <label>Select a Color:</label>
                    <input type="color" value={color} onChange={handleColorChange}/>                    
                </div>
            </div>
        </>
    )
}

export default ColorPicker