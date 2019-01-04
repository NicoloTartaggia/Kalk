package Players;

public abstract class giocatoreJava {
	private String nome, cognome, campionato, club, nazione;
    private int eta;
    static double overall = 0;
    
    public giocatoreJava(){
    	nome="null"; cognome="null"; eta=16; campionato = "null"; club = "null"; nazione="null";}
    
    public giocatoreJava(String n, String cgn, int e, String cam, String cl, String naz){
	    nome=n; cognome=cgn; eta=e; campionato=cam; club=cl; nazione=naz;}
	
	public String getNome() {return nome;}
	
	public String getCognome(){return cognome;}
	
	public int getEta() {return eta;}
	
	public String getCampionato(){return campionato;}
	
	public String getClub(){return club;}
	
	public String getNazione(){return nazione;}
	
	public double getOverall() {return overall;}
	
	public void setOverall(double i){overall=i;}
	
	boolean checkStileIntesa(int i){
	if(i>=99) return true;
	return false;
	}
	
	public void setNome(String s){nome = s;}
	
	public void setCognome(String s){cognome = s;}
	
	public void setEta(int x){eta = x;}
	
	public void setCampionato(String s){campionato = s;}
	
	public void setClub(String s){club = s;}
	
	public void setNazione(String s){nazione = s;}
	
	public abstract void SetStats(int v, int t, int p, int d, int dif, int fis);
	public abstract double calcolaOverallGiocatore();
	public abstract String getAllInfo();
}	