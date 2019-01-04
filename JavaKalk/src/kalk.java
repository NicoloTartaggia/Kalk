import Formazione.*;
import Players.*;
import java.util.ArrayList;

public class kalk {
	public static void main(String args[]){
		
		//creo il modulo da aggiungere alla formazione (4-3-3)
		ArrayList<Integer> l = new ArrayList<Integer>();
		l.add(4);
		l.add(3);
		l.add(3);
		
		//costruisco la mia formazione
		formazioneJava f = new formazioneJava("Juventus",l,"Allegri");
		
		//stampo il modulo
		for(int i=0; i<f.getModulo().size();i++) System.out.println(f.getModulo().get(i));
		
		//cambio modulo
		f.eliminaModulo();
		ArrayList<Integer> l2 = new ArrayList<Integer>();
		l2.add(4);
		l2.add(3);
		l2.add(1);
		l2.add(2);
		f.aggiungiModulo(l2);
		
		//stampo il nuovo modulo
		for(int i=0; i<f.getModulo().size();i++) System.out.println(f.getModulo().get(i));
		
		//crezione giocatori da aggiungere alla squadra
		giocatoreJava g1 = new portiereJava("Mattia","Perin",25,"Serie A","Juventus","Italia");
		g1.SetStats(85,85,80,84,85,78);
		giocatoreJava g6 = new portiereJava("Carlo","Pinsoglio",28,"Serie A","Juventus","Italia");
		g1.SetStats(75,75,70,74,75,70);
		giocatoreJava g2 = new difensoreJava("Giorgio","Chiellini",32,"Serie A","Juventus","Italia");
		g2.SetStats(78,45,60,50,88,90);
		giocatoreJava g3 = new difensoreJava("Andrea","Barzagli",35,"Serie A","Juventus","Italia");
		g3.SetStats(80,50,60,50,86,88);
		giocatoreJava g4 = new centrocampistaJava("Miralem","Pjanic",28,"Serie A","Juventus","Bosnia");
		g4.SetStats(75,80,87,85,55,75);
		giocatoreJava g5 = new attaccanteJava("Cristiano","Ronaldo",33,"Serie A","Juventus","Portogallo");
		g5.SetStats(93,92,88,95,30,90);
		
		ArrayList<giocatoreJava> al = f.getTitolari();
		f.aggiungiTitolare(g1);
		f.aggiungiTitolare(g2);
		f.aggiungiTitolare(g3);
		f.aggiungiTitolare(g4);
		f.aggiungiTitolare(g5);
		f.aggiungiTitolare(g6); //non verrà aggiunto perchè è già presente il portiere
		
		//stampo tutte le info dei giocatori
		for(int i = 0; i<al.size(); i++){
			System.out.println(al.get(i).getAllInfo());
		}
		
		System.out.println("Overall Squadra:");
		System.out.println(f.calcolaOverallSquadra());
		
	}
}
