import ExpenseDate from "./ExpenseDate";
import Card from "../UI/Card";
import "./ExpenseItem.css";

function ExpenseItem(props) {
    const classes = 'expense-item ' + props.className;
    return (
        <Card className={classes}>
            <ExpenseDate date={props.data.date} />
            <div className="expense-item__description">
                <h2>{props.data.title}</h2>
                <div className="expense-item__price">$ {props.data.amount}</div>
            </div>
        </Card>
    );
}

export default ExpenseItem;
