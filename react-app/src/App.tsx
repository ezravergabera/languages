import { useState } from 'react';
import Alert from './components/Alert'
import Button from './components/Button'

function App() {
  const [alertVisible, setAlertVisibility] = useState(false)

  return (
    <div>
      {alertVisible && <Alert onClose={() => setAlertVisibility(false)}>
        Hello <span>World</span>
      </Alert>}

      <Button onClick={() => setAlertVisibility(true)}>
        primary testing
      </Button>
      <Button onClick={() => setAlertVisibility(true)} btnType='primary'>
        primary testing
      </Button>
      <Button onClick={() => setAlertVisibility(true)} btnType='secondary'>
        secondary testing
      </Button>
      <Button onClick={() => setAlertVisibility(true)} btnType='success'>
        success testing
      </Button>
      <Button onClick={() => setAlertVisibility(true)} btnType='danger'>
        danger testing
      </Button>
      <Button onClick={() => setAlertVisibility(true)}btnType='warning'>
        warning testing
      </Button>
      <Button onClick={() => setAlertVisibility(true)} btnType='info'>
        info testing
      </Button>
      <Button onClick={() => setAlertVisibility(true)} btnType='light'>
        light testing
      </Button>
      <Button onClick={() => setAlertVisibility(true)} btnType='dark'>
        dark testing
      </Button>
    </div>
  );
}

export default App;