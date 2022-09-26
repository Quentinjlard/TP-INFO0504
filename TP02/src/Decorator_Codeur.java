/**
 * Classe decorator
 * @author Romain Cogné (romain.cogne@etudiant.univ-reims.fr)
 */
public class Decorator_Codeur {
    private Codeur monCodeur;


    public Decorator_Codeur() {
        monCodeur = new Codeur();
    }

    public String encode(String s,int nbCouches) {
        try {
            for (int i = 0; i < nbCouches; i++) {
                s = monCodeur.encode(s);
            }
            return s;
        } catch (Exception e) {
            return e.getMessage();
        }
        
    }

    public String decode(String s,int nbCouches) {
        try {
            for (int i = 0; i < nbCouches; i++) {
                s = monCodeur.decode(s);
            }
            return s;
        } catch (Exception e) {
            return e.getMessage();
        }
        
    }
}
