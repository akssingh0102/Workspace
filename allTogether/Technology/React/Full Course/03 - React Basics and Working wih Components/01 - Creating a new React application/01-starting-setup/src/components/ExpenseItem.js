import "./ExpenseItem.css";

function ExpenseItem(props) {
    // const expenseDate = new Date(2022, 8, 14);
    // const expenseTitle = 'Laptop Repair';
    // const expenseAmount = '25000';
    console.log(props);
    
    return (
        <div className="expense-item">
            <div>{props.data.date.toISOString()}</div>
            <div className="expense-item__description">
                <h2>{props.data.title}</h2>
                <div className="expense-item__price">$ {props.data.amount}</div>
            </div>
        </div>
    );
}

export default ExpenseItem;
