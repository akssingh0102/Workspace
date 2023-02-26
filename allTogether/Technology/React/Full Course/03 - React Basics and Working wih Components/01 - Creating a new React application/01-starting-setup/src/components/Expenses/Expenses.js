import ExpenseItem from "./ExpenseItem";
import Card from "../UI/Card";
import './Expenses.css'

function Expenses(props) {
    const expenses = props.expenses;

    return (
        <Card className="expenses">
            <ExpenseItem data={expenses[0]}></ExpenseItem>
            <ExpenseItem data={expenses[1]}></ExpenseItem>
            <ExpenseItem data={expenses[2]}></ExpenseItem>
            <ExpenseItem data={expenses[3]}></ExpenseItem>
        </Card>
    );
}

export default Expenses;