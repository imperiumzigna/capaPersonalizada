/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package capajava;

import java.io.IOException;
import java.net.URL;
import java.util.ResourceBundle;

import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import java.sql.*;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.input.MouseEvent;
import javafx.scene.layout.AnchorPane;
import javafx.scene.layout.Pane;
import javafx.stage.Stage;
import javafx.stage.StageStyle;

/**
 *
 * @author Avell B154 PLUS
 */
public class FXMLLayoutPrincipalController implements Initializable {
    
    private Label label;
    @FXML
    private AnchorPane mainPane;
    
    
    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
 
    
       
    }


    @FXML
    private void buttonClickedEditor(MouseEvent event) throws IOException {
    FXMLLoader loader = new FXMLLoader(
    getClass().getResource(
      "FXMLLayoutEditorBuscaMarca.fxml"
    )
  );
    Stage stage=new Stage(StageStyle.DECORATED);
    stage.setScene(
    new Scene(
      (Pane) loader.load()
    )
  );
    stage.setTitle("Seletor de Marcas");
    stage.show();
    }

    @FXML
    private void buttonClickedConfig(MouseEvent event) {
    }

    @FXML
    private void buttonClickedGallery(MouseEvent event) {
    }

    
}
