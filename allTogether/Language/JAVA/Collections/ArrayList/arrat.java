// import java.util.*;
// import java.lang.Boolean;

class BooleanTest{
    boolean isTrue = true;

    void print(){
        if(isTrue){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
    }
}


class Myclass{

    public static void main(String[] args) {
        BooleanTest b = new BooleanTest();

        b.print();
    }
}