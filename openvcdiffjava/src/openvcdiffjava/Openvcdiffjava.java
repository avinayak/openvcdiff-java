/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package openvcdiffjava;

/**
 *
 * @author Atul Vinayak
 */
public class Openvcdiffjava {

    static String d = "abcdefgh";
    static String t = "abcdefghiabcddefdavc";

    static {
        System.load("C:\\Users\\Atul Vinayak\\Documents\\NetBeansProjects\\openvcdiffjavajni\\dist\\openvcdiffjavajni.dll");
    }

    public native byte[] vcdiffEncode(String dictionary, String target);
    public native String vcdiffDecode(String dictionary, byte[] delta);

//    public static void main(String[] args) {
//        // TODO code application logic here
//        //System.out.println(new main().vcdiffEncode("helphelphelp", "helphelp"));
//        byte[] a = new Openvcdiffjava().vcdiffEncode(d, t);
//        for (byte b : a) {
//            System.out.print((char) b);
//        }
//        System.out.println("\n--------------------------------------------------------------");
//        System.out.println(new Openvcdiffjava().vcdiffDecode(d, a));
//    }

}
