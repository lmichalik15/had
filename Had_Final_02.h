// TODO: Zde odkažte na dodatečné hlavičky, které program vyžaduje.


// vyvhozi hodnoty pro aplikaci

#define widthField 30         // sirka pole
#define heightField 15        // vyska pole

int field[heightField][widthField];    // pole

// pozice hada, hlavy, ocasu
int x;
int y;
int Gy;
int head;
int tail;

int i;
int j;
int game;

// ovoce  // pozice ovoce
int fruit;
int a;
int b;

// prekazky
int obstacle;
int l;
int m;


int var;         // klavesa
int direction;   // smer
int difficultness;
int speed;


// bodovani
char name[32];
int score;
#define MAX_LINE_LENGTH 1000

// sipky
int doprava = 77;
int doleva = 75;
int dolu = 80;
int nahoru = 72;
