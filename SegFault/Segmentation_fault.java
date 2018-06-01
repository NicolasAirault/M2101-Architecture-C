public class Segmentation_fault{
	public static void main(String[] args){
		int tab[] = new int[10];
		tab[100] = 10;
		System.out.println(tab[100]);
	}
}
