import styles from './Button.module.css'

const Button = () => {
  // let count = 0;

  // const handleClick = (name) => {
  //   if(count < 3) {
  //     count++;
  //     console.log(`${name} clicked me ${count} time/s`)
  //   }
  //   else {
  //     console.log(`${name} stop clicking me!`)
  //   }
  // };

  // const handleClick2 = (name) => console.log(`${name} stop clicking me`)

  const handleClick = (e) => e.target.textContent = "OUCH!";

  return (
    <button className={styles.btn} onClick={(e) => handleClick(e)}>
        Click me
    </button>
  )
}

export default Button
