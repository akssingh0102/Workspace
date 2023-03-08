class help{
    public static void main(String[] Args)
    {
        class score{
            int score;

            public void is_winner(){
                if(score>=100){
                    System.out.println("Winner");

                }
                else{
                    System.out.println("Not yet");
                }
            }
        }
        score ak = new score();
        ak.score=10;

        ak.is_winner();
    }
}