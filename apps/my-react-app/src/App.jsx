import Header from './Header.jsx'
import Food from './Food.jsx'
import Footer from './Footer.jsx'
import Card from './Card.jsx'
import Button from './Button/Button.jsx'
import Student from './Student.jsx'

function App() {
  return (
    <>
       <Student name="Ezra" age={21} isStudent={true}/>
       <Student name="Noob" age={43} isStudent={false}/>
       <Student />
    </>
  );
}

export default App
