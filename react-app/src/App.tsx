import Alert from './components/Alert'
import Button from './components/Button'

function App() {
  return (
    <div>
      <Alert>
        Hello <span>World</span>
      </Alert>

      <Button onClick={() => console.log('Clicked')}>
        primary testing
      </Button>
      <Button onClick={() => console.log('Clicked')} btnType='primary'>
        primary testing
      </Button>
      <Button onClick={() => console.log('Clicked')} btnType='secondary'>
        secondary testing
      </Button>
      <Button onClick={() => console.log('Clicked')} btnType='success'>
        success testing
      </Button>
      <Button onClick={() => console.log('Clicked')} btnType='danger'>
        danger testing
      </Button>
      <Button onClick={() => console.log('Clicked')}btnType='warning'>
        warning testing
      </Button>
      <Button onClick={() => console.log('Clicked')} btnType='info'>
        info testing
      </Button>
      <Button onClick={() => console.log('Clicked')} btnType='light'>
        light testing
      </Button>
      <Button onClick={() => console.log('Clicked')} btnType='dark'>
        dark testing
      </Button>
    </div>
  );
}

export default App;