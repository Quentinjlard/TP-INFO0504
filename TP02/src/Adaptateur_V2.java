import java.util.Scanner;
import java.util.ArrayList;


class Adaptateur_V2
{
    public static void main(String[] args)
    {
        int k = 0;
        int n = 256;
        
        var codeur=new Codeur();

        try{
            // k++;
            // System.out.println(k);
            String PathImage = "INFO0504_TP_2_image.jpg";
            String PathMusique = "INFO0504_TP_2_musique.mp3";
            String path_result = "Resultat.jpg";

            // k++;
            // System.out.println(k);
            byte[] fileContent = java.nio.file.Files.readAllBytes(new java.io.File(PathImage).toPath());
            // System.out.println(fileContent);

            // k++;
            // System.out.println(k);
            String message = java.util.Base64.getEncoder().encodeToString(fileContent);
            // System.out.println(message);
            int length = message.length();
            // System.out.println(length);
            
            // ----------- DECOUPE MESSAGE -----------

            ArrayList<String> decoupe = new ArrayList<String>();
            for (int i = 0; i < length; i += n) 
                decoupe.add(message.substring(i, Math.min(length, i + n)));
            

            // System.out.println("\n - Decouper : ");
            // for(String s : decoupe)
            //     System.out.println(s);

            // ----------- ENCONDED MESSAGE -----------

            ArrayList<String> encoded_message = new ArrayList<String>();
            for(String elem :decoupe)
                encoded_message.add(codeur.encode(elem));

            // System.out.println("\n - Encoder : ");
            // for (String elem: decoupe)
            //     System.out.println(elem);

            // ----------- DECODED MESSAGE -----------

            ArrayList<String> decoded_message = new ArrayList<String>();
            for(String elem :encoded_message)
                decoded_message.add(codeur.decode(elem));
            
            // System.out.println("\n - Encoded : ");
            // for ( String elem : decoded_message)
            //     System.out.println(elem + " ");

            // ----------- Sotckag decoded MESSAGE -----------

            String contruction = null;
            for(String elem :decoded_message)
                contruction += elem;

            // System.out.println("\n - Construction : ");
            // System.out.println(contruction);

            // --------------------------------
            byte[] data = java.util.Base64.getDecoder().decode(contruction);

            if(fileContent.equals(data))
                System.out.println("Probleme");
            
            //----------- CREATED MESSAGE --------
            java.nio.file.Files.write(new java.io.File(path_result).toPath(),data);

        } 
        catch(Exception e) 
        {
			System.out.println(e.getMessage());
	    }
    }

}
