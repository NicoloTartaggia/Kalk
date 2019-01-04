package Players;


public class centrocampistaJava extends giocatoreJava{
private int velocita, tiro, passaggio, dribbling, difesa, fisico;
	
	public centrocampistaJava(){
		super();
		velocita=50;tiro=50;passaggio=50;dribbling=50;fisico=50;
	}
	public centrocampistaJava(String n, String c, int e, String cam, String cl, String naz){
    	super(n,c,e,cam,cl,naz);
    	velocita=50;tiro=50;passaggio=50;dribbling=50;fisico=50;
	}

    public String getAllInfo(){
    	String s;
        s = "Nome: " + getNome();
        s = s + " Cognome: " + getCognome();
        s = s + " Età: " + getEta();
        s = s + " Campionato: " + getCampionato();
        s = s + " Club: " + getClub();
        s = s + " Nazione: " + getNazione();
        s = s + "\n";
        s = s + "Velocità: " + velocita;
		s = s + " Tiro: " + tiro;
		s = s + " Passaggio: " + passaggio;
		s = s + " Dribbling: " + dribbling;
		s = s + " Difesa: " + difesa;
		s = s + " Fisico: " + fisico;
		s = s + "\n";
		s = s + "Overall: " + calcolaOverallGiocatore();
        s = s + "\n";
		return s;
    }
    
    public void SetStats(int vel, int tir, int pass, int drib, int dif, int fis){
    	velocita=vel; tiro=tir; passaggio=pass; dribbling=drib; difesa=dif; fisico=fis;
    	setOverall(calcolaOverallGiocatore());
    }
    
    public double calcolaOverallGiocatore(){
    	return Math.floor((difesa*0.05) + (fisico*0.05) + (velocita*0.07) + (tiro*0.13) + (passaggio*0.45) + (dribbling*0.25));
    }
}
