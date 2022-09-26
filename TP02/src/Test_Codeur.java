import java.util.Scanner;
/**
 * Class which test the Codeur object
 * @author J.-C. BOISSON 09/2022
 * @version 2.0
 */
public class Test_Codeur
{
	/**
	 * Classical main method to test the encoding/decoding functions of the Codeur object
	 * @param args The command line arguments (not used here)
	 */
    public static void main(String[] args) {
	
		// Initialization of a Codeur object 
		var codeur=new Codeur();
		try {
		
			// Scanner to read the next line (on System.in i.e. keyboard in general)
			var scanner = new Scanner(System.in);

			// The user message
			System.out.println("\nPlease type a message (finishing it by \"return\")");
			var message = scanner.nextLine();

			// The encoded version of the message
			var encoded_message = codeur.encode(message);

			// The decoded version of the message (must be equivalent to the original one)
			var decoded_message = codeur.decode(encoded_message);

			// Show the different version of the message
			System.out.println("\nThe original message is ==> "+message+" <==");
			System.out.println("\nThe encoded  message is ==> "+encoded_message+" <==");
			System.out.println("\nThe decoded  message is ==> "+decoded_message+" <==");
			// Test if the decoding is correct
			System.out.println("\n   original == decoded? "+(message.equals(decoded_message)?"Yes":"No"));
			System.out.println();

		} catch(Exception e) {
			System.out.println(e.getMessage());
	    }
	}
}