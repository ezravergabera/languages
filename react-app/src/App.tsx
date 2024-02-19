import Alert from './components/Alert'
import Button from './components/Button'

function App() {
  return (
    <div>
      <Alert>
        Hello <span>World</span>
      </Alert>

      <Button btnType='primary'>
        primary testing
      </Button>
      <Button btnType='secondary'>
        secondary testing
      </Button>
      <Button btnType='success'>
        success testing
      </Button>
      <Button btnType='danger'>
        danger testing
      </Button>
      <Button btnType='warning'>
        warning testing
      </Button>
      <Button btnType='info'>
        info testing
      </Button>
      <Button btnType='light'>
        light testing
      </Button>
      <Button btnType='dark'>
        dark testing
      </Button>
    </div>
  );
}

export default App;