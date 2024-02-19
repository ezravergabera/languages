import { ReactNode } from "react";

interface Props {
    children: ReactNode;
    btnType?: 'primary' | 'secondary' | 'success' | 'danger' | 'warning' | 'info' | 'light' | 'dark';
    onClick: () => void;
}

const Button = ({children, btnType = 'primary', onClick}: Props) => {
  return (
    <button onClick={onClick} className={"btn btn-" + btnType.toLowerCase()}>{children}</button>
  )
}

export default Button
