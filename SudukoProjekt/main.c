#include <gtk/gtk.h>
#include<stdio.h>
#include<string.h>

/***************************************************************************
 *
 *  Project Suduko
 *
 * Copyright (C) Thomas Epp, Shajan Gambari, Dominik Selker, Till Proetzel, Michaela Knutzen
 *
 * IFA62 - Frau Lina Haji

 ***************************************************************************/


G_MODULE_EXPORT void on_btnInformation_clicked(void);
G_MODULE_EXPORT void on_btnAbout_clicked(void);
G_MODULE_EXPORT void on_btnRank_clicked(void);
G_MODULE_EXPORT void on_btnLoadGame_clicked(void);
G_MODULE_EXPORT void on_btnNewGame_clicked(void);
G_MODULE_EXPORT void on_btnStartGame_clicked(void);
G_MODULE_EXPORT void on_btnBack_clicked(void);
G_MODULE_EXPORT void on_showHelpInfo_activate(void);
G_MODULE_EXPORT void on_saveAs_activate(void);



    GtkBuilder      *builder;
    GtkWidget       *window;

int main(int argc, char *argv[]){

    gtk_init(&argc, &argv); // initialize gtk
    builder = gtk_builder_new(); // Create a builder object for loading the file
    gtk_builder_add_from_file (builder, "window_main.glade", NULL); // Load the XML from a file

    window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));// Get the object called 'main_window' from the file
    gtk_builder_connect_signals(builder, window);// event handlers

    g_object_unref(builder);


     // Background color /White
    GdkColor color;
    color.red = 0xffff;
    color.green = 0xffff;
    color.blue = 0xffff;
    gtk_widget_modify_bg(window, GTK_STATE_NORMAL, &color);// modify background color from window


    gtk_widget_show(window); // show all widget
    gtk_main(); // start main Loop

    return 0;
}

void on_btnInformation_clicked(){

    builder = gtk_builder_new(); // Create a builder object for loading the file
    gtk_builder_add_from_file (builder, "window_information.glade", NULL); // Load the XML from a file

    window = GTK_WIDGET(gtk_builder_get_object(builder, "information_window"));// Get the object called 'information_window' from the file
    gtk_builder_connect_signals(builder, window); // event handlers

   // modify background color from window -> White
    GdkColor color;
    color.red = 0xffff;
    color.green = 0xffff;
    color.blue = 0xffff;
    gtk_widget_modify_bg(window, GTK_STATE_NORMAL, &color);

    g_object_unref(builder);

    gtk_widget_show(window); //show all widgets

}

void on_btnLoadGame_clicked(){


    builder = gtk_builder_new();// Create a builder object for loading the file
    gtk_builder_add_from_file (builder, "window_load.glade", NULL);// Load the XML from a file

    window = GTK_WIDGET(gtk_builder_get_object(builder, "fileChoLoad"));// Get the object called 'fileChoLoad' from the file
    gtk_builder_connect_signals(builder, window);// event handlers

    // modify background color from window -> White
    GdkColor color;
    color.red = 0xffff;
    color.green = 0xffff;
    color.blue = 0xffff;
    gtk_widget_modify_bg(window, GTK_STATE_NORMAL, &color);

    g_object_unref(builder);

    gtk_widget_show(window); //show all widgets

}

void on_btnAbout_clicked(){

    builder = gtk_builder_new();// Create a builder object for loading the file
    gtk_builder_add_from_file (builder, "window_about.glade", NULL);// Load the XML from a file

    window = GTK_WIDGET(gtk_builder_get_object(builder, "about_window")); // Get the object called 'about_window' from the file
    gtk_builder_connect_signals(builder, window);// event handlers

    // modify background color from window -> White
    GdkColor color;
    color.red = 0xffff;
    color.green = 0xffff;
    color.blue = 0xffff;
    gtk_widget_modify_bg(window, GTK_STATE_NORMAL, &color);

    g_object_unref(builder);

    gtk_widget_show(window); //show all widgets

}

