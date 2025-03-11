
typedef char Str15[16];

struct nameTag {
   Str15 first;
   Str15 last;
};

typedef struct nameTag nameType;

struct studentTag {
   int id_number;
   // struct nameTag name;  // nested structure
   nameType name;  // nested structure
   float grade;
};

typedef struct studentTag studentType;




