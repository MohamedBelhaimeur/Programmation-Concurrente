public class Thread extends java.lang.Thread {
    private String phrase;

    public Thread(String phrase){
        this.phrase=phrase;
    }
    @Override
    public void run() {
        System.out.println(phrase);
    }
}
