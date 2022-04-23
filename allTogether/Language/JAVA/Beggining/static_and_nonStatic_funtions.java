class a{

    public void nonStaticFun(){
        System.out.println("non-Static Funtion");
    }

    public static void staticFun(){
        System.out.println("Static Funtion");
    }

    public static void main(String[] args) {
        a ob = new a();

        ob.nonStaticFun();        
        staticFun();
    }
}