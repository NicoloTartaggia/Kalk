package Players;


public class portiereJava extends giocatoreJava {
	private int tuffo, presa, rinvio, riflessi, agilita, piazzamento;
	
	public portiereJava(){
		super();
		tuffo=50;presa=50;rinvio=50;riflessi=50;agilita=50;piazzamento=50;
	}
	
    public portiereJava(String n, String c, int e, String cam, String cl, String naz){
    	super(n,c,e,cam,cl,naz);
    	tuffo=50;presa=50;rinvio=50;riflessi=50;agilita=50;piazzamento=50;
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
        s = s + "Tuffo: " + tuffo;
        s = s + " Presa: " + presa;
        s = s + " Rinvio: " + rinvio;
        s = s + " Riflessi: " + riflessi;
        s = s + " Agilità: " + agilita;
        s = s + " Piazzamento: " + piazzamento;
        s = s + "\n";
        s = s + "Overall: " + calcolaOverallGiocatore();
        s = s + "\n";
        return s;
    }
    
    public void SetStats(int tuf, int pr, int rin, int rif, int ag, int piaz){
    	tuffo=tuf; presa=pr; rinvio=rin; riflessi=rif; agilita=ag; piazzamento=piaz; 
    	setOverall(calcolaOverallGiocatore());
    }
    public double calcolaOverallGiocatore(){
    	return Math.floor((tuffo*0.20) + (presa*0.30) + (rinvio*0.05) + (riflessi*0.30) + (agilita*0.05) + (piazzamento*0.10));
    }
}
