import java.util.Scanner;
import java.util.ArrayList;

class Adaptateur
{
    public static void main(String[] args)
    {

        int n = 256;
        var codeur=new Codeur();

        try{
            String test = "SDQDYQSUdhqiSDQDYQSUdhqiosdfhqiudhqsçdiqdfgsioqdidfjdsoikdqdsSDQDYQSUdhqiosdfhqiudhqsçdiqdfgsioqdidfjdsoikdqdsSDQDYQSUdhqiosdfhqiudhqsçdiqdfgsioqdidfjdsoikdqdsSDQDYQSUdhqiosdfhqiudhqsçdiqdfgsioqdidfjdsoikdqdsosdfhqiudhqsçdiqdfgsioqdidfjdsoikdqdsSDQDYQSUdhqiosdfhqiudhqsçdiqdfgsioqdidfjdsoikdqdsSDQDYQSUdhqiosdfhqiudhqsçdiqdfgsioqdidfjdsoikdqds^fksdifgqfdkosiufhsqdkdsqldkifjqps^kfqsdfhsdsoghsdpfikqp";

            System.out.println("TEST " + k);

            System.out.println("Affichage test: " + test);


            int length = test.length();
            System.out.println("Length: " + length );

            ArrayList<String> stockage = new ArrayList<String>();
            ArrayList<String> decoupe = new ArrayList<String>();
            ArrayList<String> encoded_message = new ArrayList<String>();
            ArrayList<String> decoded_message = new ArrayList<String>();

            // if (stockage.isEmpty())
            //     System.out.println("Liste vide");
            // if (decoupe.isEmpty())
            //     System.out.println("Liste vide");

            System.out.println("\n  => Zone Decoupage \n");

            for (int i = 0; i < length; i += n) 
            {
                System.out.println(test.substring(i, Math.min(length, i + n)));
                decoupe.add(test.substring(i, Math.min(length, i + n)));
            }

// -----------------------------------------------------------------

            for(String elem :decoupe)
                encoded_message.add(codeur.encode(elem));

            System.out.println("\n - Decoupe : ");
            for (String elem: decoupe)
                System.out.println(elem + " ");

// -----------------------------------------------------------------

            for(String elem :encoded_message)
                decoded_message.add(codeur.decode(elem));
            
            System.out.println("\n - Encoded : ");
            for ( String elem : encoded_message)
                System.out.println(elem + " ");


// -----------------------------------------------------------------

            for(String elem :decoded_message)
                stockage.add(elem);
            
            System.out.println("\n - Dencoded : ");
            for ( String elem : decoded_message)
                System.out.println(elem  + " ");

// -----------------------------------------------------------------

            System.out.println("\n - Stockage : ");
            for ( String elem : stockage)
                System.out.println(elem);

        } 
        catch(Exception e) 
        {
			System.out.println(e.getMessage());
	    }
    }

}