void on_btnRank_clicked(){

    builder = gtk_builder_new(); // Create a builder object for loading the file
    gtk_builder_add_from_file (builder, "window_rank.glade", NULL); // Load the XML from a file

    window = GTK_WIDGET(gtk_builder_get_object(builder, "rank_window")); // Get the object called 'rank_window' from the file
    gtk_builder_connect_signals(builder, window);// event handlers

    // modify background color from window -> White
    GdkColor color;
    color.red = 0xffff;
    color.green = 0xffff;
    color.blue = 0xffff;
    gtk_widget_modify_bg(window, GTK_STATE_NORMAL, &color);

    g_object_unref(builder);

    gtk_widget_show(window); //show all widgets
}

void on_btnNewGame_clicked(){


    builder = gtk_builder_new(); // Create a builder object for loading the file
    gtk_builder_add_from_file (builder, "window_newGame2.glade", NULL);// Load the XML from a file

    window = GTK_WIDGET(gtk_builder_get_object(builder, "newGame2_window"));// Get the object called 'newGame1_window' from the file
    gtk_builder_connect_signals(builder, window);// event handlers

    // modify background color from window -> White
    GdkColor color;
    color.red = 0xffff;
    color.green = 0xffff;
    color.blue = 0xffff;
    gtk_widget_modify_bg(window, GTK_STATE_NORMAL, &color);

    g_object_unref(builder);

    gtk_widget_show(window); //show all widgets

}

void on_btnStartGame_clicked(){
    gtk_widget_destroy(window);

    builder = gtk_builder_new(); // Create a builder object for loading the file
    gtk_builder_add_from_file (builder, "window_newGame2.glade", NULL);// Load the XML from a file

    window = GTK_WIDGET(gtk_builder_get_object(builder, "newGame2_window"));// Get the object called 'newGame2_window' from the file
    gtk_builder_connect_signals(builder, window);// event handlers

     // modify background color from window -> White
    GdkColor color;
    color.red = 0xF81F;
    color.green = 0xF81F;
    color.blue = 0xF81F;
    gtk_widget_modify_bg(window, GTK_STATE_NORMAL, &color);

    g_object_unref(builder);

    gtk_widget_show(window); //show all widgets
}

void on_btnBack_clicked(){

gtk_widget_destroy(window);
}

void on_showHelpInfo_activate(){


    builder = gtk_builder_new(); // Create a builder object for loading the file
    gtk_builder_add_from_file (builder, "window_helpInfo.glade", NULL);// Load the XML from a file

    window = GTK_WIDGET(gtk_builder_get_object(builder, "helpInfo_window")); // Get the object called 'helpInfo_window' from the file
    gtk_builder_connect_signals(builder, window);// event handlers

    // modify background color from window -> White
    GdkColor color;
    color.red = 0xffff;
    color.green = 0xffff;
    color.blue = 0xffff;
    gtk_widget_modify_bg(window, GTK_STATE_NORMAL, &color);

    g_object_unref(builder);

    gtk_widget_show(window);  //show all widgets
}

void on_saveAs_activate (){

    int a[3][3]={{50,50,50},{60,60,60},{70,70,70}};

    char str[100];

    printf("\n Enter the filename :");

    gets(str);

on_saveAs(str,a,3,3);

return 0;

}

void on_saveAs(char *save,int a[][3],int n,int m){

    printf("\n Creating %s.csv file",save);

FILE *fp;

int i,j;

save=strcat(save,".csv");

fp=fopen(save,"w+");

fprintf(fp,"row1, row2, row3, row4, row5, row6, row7, row8, row9");

for(i=0;i<m;i++){

    fprintf(fp,"\n%d",i+1);

    for(j=0;j<n;j++)

        fprintf(fp,",%d ",a[i][j]);

    }

fclose(fp);

printf("\n %s file created ",save);
}

