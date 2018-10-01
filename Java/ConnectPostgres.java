/*
 * Connect to PostgreSQL by JDBC
 * Use preprared statement and execute the query
 */
import java.sql.Connection;  
import java.sql.DriverManager;  
import java.sql.PreparedStatement;  
import java.sql.ResultSet;  
import java.sql.SQLException;  
  
public class ConnectPostgres {  
    private static String driver = "org.postgresql.Driver";
    private static String url ="jdbc:postgresql://192.168.56.26:5432/qingping";
    private static String user = "qingping";
    private static String password = "Gauss@123";

    static {
        try {
            //Load the driver
            Class.forName(driver);
        } catch (ClassNotFoundException e) {
            System.err.println("Load PostgreSQL Driver failed");
            e.printStackTrace();
        }
    }

    public static Connection getConnection() {
        Connection con = null;
        try {
            con = DriverManager.getConnection(url, user, password);
        } catch (SQLException e) {
            e.printStackTrace();
        }
        if (con != null) {
            // Success!
            System.out.println("getConnection succeed");
        }
        else {
            System.out.println("getConnection failed");
        }
        return con;
    }

    public static void main(String[] args) {
        try {
            Connection conn = getConnection();
            System.out.println("Sleep 120 seconds");
            Thread.sleep(5000);
            PreparedStatement pstmt = conn.prepareStatement("SELECT id, name, salary FROM tt where id = ?"); 
            if (pstmt == null)
                System.out.println("Generate PreparedStatement failed");
            pstmt.setInt(1, 1);
            ResultSet rest = pstmt.executeQuery();
            while (rest.next())
                System.out.println("result data: " + rest.getInt(1) + ", " + rest.getString(2));
            pstmt.close();
            conn.close();
        } catch (SQLException e) {
            e.printStackTrace();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
