import java.util.function.Function;

public class lambdaEcpression{
    public static void main(String[] args) {
        String name = "Akash";

        System.out.println(process("Hello World!", String::toUpperCase ));

        
    }

    private static String process(String str,Function <String,String> processor) {
        return processor.apply(str);
    }
}

