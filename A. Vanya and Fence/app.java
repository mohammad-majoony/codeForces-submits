import java.util.Scanner;

public class app {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        
        int count_friend = inp.nextInt() ;
        int height = inp.nextInt() ;

        int []heights = new int[count_friend] ;
        int count_width = 0 ; 
        for(int x = 0 ; x < count_friend ; x++){
            heights[x] = inp.nextInt();
            if(heights[x] > height)  count_width += 2 ;
            else count_width++ ;
        }
        System.out.println(count_width);
        inp.close() ;
    }    
}
