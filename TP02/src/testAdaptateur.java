public class testAdaptateur {
    public static void main (String[] args){
        String path = "./lib/INFO0504_TP_2_image.jpg";
        String path_result = "./result/image.jpg";
        MonAdaptateur adapt = new MonAdaptateur();
        try{
            var message = adapt.encodeAdapt(path);
            // System.out.println(message);
            path_result = adapt.decodeAdapt(path_result,message);
            System.out.println("\nDecode : "+path_result);
        } catch (Exception e){
            System.out.println(e.getMessage());
        }
    }
}
