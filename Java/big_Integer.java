import java.math.BigInteger;

public class big_Integer {
    public static void main(String[] args) {
        BigInteger A = BigInteger.valueOf(1231421398);
        BigInteger B = BigInteger.valueOf(1231493913);
        BigInteger C = A.add(B);
        System.out.println(C);
    }
}
