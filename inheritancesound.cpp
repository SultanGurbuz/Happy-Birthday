#include <iostream>
#include <windows.h>

class Note {
public:
    Note(class Note &c): frequency(c.frequency), duration(c.duration) {} // Copy constructor
    Note() : frequency(0), duration(0) {}
    Note(int frequency, int duration) : frequency(frequency), duration(duration) {}
    ~Note() {}

    void playNote( ) {
        Beep(frequency, duration);
    }
    void playNote(int duration){
        Beep(frequency, duration);
    }
    void playNote(int frequency, int duration){
        Beep(frequency, duration);
    }

    //I add the playNote function without parameter
    //I also add the playNote function with one parameter for using efficiently the program.
protected://I changed it because the derived class should access the data members.
    int frequency;
    int duration;
};



class B3 : public Note {
public:
    B3() : Note (246,0) {}
    B3(int duration) : Note (246, duration) {}
    ~B3() {}
};

class A4 : public Note {
public:
    A4() : Note (440,0) {}
    A4(int duration) : Note(440, duration) {} 
    ~A4() {}
};
class A4Sharp : public Note {
public:
    A4Sharp(): Note (466,0) {}  
    A4Sharp(int duration) : Note (466, duration) {} 
    ~A4Sharp() {}
};
class A4Flat : public Note {
public:
    A4Flat() : Note (415,0) {}
    A4Flat(int duration) : Note (415, duration) {} 
    ~A4Flat() {}
};
class B4 : public Note {
public:
    B4() : Note (494,0) {}
    B4(int duration) : Note (494, duration) {}
    ~B4() {}
};
class B4Sharp : public Note {
public:
    B4Sharp() : Note (523,0) {} 
    B4Sharp(int duration) : Note (523, duration) {}
    ~B4Sharp() {}
};
class B4Flat : public Note {
public:
    B4Flat() : Note (466,0) {}  
    B4Flat(int duration) : Note (466, duration) {}
    ~B4Flat() {}
};
class C4 : public Note {
public:
    C4() : Note (262,0) {}
    C4(int duration) : Note (262, duration) {}
    ~C4() {}
};
class C4Sharp : public Note {
    public:
        C4Sharp() : Note (277,0) {}
        C4Sharp(int duration) : Note (277, duration) {}
        ~C4Sharp() {}
};
class C4Flat : public Note {
public:
    C4Flat(): Note (233,0) {}
    C4Flat(int duration) : Note (233, duration) {}
    ~C4Flat() {}
};
class D4 : public Note {
public:
    D4() : Note (294,0) {}
    D4(int duration) : Note (294, duration) {}
    ~D4() {}
};
class D4Sharp : public Note {
public:
    D4Sharp() : Note (311,0) {}
    D4Sharp(int duration) : Note (311, duration) {}
    ~D4Sharp() {}
};
class D4Flat : public Note {
public:
D4Flat() : Note (277,0) {}
    D4Flat(int duration) : Note (277, duration) {}
    ~D4Flat() {}
};
class E4 : public Note {
public:
    E4(): Note (330,0) {}
    E4(int duration) : Note (330, duration) {}
    ~E4() {}
};
class E4Sharp : public Note {
public:
    E4Sharp(): Note (349,0) {}
    E4Sharp(int duration) : Note (349, duration) {}
    ~E4Sharp() {}
};

