public class MonAdaptateur {
    private Codeur codeur;

    public MonAdaptateur() {

        this.codeur = new Codeur();
    }

    public String encodeAdapt(String path) {
        String message = "";
        String encoded_string = "";

        int beginIndex = 0;
        try {
            byte[] fileContent = java.nio.file.Files.readAllBytes(new java.io.File(path).toPath());
            message = java.util.Base64.getEncoder().encodeToString(fileContent);

            while (beginIndex < (message.length())) {
                encoded_string += codeur
                        .encode(message.substring(beginIndex, Math.min(beginIndex + 256, message.length())));
                beginIndex += 256;
            }

        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
        return encoded_string;
    }

    public String decodeAdapt(String path_result, String message) {
        String result = "";
        try {
            String encoded_string = "";

            int beginIndex = 0;
            while (beginIndex < (message.length())) {
                encoded_string += codeur
                        .decode(message.substring(beginIndex, Math.min(beginIndex + 256, message.length())));
                beginIndex += 256;
            }

            byte[] data = java.util.Base64.getDecoder().decode(encoded_string);
            java.nio.file.Files.write(new java.io.File(path_result).toPath(), data);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
        return path_result;
    }

}
