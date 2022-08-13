import "./ExpenseItem.css";

function ExpenseItem() {
    return (
        <div className="expense-item">
            <div>Aug 13 2022</div>
            <div className="expense-item__description">
                <h2>Laptop Repair</h2>
                <div className="expense-item__price">25000</div>
            </div>
        </div>
    );
}

export default ExpenseItem;
