import java.util.Scanner;

public class App{
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in) ;
        int n = inp.nextInt() ;
        int t = inp.nextInt() ;
        String [] children = new String[n] ;
        String text = inp.next() ;
        for(int x = 0 ; x < n ; x++){
            children[x] = String.valueOf(text.charAt(x)) ;
        } 
        for(int time = 0 ; time < t ; time++){
            for(int index = 0 ; index < n - 1 ; index++){
                if(children[index].equals("B") && children[index+1].equals("G")){
                    children[index] = "G" ; 
                    children[index+1] = "B" ;
                    index += 1 ;
                } 
            }
        }
        for(String child : children) System.out.print(child);
        inp.close();
    }
}