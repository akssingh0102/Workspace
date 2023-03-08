import java.util.*;

class Al{
    public static void main(String[] Args){
        List list = new ArrayList();
        list.add("India");
        list.add("USA");
        list.add("Australia");

        System.out.println(list.toString());

        list.remove(1);

        System.out.println(list.toString());

    }
}