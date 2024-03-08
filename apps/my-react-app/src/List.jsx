const List = () => {
    const fruits = [{id: 1, name: "apple", calories: 95}, 
                    {id: 2, name:"orange", calories: 45}, 
                    {id: 3, name: "banana", calories: 105}, 
                    {id: 4, name: "coconut", calories: 159}, 
                    {id: 5, name: "pineapple", calories: 37}];

    fruits.sort((a, b) => );

    const listItems = fruits.map(fruit => <li key={fruit.id}>{fruit.name} - {fruit.calories}</li>);

    return(<ol>{listItems}</ol>);
}

export default List