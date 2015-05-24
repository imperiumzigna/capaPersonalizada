/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package capajava;

import javafx.application.Application;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.stage.Stage;

/**
 *
 * @author Avell B154 PLUS
 */

public class CapaJava extends Application {
    
    @Override
    public void start(Stage stage) throws Exception {
        
        Parent root = FXMLLoader.load(getClass().getResource("FXMLLayoutPrincipal.fxml"));
        Parent layoutBuscaMarca = FXMLLoader.load(getClass().getResource("FXMLLayoutEditorBuscaMarca.fxml"));
        Scene scene = new Scene(root);
        Scene scene02= new Scene(layoutBuscaMarca);
        stage.setTitle("Personalizador de Capas");
        stage.setScene(scene);
        stage.show();
           
    }
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        launch(args);
    }
    
}