class F4 : public Note {
public:
    F4(): Note (349,0) {} 
    F4(int duration) : Note (349, duration) {}
    ~F4() {}
}; 
class F4Sharp : public Note {
public:
    F4Sharp() : Note (370,0) {}
    F4Sharp(int duration) : Note (370, duration) {}
    ~F4Sharp() {}
};
class F4Flat : public Note {
public:
    F4Flat(): Note (311,0) {}
    F4Flat(int duration) : Note (311, duration) {}
    ~F4Flat() {}
};
class G4 : public Note {
public:
    G4() : Note (392,0) {}
    G4(int duration) : Note (392, duration) {}
    ~G4() {}
};
class G4Sharp : public Note {
public:
    G4Sharp() : Note (415,0) {}
    G4Sharp(int duration) : Note (415, duration) {}
    ~G4Sharp() {}
};
class G4Flat : public Note {
public:
    G4Flat() : Note (370,0) {}  
    G4Flat(int duration) : Note (370, duration) {}
    ~G4Flat() {}
};
class A5 : public Note {
public:
    A5() : Note (880,0) {}
    A5(int duration) : Note (880, duration) {}
    ~A5() {}
};
class A5Sharp : public Note {
public:
    A5Sharp() : Note (932,0) {}
    A5Sharp(int duration) : Note (932, duration) {}
    ~A5Sharp() {}
};
class A5Flat : public Note {
public:
    A5Flat() : Note (831, 0) {}
    A5Flat(int duration) : Note (831, duration) {}
    ~A5Flat() {}
};
class B5 : public Note {
public:
    B5() : Note (988,0) {}  
    B5(int duration) : Note (988, duration) {}
    ~B5() {}
};
class B5Sharp : public Note {
public:
    B5Sharp() : Note (1047,0) {}    
    B5Sharp(int duration) : Note (1047, duration) {}
    ~B5Sharp() {}
};
class B5Flat : public Note {
public:
    B5Flat() : Note (932,0) {}
    B5Flat(int duration) : Note (932, duration) {}
    ~B5Flat() {}
};
class C5 : public Note {
public:
    C5() : Note (523,0) {}
    C5(int duration) : Note (523, duration) {}
    ~C5() {}
};
class C5Sharp : public Note {
public:
    C5Sharp() : Note (554,0) {}
    C5Sharp(int duration) : Note (554, duration) {}
    ~C5Sharp() {}
};
class C5Flat : public Note {
public:
    C5Flat() : Note (466,0) {}
    C5Flat(int duration) : Note (466, duration) {}
    ~C5Flat() {}
};
class D5 : public Note {
public:
    D5() : Note (587,0) {}
    D5(int duration) : Note (587, duration) {}
    ~D5() {}
};
class D5Sharp : public Note {
public:
    D5Sharp() : Note (622,0) {}
    D5Sharp(int duration) : Note (622, duration) {}
    ~D5Sharp() {}
};
class D5Flat : public Note {
public:
    D5Flat() : Note (554,0) {}
    D5Flat(int duration) : Note (554, duration) {}
    ~D5Flat() {}
};
class E5 : public Note {
public:
    E5() : Note (659,0) {}
    E5(int duration) : Note (659, duration) {}
    ~E5() {}
};

class E5Flat : public Note {
public:
    E5Flat() : Note (622, 0) {}
    E5Flat(int duration) : Note (622, duration) {}
    ~E5Flat() {}
};
class F5 : public Note {
public:
    F5() : Note (698,0) {}
    F5(int duration) : Note (698, duration) {}
    ~F5() {}
};
class F5Sharp : public Note {
public:
    F5Sharp() : Note (740,0) {}
    F5Sharp(int duration) : Note (740, duration) {}
    ~F5Sharp() {}
};
class F5Flat : public Note {
public:
F5Flat() : Note (622,0) {}
    F5Flat(int duration) : Note (622, duration) {}
    ~F5Flat() {}
};
class G5 : public Note {
public:

    G5() : Note (784,0) {}
    G5(int duration) : Note (784, duration) {}
    ~G5() {}
};

class G5Sharp : public Note {
public:
    G5Sharp() : Note (831,0) {}
    G5Sharp(int duration) : Note (831, duration) {}
    ~G5Sharp() {}
};

