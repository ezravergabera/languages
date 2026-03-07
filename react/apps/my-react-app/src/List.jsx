import PropTypes from 'prop-types'

const List = (props) => {
    const category = props.category
    const itemList = props.items;

    const listItems = itemList.map(item => <li key={item.id}>{item.name} - {item.calories}</li>);


    // fruits.sort((a, b) => a.name.localeCompare(b.name)); //ALPHABETICAL
    // fruits.sort((a, b) => b.name.localeCompare(a.name)); //REVERSE ALPHABETICAL
    // fruits.sort((a, b) => a.calories - b.calories); //NUMERIC
    // fruits.sort((a, b) => b.calories - a.calories); //REVERSE NUMERIC

    // const listItems = fruits.map(fruit => <li key={fruit.id}>{fruit.name} - {fruit.calories}</li>);

    // const lowCalFruits = fruits.filter(fruit => fruit.calories < 100);
    // const listItems = lowCalFruits.map(lowCalFruit => <li key={lowCalFruit.id}>{lowCalFruit.name} - {lowCalFruit.calories}</li>)

    // const highCalFruits = fruits.filter(fruit => fruit.calories > 100);
    // const listItems = highCalFruits.map(highCalFruit => <li key={highCalFruit.id}>{highCalFruit.name} - {highCalFruit.calories}</li>)

    return(<>
            <h3 className="list-category">{category}</h3>
            <ol className="list-items">{listItems}</ol>
            </>);
}
List.propTypes = {
    category: PropTypes.string,
    items: PropTypes.arrayOf(PropTypes.shape({   id: PropTypes.number,
                                                name: PropTypes.string,
                                                calories: PropTypes.number})),
}
List.defaultProps = {
    category: "Category",
    items: [],
}



export default List