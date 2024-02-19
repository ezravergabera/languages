import { ReactNode } from "react";

interface Props {
    children: ReactNode;
    btnType: string;
}

const Button = ({children, btnType}: Props) => {
  return (
    <>
        {btnType.toLowerCase() === 'primary' && <button type="button" className="btn btn-primary">{children}</button>}
        {btnType.toLowerCase() === 'secondary' && <button type="button" className="btn btn-secondary">{children}</button>}
        {btnType.toLowerCase() === 'success' && <button type="button" className="btn btn-success">{children}</button>}
        {btnType.toLowerCase() === 'danger' && <button type="button" className="btn btn-danger">{children}</button>}
        {btnType.toLowerCase() === 'warning' && <button type="button" className="btn btn-warning">{children}</button>}
        {btnType.toLowerCase() === 'info' && <button type="button" className="btn btn-info">{children}</button>}
        {btnType.toLowerCase() === 'light' && <button type="button" className="btn btn-light">{children}</button>}
        {btnType.toLowerCase() === 'dark' && <button type="button" className="btn btn-dark">{children}</button>}
    </>
  )
}

export default Button
