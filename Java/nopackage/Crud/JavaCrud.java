// package Java.nopackage.Crud;

import java.io.Console;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.Scanner;

public class JavaCrud {
    String userId;
    char[] password;

    void createForm() {
        Console con = System.console();
        System.out.print("Enter User Id: ");
        userId = con.readLine();
        System.out.print("Enter Password: ");
        password = con.readPassword();
    }

    void create() {
        createForm();
        try {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost/java_crud_2101", "2101", "2101");
        } catch (SQLException ex) {
            System.out.println(ex);
        }
    }

    void read() {

    }

    void update() {

    }

    void delete() {

    }

    public static void main(String[] args) {
        JavaCrud jc = new JavaCrud();
        Scanner scan = new Scanner(System.in);
        int ch;
        while (true) {
            System.out.println("MAIN MENU");
            System.out.println("1. Create");
            System.out.print("Enter choice (0 to exit): ");
            ch = scan.nextInt();
            switch (ch) {
                case 0:
                    System.out.println("Bye!");
                    System.exit(0);
                case 1:
                    jc.create();
                    break;
                default:
                    System.out.println("Invalid option");
            }
        }
    }
}
