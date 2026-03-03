'use client';
import { useEffect, useState } from 'react';

function Header({ title }) {
  console.log(title);
  return (
    <>
      <h1>Hello World!</h1>
      <h2>Playing with {title ? title : 'Nothing'}</h2>
    </>
  );
}

function Body(prop) {
  console.log('this is a prop: ' + prop.body);
  return (
    <>
      <h1>{prop.body}</h1>
      <h1>{`Template Literal Example: ${prop.body}`}</h1>
    </>
  );
}

function createTitle(title) {
  if (title) {
    return title;
  } else {
    return 'Default Title';
  }
}

export default function HomePage() {
  const names = ['Arjie', 'Ezra', 'Fiona'];
  const [likes, setLikes] = useState(0);

  useEffect(() => {
    if (likes%10 == 0 && likes != 0) {
      alert(`Congratulations, you got ${likes}!`)
    }
  }, [likes]);

  function incrementLikeCounter() {
    setLikes(n => n + 1);
  }

  function decrementLikeCounter() {
    if (likes != 0) {
      setLikes(likes - 1);
    }
  }

  return (
    <html>
      <body>
        <Header title='React' />
        <Body body='Hello World Body!' />
        <Header />
        <Body
          body={
            <ul>
              {names.map((name) => (
                <li key={name}>{name}</li>
              ))}
            </ul>
          }
        />
        <h1>Likes: {likes}</h1>
        <button onClick={incrementLikeCounter}>Like</button>
        <button onClick={decrementLikeCounter}>Unlike</button>
        <hr />
        <Header title={createTitle('Title from a Function')} />
      </body>
    </html>
  );
}
