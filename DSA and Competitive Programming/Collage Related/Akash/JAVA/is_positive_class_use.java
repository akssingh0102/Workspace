import java.util.*;

public class is_positive_class_use {
    public static void main(String[] Args) {
        class numbers{
             int num;
             public boolean is_positive(){
                 if(num>=0){
                     return true;

                 }
                 else
                 return false;
             }
        }

        numbers n = new numbers();

        n.num=-1;
        if(n.is_positive())
            System.out.println("True");
        else
         System.out.println("False");

    }

}