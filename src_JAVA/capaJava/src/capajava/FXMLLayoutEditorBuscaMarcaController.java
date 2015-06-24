/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package capajava;


import java.awt.image.BufferedImage;
import java.net.URL;
import java.sql.Blob;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ResourceBundle;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.Node;
import javafx.scene.control.Button;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.FlowPane;
import javafx.scene.layout.GridPane;
import javax.imageio.ImageIO;

/**
 * FXML Controller class
 *
 * @author Avell B154 PLUS
 */


public class FXMLLayoutEditorBuscaMarcaController implements Initializable {
    @FXML
    private GridPane grid;
    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    Blob a;
    int tamCol=0;
    int i,j;
            try{
    // conexão db                  
    String host="jdbc:mysql://localhost:3308/marcas";
    String uName="root";
    String uPass="123456";
    String selID="SELECT imagem from marcacel";
    Connection con=DriverManager.getConnection(host,uName,uPass);
    Statement stmt = con.createStatement( );
    ResultSet rs = stmt.executeQuery(selID);
   // fim conexão db
               Blob blob= rs.getBlob("imagem");
               BufferedImage img = ImageIO.read(blob.getBinaryStream());
    while(rs.next()){
    tamCol=tamCol+1;
    }
    
    
   
    }catch(Exception err){
        System.out.println(err.getMessage());
    }

    }    
    
   }
