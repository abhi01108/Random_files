//1 write a program that prints out a pattern like 10 1 9 2 8 3 8 3 7 4 6 5 
class prac{
    public static void main(String[] args) {
        int big=10;
        int small=1;
        int value=10;
        int bigCount=1;
        int smallCount=1;
        while(big>=5 && small <=5){
            if(value%2==0){
                    System.out.print(big+" ");
                    big--;
                    value--;
            }
            if(value%2==1){
                    System.out.print(small+" ");
                    small++;
                    value--;
            }
            if(big==8 && bigCount==1){
                    System.out.print(big+" ");
                    bigCount--;
            }
            if(small==3 && smallCount==1){
                    System.out.print(small+" ");
                    smallCount--;
            }                
        }
    }
}