class G5Flat : public Note {
public:
    G5Flat() : Note (740,0) {}
    G5Flat(int duration) : Note (740, duration) {}
    ~G5Flat() {}
};
int main() {
  
    
    B3 b3; //using default constructor
    B3 b3_4(b3); //using copy constructor
    B3 b3_1(250); //using constructor with duration
    B3 b3_2(500);
    B3 b3_3(750);
    
    
    A4 a4;
    A4 a4_4(a4);
    A4 a4_1(250);
    A4 a4_2(500);
    A4 a4_3(750);
    
    A4Sharp a4Sharp;
    A4Sharp a4Sharp_4(a4Sharp);
    A4Sharp a4Sharp_1(250);
    A4Sharp a4Sharp_2(500);
    A4Sharp a4Sharp_3(750);
    
    A4Flat a4Flat;
    A4Flat a4Flat_4(a4Flat);
    A4Flat a4Flat_1(250);
    A4Flat a4Flat_2(500);
    A4Flat a4Flat_3(750);

    B4 b4;
    B4 b4_4(b4);
    B4 b4_1(250);
    B4 b4_2(500);
    B4 b4_3(750);
    
    B4Sharp b4Sharp;
    B4Sharp b4Sharp_4(b4Sharp);
    B4Sharp b4Sharp_1(250);
    B4Sharp b4Sharp_2(500);
    B4Sharp b4Sharp_3(750);
    
    B4Flat b4Flat;
    B4Flat b4Flat_4(b4Flat);
    B4Flat b4Flat_1(250);
    B4Flat b4Flat_2(500);
    B4Flat b4Flat_3(750);
    
    C4 c4;
    C4 c4_4(c4);
    C4 c4_1(250);
    C4 c4_2(500);
    C4 c4_3(750);
    
    C4Sharp c4Sharp;
    C4Sharp c4Sharp_4(c4Sharp);
    C4Sharp c4Sharp_1(250);
    C4Sharp c4Sharp_2(500);
    C4Sharp c4Sharp_3(750);
    
    C4Flat c4Flat;
    C4Flat c4Flat_4(c4Flat);
    C4Flat c4Flat_1(250);
    C4Flat c4Flat_2(500);
    C4Flat c4Flat_3(750);
    
    D4 d4;
    D4 d4_4(d4);
    D4 d4_1(250);
    D4 d4_2(500);
    D4 d4_3(750);   
    
    D4Sharp d4Sharp;
    D4Sharp d4Sharp_4(d4Sharp);
    D4Sharp d4Sharp_1(250);
    D4Sharp d4Sharp_2(500);
    D4Sharp d4Sharp_3(750); 
    
    D4Flat d4Flat;
    D4Flat d4Flat_4(d4Flat);
    D4Flat d4Flat_1(250);
    D4Flat d4Flat_2(500);
    D4Flat d4Flat_3(750);   
    
    E4 e4;
    E4 e4_4(e4);
    E4 e4_1(250);
    E4 e4_2(500);
    E4 e4_3(750);   
    
    E4Sharp e4Sharp;
    E4Sharp e4Sharp_4(e4Sharp);
    E4Sharp e4Sharp_1(250);
    E4Sharp e4Sharp_2(500);
    E4Sharp e4Sharp_3(750);
    
    F4 f4;
    F4 f4_4(f4);
    F4 f4_1(250);
    F4 f4_2(500);
    F4 f4_3(750);
    
    F4Sharp f4Sharp;
    F4Sharp f4Sharp_4(f4Sharp);
    F4Sharp f4Sharp_1(250);
    F4Sharp f4Sharp_2(500);
    F4Sharp f4Sharp_3(750);
    
    F4Flat f4Flat;
    F4Flat f4Flat_4(f4Flat);
    F4Flat f4Flat_1(250);
    F4Flat f4Flat_2(500);
    F4Flat f4Flat_3(750);
    
    G4 g4;
    G4 g4_4(g4);
    G4 g4_1(250);
    G4 g4_2(500);
    G4 g4_3(750);
    
    G4 g4Sharp;
    G4Sharp g4Sharp_1(250);
    G4Sharp g4Sharp_2(500);
    G4Sharp g4Sharp_3(750);
    
    G4Flat g4Flat;
    G4Flat g4Flat_1(250);
    G4Flat g4Flat_2(500);
    G4Flat g4Flat_3(750);
    
    C5Sharp c5Sharp_1(250);
    C5Sharp c5Sharp_2(500);
    C5Sharp c5Sharp_3(750);
    C5Sharp c5Sharp;

    C5Flat c5Flat;
    C5Flat c5Flat_1(250);
    C5Flat c5Flat_2(500);
    C5Flat c5Flat_3(750);
    
    D5 d5_1(250);
    D5 d5_2(500);
    D5 d5_3(750);
    D5 d5;
    
    D5Sharp d5Sharp;
    D5Sharp d5Sharp_1(250);
    D5Sharp d5Sharp_2(500);
    D5Flat d5Sharp_3(750);
    
    D5Flat d5Flat;
    D5Flat d5Flat_1(250);
    D5Flat d5Flat_2(500);
    D5Flat d5Flat_3(750);
    
    E5 e5_1(250);
    E5 e5_2(500);
    E5 e5_3(750);
    E5 e5;
    
    E5Flat e5Flat;
    E5Flat e5Flat_1(250);
    E5Flat e5Flat_2(500);
    E5Flat e5Flat_3(750);
    
    F5 f5;
    F5 f5_1(250);
    F5 f5_2(500);
    F5 f5_3(750);
    
    F5Sharp f5Sharp;
    F5Sharp f5Sharp_1(250);
    F5Sharp f5Sharp_2(500);
    F5Sharp f5Sharp_3(750);
    
    F5Flat f5Flat;
    F5Flat f5Flat_1(250);
    F5Flat f5Flat_2(500);
    F5Flat f5Flat_3(750);
    
    G5 g5;
    G5 g5_1(250);
    G5 g5_2(500);
    G5 g5_3(750);
    
    G5Sharp g5Sharp;
    G5Sharp g5Sharp_1(250);
    G5Sharp g5Sharp_2(500);
    G5Sharp g5Sharp_3(750);
    
    G5Flat g5Flat;
    G5Flat g5Flat_1(250);
    G5Flat g5Flat_2(500);
    G5Flat g5Flat_3(750);
    
    A5 a5;  
    A5 a5_1(250);
    A5 a5_2(500);
    A5 a5_3(750);
    
 
    A5Sharp a5Sharp;
    A5Sharp a5Sharp_1(250);
    A5Sharp a5Sharp_2(500);
    A5Sharp a5Sharp_3(750);
    
    A5Flat a5Flat;
    A5Flat a5Flat_1(250);
    A5Flat a5Flat_2(500);
    A5Flat a5Flat_3(750);
    
    B5 b5;
    B5 b5_1(250);
    B5 b5_2(500);
    B5 b5_3(750);
    
    B5Sharp b5Sharp;
    B5Sharp b5Sharp_1(250);
    B5Sharp b5Sharp_2(500);
    B5Sharp b5Sharp_3(750);
    
    B5Flat b5Flat;
    B5Flat b5Flat_1(250);
    B5Flat b5Flat_2(500);
    B5Flat b5Flat_3(750);   
    
    C5 c5;
    C5 c5_1(250);
    C5 c5_2(500);   
    C5 c5_3(750);   
    Note blank;
    //song 1
    //Lyrics
    //Even I don't know my feelings
     /*
    c5.playNote(750);
    e5.playNote(500);
    c5_2.playNote();//for duration 500ms
    b4_3.playNote();//for duration 750ms
    d5_3.playNote();
    b4_3.playNote();
    a4_3.playNote();
    c5_3.playNote();
    d5_2.playNote();
    e5_2.playNote();
    blank.playNote(500);
    c5.playNote(750);
    e5.playNote(500);*/
    //What can I say to you now?
  /*  c5_2.playNote();//for duration 500ms
    b4_3.playNote();//for duration 750ms
    d5_3.playNote();
    b4_3.playNote();
    a4_3.playNote();
    c5_3.playNote();
    d5_2.playNote();
    c5_2.playNote();
    blank.playNote(500);
    //Only thing I can do is to sing this song
    g5_3.playNote();
    g5_3.playNote();
    f5_3.playNote();
    e5_3.playNote();
    e5_3.playNote();
    d5_2.playNote();
    c5_2.playNote();
    c5_2.playNote();
    d5_2.playNote();
    e5.playNote(250);
    f5.playNote(250);
    e5.playNote(250);
    //that Lyrics came from my heart.

    g5_2.playNote();
    a5_2.playNote();
    g5_1.playNote();
    f5_1.playNote();
    e5_2.playNote();
    f5_2.playNote();
    e5_1.playNote();
    d5_3.playNote();
    c5_2.playNote();
    g4_2.playNote();
    c5_3.playNote();
*/
    //song 2
    //Lyrics
    //I have a dream 
    //to live a life with you
    //I can't help but think of you
    //There's no one else but you
    //I have a dream with you
    //To live a life with you
    //I can't help but think of you
    //There's no one else but you
    //If I confess my feelings 
    // Cna you love me back?
    //If I stay with you
    //Can you hold me tight?

    c4.playNote(250);
    c4.playNote(250);
    d4.playNote(500);
    c4.playNote(500);
    f4.playNote(500);
    e4.playNote(1000);
    c4.playNote(250);
    c4.playNote(250);
    d4.playNote(500);
    c4.playNote(500);
    g4.playNote(500);
    f4.playNote(1000);
    c4.playNote(250);
    c4.playNote(250);
    c5.playNote(500);
    a4.playNote(500);
    f4.playNote(250);
    f4.playNote(250);
    e4.playNote(500);
    d4.playNote(500);
    b4Flat.playNote(250);
    b4Flat.playNote(250);
    a4.playNote(500);
    f4.playNote(500);
    g4.playNote(500);
    f4.playNote(1000);


















    return 0;
}
