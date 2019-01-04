package Formazione;
import Players.*;
import java.util.ArrayList;

public class formazioneJava {
	private String NomeSquadra, allenatore;
    private ArrayList<Integer> modulo;
    private ArrayList<giocatoreJava> titolari;

    public formazioneJava() {
    	NomeSquadra = "null";
    	allenatore = "null";
    }        
    
    public formazioneJava(String ns, ArrayList<Integer> m, String all){
    	NomeSquadra = ns;
    	allenatore = all;
    	modulo = m;
    	titolari = new ArrayList<giocatoreJava>();
    }

    public int sommaGiocatoriModulo(ArrayList<Integer> v){
    	int somma=0;
    	for(int i = 0; i<v.size(); i++){
    		somma = somma + v.get(i);
    	}
    	return somma;
    }
    
    public boolean checkModulo(ArrayList<Integer> v) {
    	boolean bool = true;
        if(v.size() == 3){
            if((v.get(0) >= 3 && v.get(0) <=5) && (v.get(1) >= 3 && v.get(1) <= 5) && (v.get(2) >= 1 && v.get(2) <= 3) && sommaGiocatoriModulo(v) == 10) bool = true;
        } else if (v.size() == 4){
            if((v.get(0) >= 3 && v.get(0) <=5) && (v.get(1) >= 1 && v.get(1) <= 4) && (v.get(2) >= 1 && v.get(2) <= 4) && (v.get(3) ==1 || v.get(3) == 2) && sommaGiocatoriModulo(v) == 10) bool = true;
        } else if (v.size() == 5){
            if(v.get(0) == 4 && v.get(1) == 1 && v.get(2) == 2 && v.get(3) == 1 && v.get(4) == 2 && sommaGiocatoriModulo(v) == 10) bool = true;
        } else{
        	bool= false;
        }
        return bool;
    }
    
    public void aggiungiModulo(ArrayList<Integer> m){
    	if (checkModulo(m)) modulo = m;
    }
    
    public void aggiungiAllenatore(String all){allenatore=all;} 
    
    public void aggiungiNomeSquadra(String ns){NomeSquadra=ns;}    

    public boolean SquadraCompleta(){
        if(titolari.size() <= 11) return false;
        return true;
    }
    
    public void aggiungiTitolare(giocatoreJava g){
    	if(SquadraCompleta() == false){
    		if(g instanceof portiereJava && checkPortiere()) titolari.add(g);
    		else if(g instanceof difensoreJava && checkDifesa()) titolari.add(g);
    		else if(g instanceof centrocampistaJava && checkCentrocampo()) titolari.add(g);
    		else if(g instanceof attaccanteJava && checkAttacco()) titolari.add(g);
    	}
    }
    
    public boolean isEmpty(){
    	if(titolari.size() == 0) return true;
    	return false;
    }

    public void eliminaSquadra(){
    	for(int i = 0; i < titolari.size(); i++){
    		titolari.remove(i);
    	}
    }
    
    public void eliminaModulo(){
    	for(int i = 0; i < modulo.size(); i++){
    		modulo.remove(i);
    	}
    }
    
    public double calcolaOverallSquadra(){
    	double valutazione = 0.0;
        for(int i = 0; i < titolari.size(); ++i){
            valutazione = valutazione +  titolari.get(i).calcolaOverallGiocatore();
        }
        if(titolari.size() == 0) return valutazione;
        else return Math.floor(valutazione/titolari.size());
    }
    
    
    public boolean checkPortiere(){
    	boolean nonpresente = true;
        for(int i=0; i<titolari.size() && nonpresente ==true ; i++){
            if(titolari.get(i) instanceof portiereJava){
                nonpresente = false;
            }
        }
        return nonpresente;
    }
    
    public boolean checkDifesa(){
    	int numDifensori = 0;
        for(int i=0; i<titolari.size(); i++){
            if(titolari.get(i) instanceof difensoreJava){
                numDifensori++;
            }
        }
        if(numDifensori < modulo.get(0)) return true;
        else return false;
    }
    
    public boolean checkCentrocampo(){
    	int numCentrocampisti = 0;
    	boolean bool = true;
        for(int i=0; i<titolari.size(); i++){
            if(titolari.get(i) instanceof centrocampistaJava) numCentrocampisti++;
        }
        if(modulo.size() == 3){
            if(numCentrocampisti < modulo.get(1)) bool = true;
            else bool = false;
        } else if(modulo.size() == 4){
            if(numCentrocampisti < (modulo.get(1) + modulo.get(2))) bool = true;
            else bool = false;
        } else if (modulo.size() == 5){
            if(numCentrocampisti < modulo.get(1) + modulo.get(2) + modulo.get(3)) bool = true;
            else bool = false;
        }
        return bool;
    }
    
    public boolean checkAttacco(){
    	int numAttaccanti = 0;
    	boolean bool = true;
        for(int i=0; i<titolari.size(); i++){
            if(titolari.get(i) instanceof attaccanteJava) numAttaccanti++;
        }
        if(modulo.size() == 3){
            if(numAttaccanti < modulo.get(2)) bool = true;
            else bool = false;
        } else if(modulo.size() == 4){
            if(numAttaccanti < (modulo.get(3))) bool = true;
            else bool = false;
        } else if (modulo.size() == 5){
            if(numAttaccanti < (modulo.get(4))) bool = true;
            else bool = false;
        }
        return bool;
    }

    public String getNomeSquadra(){
    	return NomeSquadra;
    }
    
    public ArrayList<Integer> getModulo(){
    	return modulo;
    }
    
    public String getAllenatore(){
    	return allenatore;
    }
    
    public ArrayList<giocatoreJava> getTitolari(){
    	return titolari;
    }
}
