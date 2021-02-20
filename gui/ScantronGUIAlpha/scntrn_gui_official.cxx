// generated by Fast Light User Interface Designer (fluid) version 1.0305

#include "scntrn_gui_official.h"
#include <FL/x.H>

extern "C" {
#include "createTest.h"
}

Fl_Menu_Item scntrngui::menu_[] = {
 {"&Courses", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"&New", 0x4006e,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"&Open", 0x4006f,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {"&Exams", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"&New", 0x4006e,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"&Open", 0x4006f,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {"&Questions", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"&New", 0x4006e,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"&Open", 0x4006f,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Double_Window* scntrngui::make_window() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(640, 480, "Scantron Grading Tool");
    w = o; if (w) {/* empty */}
    o->user_data((void*)(this));
    { Fl_Menu_Bar* o = new Fl_Menu_Bar(0, 0, 640, 20);
      o->menu(menu_);
    } // Fl_Menu_Bar* o
    { Fl_Button* create_button =  new Fl_Button(400, 430, 120, 25, "Create Exam");
      create_button->callback(create_exam);
    } // Fl_Button* o
    { Fl_Input* o = new Fl_Input(310, 50, 150, 25, "Test Name");
      o->align(Fl_Align(FL_ALIGN_TOP));
    } // Fl_Input* o
    { Fl_Input* o = new Fl_Input(310, 95, 150, 25, "Search");
      o->align(Fl_Align(FL_ALIGN_TOP));
    } // Fl_Input* o
    { Fl_File_Browser* o = new Fl_File_Browser(15, 210, 265, 235, "Files");
      o->align(Fl_Align(FL_ALIGN_TOP));
    } // Fl_File_Browser* o
    { Fl_Browser* o = new Fl_Browser(340, 210, 220, 200, "Selected Questions");
      o->align(Fl_Align(FL_ALIGN_TOP));
    } // Fl_Browser* o
    { Fl_Choice* o = new Fl_Choice(535, 95, 100, 25, "Versions");
      o->down_box(FL_BORDER_BOX);
    } // Fl_Choice* o
    { Fl_Check_Button* o = new Fl_Check_Button(535, 50, 25, 25, "Settings");
      o->down_box(FL_DOWN_BOX);
      o->align(Fl_Align(FL_ALIGN_LEFT));
    } // Fl_Check_Button* o
    { Fl_Check_Button* o = new Fl_Check_Button(560, 50, 25, 25);
      o->down_box(FL_DOWN_BOX);
    } // Fl_Check_Button* o
    { Fl_Check_Button* o = new Fl_Check_Button(585, 50, 25, 25);
      o->down_box(FL_DOWN_BOX);
    } // Fl_Check_Button* o
    { new Fl_Text_Display(10, 50, 270, 130, "Question Preview");
    } // Fl_Text_Display* o
    o->size_range(640, 480, 640, 480);
    o->end();
  } // Fl_Double_Window* o
  return w;
}

void create_exam(Fl_Widget* w, void* v) {
  printf("hello\n");    
}


int main(int argc, char **argv) {
  scntrngui window;
  Fl_Double_Window* mainwindow = window.make_window();
  mainwindow->show();
  Fl::run();
}
