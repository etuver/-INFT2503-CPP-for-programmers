//
// Created by Even Tuverud on 26/09/2022.
//
#include <gtkmm.h>

class Window : public Gtk::Window {
public:
    Gtk::VBox vbox;
    Gtk::Entry firstName;
    Gtk::Entry lastName;
    Gtk::Button button;
    Gtk::Label label1;
    Gtk::Label label2;
    Gtk::Label resultLabel;


    Window() {
        button.set_label("Combine names");
        button.set_sensitive(false);

        vbox.pack_start(label1);  //Add the widget label to vbox

        vbox.pack_start(firstName);  //Add the widget entry to vbox
        vbox.pack_start(label2);  //Add the widget label to vbox

        vbox.pack_start(lastName);
        vbox.pack_start(button); //Add the widget button to vbox
        vbox.pack_start(resultLabel);


        add(vbox);  //Add vbox to window
        show_all(); //Show all widgets
        label1.set_text("First name:");
        label2.set_text("Last name:");


        auto activate_button = [this](){
            button.set_sensitive(!firstName.get_text().empty() && !lastName.get_text().empty());
        };

        firstName.signal_changed().connect(activate_button);
        lastName.signal_changed().connect(activate_button);


        button.signal_clicked().connect([this](){
            resultLabel.set_text("Names combined: "  + firstName.get_text() + " " + lastName.get_text());
        });


    }
};

int main() {
    Gtk::Main gtk_main;
    Window window;
    gtk_main.run(window);
}


