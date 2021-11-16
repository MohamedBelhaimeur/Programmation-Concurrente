public class Main {
    //Q2) Le probleme est que les phrases sont affiché dans le desordre
    // Q3) Pour remedier au problemes j'utilise .join() qui permet d'attendre la fin tun thread
    public static void main(String[]args) throws InterruptedException {

        Thread t1= new Thread("Souvent, pour s’amuser, les hommes d’équipage");

        Thread t2= new Thread("Prennent des goélands, vastes oiseaux des mers,");
        Thread t3= new Thread("Qui suivent, indolents compagnons de voyage,");
        Thread t4= new Thread ("Le navire glissant sur les gouffres amers.");

        t1.start();
        t1.join();
        t2.start();
        t2.join();
        t3.start();
        t3.join();
        t4.start();
    }
}

