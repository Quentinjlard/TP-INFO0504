import java.util.Scanner;
public class Test_Decorator {
    public static void main(String[] args) {

        var decorator = new Decorator_Codeur();

        var scanner = new Scanner(System.in);
        System.out.println("Veuillez entrer votre message.");
        String message = scanner.nextLine();
        System.out.println("Veuillez entrer le nombre de couche d'encodage.");
        int nbCouches = scanner.nextInt();
        

        String message_encode = decorator.encode(message,nbCouches);
        String message_decode = decorator.decode(message_encode,nbCouches);

        System.out.println("Votre message original : " + message + ".");
        System.out.println("Votre message encode : " + message_encode + ".");
        System.out.println("Votre message decode : " + message_decode + ".");

        if (message.equals(message_decode)) {
            System.out.println("Les deux messages sont egaux !");
        } else {
            System.out.println("Les messages ne sont pas egaux !");
        }

    }
}
