public class MonAdaptateur {


    public String encodeAdapt(String path){
        String message = "";
        try{
            byte[] fileContent = java.nio.file.Files.readAllBytes(new java.io.File(path).toPath());
            message = java.util.Base64.getEncoder().encodeToString(fileContent);
        } catch (Exception e){
            System.out.println(e.getMessage());
        }
        return message;
    }

    public String decodeAdapt(String path_result, String message){
        try{
            byte[] data = java.util.Base64.getDecoder().decode(message);
            java.nio.file.Files.write(new java.io.File(path_result).toPath(),data);
        } catch (Exception e){
            System.out.println(e.getMessage());
        }
        return path_result;
     }
     
}
